/*
 * XREFs of MiMakeProtoTransition @ 0x1400ED218
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMakeProtoTransition(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rbx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v2 = ((unsigned __int64)*(unsigned int *)(a1 + 16) >> 5) & 0x1F;
  v3 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                          + 8 * ((v1 >> 3) & 0x1FF));
  v4 = (32 * (v2 & 0x1F | 0x40)) | MI_READ_PTE_LOCK_FREE(v3) & 0xFFFFFFFFFFFFF81EuLL;
  *v3 = v4;
  if ( (unsigned int)MiPteInShadowRange(v3) )
    MiWritePteShadow(v3, v4);
  return MiUnmapPageInHyperSpaceWorker((__int64)v3, 0x11u);
}
