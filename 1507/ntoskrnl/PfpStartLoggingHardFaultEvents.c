/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x1403EEE9C
 * Callers:
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 PfpStartLoggingHardFaultEvents()
{
  _DWORD *PoolWithTag; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x44506650u);
  v1 = 0;
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[40] = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_140353538);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353538, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140353538);
    }
    *(_DWORD *)(v2 + 164) = ++dword_140353544;
    _InterlockedOr(&dword_140367DD4, 1u);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&qword_140353538, retaddr);
    else
      _InterlockedAnd64(&qword_140353538, 0LL);
    __writecr8(CurrentIrql);
    KeInitializeTimerEx((PKTIMER)(v2 + 64), NotificationTimer);
    KeInitializeDpc((PRKDPC)v2, (PKDEFERRED_ROUTINE)PfpPowerActionDpcRoutine, (PVOID)v2);
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
