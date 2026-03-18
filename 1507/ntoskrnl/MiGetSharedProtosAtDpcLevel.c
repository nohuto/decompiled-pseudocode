/*
 * XREFs of MiGetSharedProtosAtDpcLevel @ 0x14021C5B4
 * Callers:
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLocateSessionProtosInSubsection @ 0x14021C63C (MiLocateSessionProtosInSubsection.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetSharedProtosAtDpcLevel(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v3; // rbx
  signed __int32 v6; // ett
  __int64 SessionProtosInSubsection; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (_DWORD *)(a1 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 72);
  }
  else
  {
    _m_prefetchw(v3);
    v6 = *v3 & 0x7FFFFFFF;
    if ( v6 != _InterlockedCompareExchange(v3, v6 + 1, v6) )
      ExpWaitForSpinLockSharedAndAcquire(v3);
  }
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a3, a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr);
  }
  else
  {
    _InterlockedAnd(v3, 0xBFFFFFFF);
    _InterlockedDecrement(v3);
  }
  return SessionProtosInSubsection;
}
