/*
 * XREFs of MiMapArbitraryPage @ 0x14022AC30
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v9; // ebp
  unsigned int v10; // esi
  int v11; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx

  v4 = a2[8];
  v5 = (unsigned __int64 *)a2[9];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = 0;
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  v11 = MiCombineCandidate(a1, v4);
  if ( a3 )
  {
    if ( v11 != a3 )
      goto LABEL_10;
  }
  else if ( !v11 )
  {
LABEL_10:
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( a4 == 1 && (unsigned __int8)((*(_BYTE *)(v4 + 34) & 7) - 2) > 1u )
    goto LABEL_10;
  if ( (*(_BYTE *)(v4 + 34) & 0xC0) != 0xC0 )
  {
    MiMakeProtectionPfnCompatible(1, v4);
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v5) )
      v13 |= 0x100uLL;
    v14 = v13 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
    a2[7] = v5;
    a2[6] = v4;
    *v5 = v14;
    if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow((__int64)v5, v14);
    v9 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v9;
}
