/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x14002D234
 * Callers:
 *     SepInitSingletonEntry @ 0x14002D19C (SepInitSingletonEntry.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCleanSingletonEntry @ 0x1401277C4 (SepCleanSingletonEntry.c)
 *     SepSetSingletonEntry @ 0x14024FEF0 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025004C (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall SepGetSingletonEntryFromIndexNumber(unsigned int a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v6; // ett
  volatile signed __int32 *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SepSingletonGlobal;
  v2 = a1 >> 6;
  v3 = 0LL;
  v4 = a1 & 0x3F;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v1);
  }
  else
  {
    _m_prefetchw(v1);
    v6 = *v1 & 0x7FFFFFFF;
    if ( v6 != _InterlockedCompareExchange(v1, v6 + 1, v6) )
      ExpWaitForSpinLockSharedAndAcquire(v1);
  }
  v7 = (volatile signed __int32 *)SepSingletonGlobal;
  if ( (unsigned int)v2 < *((_DWORD *)SepSingletonGlobal + 1) )
    v3 = *(_QWORD *)(*((_QWORD *)SepSingletonGlobal + 1) + 8 * v2) + 24 * v4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SepSingletonGlobal, retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)SepSingletonGlobal, 0xBFFFFFFF);
    _InterlockedDecrement(v7);
  }
  __writecr8(CurrentIrql);
  return v3;
}
