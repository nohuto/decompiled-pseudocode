/*
 * XREFs of KiSelectCandidateProcessor @ 0x14020B500
 * Callers:
 *     KiChooseTargetProcessor @ 0x14004D7D0 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x140206FF4 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  _DWORD *v7; // rbx
  signed __int32 v8; // ett
  __int64 v9; // rdi
  char v10; // cl
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 1600);
  v5 = a1;
  v6 = *(_QWORD *)(v3 + 136) & *(_QWORD *)(a2 + 576);
  v7 = (_DWORD *)(v3 + 88);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v3 + 88);
  }
  else
  {
    _m_prefetchw(v7);
    v8 = *v7 & 0x7FFFFFFF;
    if ( v8 != _InterlockedCompareExchange(v7, v8 + 1, v8) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(v3 + 88));
  }
  v9 = *(_QWORD *)(v3 + 80) & v6;
  if ( (a3 & v9) != 0 )
    v9 &= a3;
  if ( v9 )
  {
    v10 = *(_BYTE *)(v5 + 1617);
    _BitScanForward64(&v11, __ROR8__(v9, v10));
    v5 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v5 + 1616)
                                                             + (((unsigned __int8)v11 + v10) & 0x3F)]];
  }
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    while ( *(_QWORD *)(v5 + 48) );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3 + 88, retaddr);
  }
  else
  {
    _InterlockedAnd(v7, 0xBFFFFFFF);
    _InterlockedDecrement(v7);
  }
  return v5;
}
