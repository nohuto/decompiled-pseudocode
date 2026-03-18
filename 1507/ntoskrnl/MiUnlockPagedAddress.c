/*
 * XREFs of MiUnlockPagedAddress @ 0x1400056EC
 * Callers:
 *     MiFreeClonePool @ 0x14000568C (MiFreeClonePool.c)
 *     MiDereferenceTebVad @ 0x1401273DC (MiDereferenceTebVad.c)
 *     MiFreeCombinePool @ 0x14022A95C (MiFreeCombinePool.c)
 *     MiInsertNewCombineBlocks @ 0x14022A9B4 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x1404069E0 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x1406AA7EC (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 v2; // r9
  unsigned __int64 *v3; // rcx
  unsigned __int64 PteShadow; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0x90482413000LL;
  v2 = 2040LL;
  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v3;
  if ( (unsigned __int64)(v3 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v3, *v3);
  v9 = PteShadow;
  if ( (unsigned __int64)&v9 + v1 <= v2 )
    PteShadow = MiReadPteShadow(&v9, PteShadow);
  v5 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  MiRemoveLockedPageChargeAndDecRef(v5);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
