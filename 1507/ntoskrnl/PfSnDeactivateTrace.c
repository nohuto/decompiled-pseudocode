/*
 * XREFs of PfSnDeactivateTrace @ 0x1400D76FC
 * Callers:
 *     PfSnEndTrace @ 0x1404F6D18 (PfSnEndTrace.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     PfSnCancelTraceTimer @ 0x1400D7844 (PfSnCancelTraceTimer.c)
 *     PfSnRemoveProcessTrace @ 0x1400D7900 (PfSnRemoveProcessTrace.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PfSnDeactivateTrace(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v3; // rtt
  unsigned __int64 v4; // rax
  unsigned __int8 v5; // di
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_140353640);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353640, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140353640);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_140353640, retaddr);
  else
    _InterlockedAnd64(&qword_140353640, 0LL);
  __writecr8(CurrentIrql);
  PfSnRemoveProcessTrace(a1[44].Count);
  _m_prefetchw(&a1[45]);
  v3 = a1[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[45], v3 - 2, v3) )
    ExfReleaseRundownProtection(a1 + 45);
  PfSnCancelTraceTimer(a1);
  v4 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[45], 1LL, 0LL);
  if ( v4 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&a1[45], v4);
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_140353640);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353640, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140353640);
  }
  Count = a1[1].Count;
  v7 = (struct _EX_RUNDOWN_REF **)a1[2].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &a1[1] || *v7 != &a1[1] )
    __fastfail(3u);
  --PfSnNumActiveTraces;
  *v7 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v7;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_140353640, retaddr);
  else
    _InterlockedAnd64(&qword_140353640, 0LL);
  __writecr8(v5);
  return 0LL;
}
