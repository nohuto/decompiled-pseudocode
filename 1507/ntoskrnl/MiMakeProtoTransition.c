/*
 * XREFs of MiMakeProtoTransition @ 0x140132098
 * Callers:
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 */

unsigned __int64 __fastcall MiMakeProtoTransition(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // r9
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // r9
  __int64 *v7; // rbx
  unsigned __int64 PteShadow; // rax
  __int64 TransitionPte; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
  v3 = *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL;
  v4 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL, 0LL);
  v5 = 0x90482413000LL;
  v6 = 2040LL;
  v7 = (__int64 *)(v4 + 8 * ((v3 >> 3) & 0x1FF));
  PteShadow = *v7;
  if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v7, *v7);
  v13 = PteShadow;
  if ( (unsigned __int64)&v13 + v5 <= v6 )
    PteShadow = MiReadPteShadow(&v13, PteShadow);
  TransitionPte = MiMakeTransitionPte((PteShadow >> 12) & 0xFFFFFFFFFLL, v1);
  v13 = TransitionPte;
  *v7 = TransitionPte;
  if ( (unsigned __int64)v7 + v10 <= v11 )
    MiWritePteShadow(v7, TransitionPte);
  return MiUnmapPageInHyperSpaceWorker((__int64)v7, 0x11u);
}
