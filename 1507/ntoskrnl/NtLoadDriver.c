/*
 * XREFs of NtLoadDriver @ 0x14057157C
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     IopLoadUnloadDriver @ 0x140571B04 (IopLoadUnloadDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  ULONG64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  char PreviousMode; // di
  int v4; // eax
  wchar_t *v5; // rcx
  ULONG64 v6; // rdx
  PVOID PoolWithTagPriority; // rbx
  UNICODE_STRING Src; // [rsp+38h] [rbp-70h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-38h] BYREF
  __int64 v12; // [rsp+88h] [rbp-20h]
  void **p_Src; // [rsp+90h] [rbp-18h]
  NTSTATUS v14; // [rsp+98h] [rbp-10h]

  v1 = (ULONG64)DriverServiceName;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, CurrentThread->PreviousMode) )
      return -1073741727;
    if ( v1 >= MmUserProbeAddress )
      v1 = MmUserProbeAddress;
    v4 = *(_DWORD *)v1;
    *(_DWORD *)&Src.Length = v4;
    v5 = *(wchar_t **)(v1 + 8);
    Src.Buffer = v5;
    if ( !(_WORD)v4 )
      return -1073741811;
    if ( ((unsigned __int8)v5 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (ULONG64)v5 + (unsigned __int16)v4;
    if ( v6 > MmUserProbeAddress || v6 < (unsigned __int64)v5 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( ViVerifierDriverAddedThunkListHead )
    {
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              Src.Length,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      if ( !PoolWithTagPriority )
        RtlRaiseStatus(-1073741670);
    }
    else
    {
      PoolWithTagPriority = ExAllocatePoolWithQuotaTag(PagedPool, Src.Length, 0x20206F49u);
    }
    memmove(PoolWithTagPriority, Src.Buffer, Src.Length);
    Src.Buffer = (wchar_t *)PoolWithTagPriority;
  }
  else
  {
    Src = *DriverServiceName;
    PoolWithTagPriority = 0LL;
  }
  if ( PreviousMode && PsIsCurrentThreadInServerSilo() )
  {
    if ( PoolWithTagPriority )
      ExFreePoolWithTag(PoolWithTagPriority, 0);
    return 0;
  }
  else
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v12 = 0LL;
    p_Src = (void **)&Src;
    if ( CurrentThread->ApcState.Process == PsInitialSystemProcess )
    {
      IopLoadUnloadDriver(&WorkItem);
    }
    else
    {
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
      WorkItem.Parameter = &WorkItem;
      WorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
    }
    if ( PoolWithTagPriority )
      ExFreePoolWithTag(PoolWithTagPriority, 0);
    return v14;
  }
}
