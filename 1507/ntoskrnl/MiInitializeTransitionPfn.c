/*
 * XREFs of MiInitializeTransitionPfn @ 0x1400E2B5C
 * Callers:
 *     MiSectionCreated @ 0x14002E3D0 (MiSectionCreated.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 ContainingPageTable; // rax
  unsigned int v7; // esi
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 PteShadow; // rax
  __int64 v11; // rcx
  char v12; // al
  char v13; // al
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 TransitionPte; // rax
  __int64 v19; // rbx
  __int64 result; // rax
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a2, a2, a3);
  v7 = 0;
  v8 = (unsigned __int64)(a2 + 0x12090482600LL);
  *(_QWORD *)v4 = 0LL;
  v9 = ContainingPageTable;
  PteShadow = *a2;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, *a2);
  v11 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 16) = PteShadow;
  *(_QWORD *)(v4 + 8) = a2;
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  v12 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 40) = v9 & 0xFFFFFFFFFLL | v11 & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  if ( (v12 & 0x10) != 0 )
    v13 = v12 & 0xF8 | 3;
  else
    v13 = v12 & 0xF8 | 2;
  *(_BYTE *)(v4 + 34) = v13;
  v14 = *a2;
  if ( v8 <= 0x7F8 )
    v14 = MiReadPteShadow(a2, *a2);
  v21 = v14;
  v15 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v21);
  v16 = v15;
  if ( v15 >> 3 == 3 && (v15 & 7) != 0 )
  {
    v17 = (unsigned int)dword_1403D0480;
  }
  else
  {
    v17 = 1LL;
    if ( v15 >> 3 == 1 )
      v17 = (unsigned int)MiPlatformCacheAttributes[0];
  }
  MiFinalizePageAttribute(v4, v17, 1);
  *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
  TransitionPte = MiMakeTransitionPte(a1, v16);
  v21 = TransitionPte;
  *a2 = TransitionPte;
  if ( v8 <= 0x7F8 )
    MiWritePteShadow(a2, TransitionPte);
  v19 = 48 * v9 - 0x58000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( *(__int64 *)(v19 + 24) < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
