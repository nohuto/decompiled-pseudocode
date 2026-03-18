/*
 * XREFs of NtInitiatePowerAction @ 0x1404F6BCC
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403B2740 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     IopWarmEjectDevice @ 0x1406178CC (IopWarmEjectDevice.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 */

NTSTATUS __stdcall NtInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE MinSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  KPROCESSOR_MODE PreviousMode; // dl
  int Lock; // edi
  struct _KEVENT *v10; // rbx
  struct _KEVENT *PoolWithTag; // rax
  char *p_WaitListHead; // rsi
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *Blink; // rax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v17[4]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  struct _KEVENT *v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+58h] [rbp-8h]

  Timeout.QuadPart = -1500000000LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Lock = 0;
  v10 = 0LL;
  if ( PreviousMode )
  {
    if ( SystemAction == PowerActionWarmEject )
      return -1073741811;
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return -1073741727;
  }
  if ( MinSystemState > PowerSystemMaximum
    || SystemAction > PowerActionWarmEject
    || (Flags & 0x10000000) != 0
    || SystemAction == PowerActionSleep && MinSystemState >= PowerSystemHibernate
    || (Flags & 0xFFFFFF0) != 0 )
  {
    return -1073741811;
  }
  if ( (unsigned int)(SystemAction - 4) > 2 && PsIsCurrentThreadInServerSilo() )
    return -1073741637;
  v17[0] = SystemAction;
  v17[1] = Flags;
  v18 = 0x8000000004LL;
  v17[2] = 0;
  v19 = 0LL;
  v20 = 0LL;
  if ( !Asynchronous )
  {
    PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x57634150u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, 0x38uLL);
    v10[1].Header.LockNV = 0;
    *(_QWORD *)&v10[2].Header.Lock = &v18;
    KeInitializeEvent(v10, NotificationEvent, 0);
    HIDWORD(v18) |= 0x20u;
    v19 = v10;
  }
  PopAcquirePolicyLock();
  PopExecutePowerAction((unsigned int)&v18, 0, (unsigned int)v17, MinSystemState, 1);
  PopReleasePolicyLock();
  if ( v10 )
  {
    p_WaitListHead = (char *)&v10[1].Header.WaitListHead;
    if ( !v10[1].Header.WaitListHead.Flink )
      goto LABEL_20;
    Lock = KeWaitForSingleObject(v10, Suspended, 0, 1u, &Timeout);
    if ( Lock == 258 && (byte_1402DE081 & 3) != 0 )
      Lock = KeWaitForSingleObject(v10, Suspended, 0, 1u, 0LL);
    PopAcquirePolicyLock();
    v13 = *(struct _LIST_ENTRY **)p_WaitListHead;
    Blink = v10[1].Header.WaitListHead.Blink;
    if ( *(char **)(*(_QWORD *)p_WaitListHead + 8LL) != p_WaitListHead || (char *)Blink->Flink != p_WaitListHead )
      __fastfail(3u);
    Blink->Flink = v13;
    v13->Blink = Blink;
    PopReleasePolicyLock();
    if ( Lock >= 0 )
    {
LABEL_20:
      Lock = v10[1].Header.Lock;
      if ( Lock >= 0 )
        Lock = 0;
    }
    ExFreePoolWithTag(v10, 0);
  }
  return Lock;
}
