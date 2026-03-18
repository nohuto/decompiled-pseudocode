/*
 * XREFs of PfSnRemoveProcessTrace @ 0x1400D7900
 * Callers:
 *     PfSnDeactivateTrace @ 0x1400D76FC (PfSnDeactivateTrace.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

unsigned __int64 __fastcall PfSnRemoveProcessTrace(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  unsigned int v3; // edx
  signed __int64 v4; // r8
  bool v5; // zf
  signed __int64 v6; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v9; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 1184), 0LL);
  v2 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
  v3 = v1 & 0xF;
  if ( v3 )
  {
    _m_prefetchw((const void *)(v2 + 360));
    v4 = *(_QWORD *)(v2 + 360);
    if ( (v4 & 1) != 0 )
    {
LABEL_11:
      v9 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9, -(__int64)v3) == v3
        && !_interlockedbittestandreset((volatile signed __int32 *)(v9 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v9 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 360), v4 - 2 * v3, v4);
        v5 = v4 == v6;
        v4 = v6;
        if ( v5 )
          break;
        if ( (v6 & 1) != 0 )
          goto LABEL_11;
      }
    }
  }
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
  return v2;
}
