/*
 * XREFs of MiReleaseArbitraryPage @ 0x14022B07C
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v4; // esi
  _QWORD *v5; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  v5 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0LL;
  *v5 = 0LL;
  if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow((__int64)v5, 0LL);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
