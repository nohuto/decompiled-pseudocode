/*
 * XREFs of PfSnCancelTraceTimer @ 0x1400D7844
 * Callers:
 *     PfSnDeactivateTrace @ 0x1400D76FC (PfSnDeactivateTrace.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PfSnCancelTraceTimer(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  bool v4; // si
  unsigned __int64 v5; // rtt
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (volatile signed __int32 *)(a1 + 272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 272);
  }
  else if ( _interlockedbittestandset64(v2, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 272));
  }
  *(_DWORD *)(a1 + 280) |= 2u;
  v4 = KeCancelTimer((PKTIMER)(a1 + 136)) != 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v2, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    _m_prefetchw((const void *)(a1 + 360));
    v5 = *(_QWORD *)(a1 + 360) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 360), v5 - 2, v5) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
  }
  return 0LL;
}
