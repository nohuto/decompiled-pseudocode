/*
 * XREFs of ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18007E150
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18007E754 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004DA50 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180105CE0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180120A40 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ResetMoveOptimizationNodes(CHwndRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rdi
  int v4; // eax
  __int64 k; // rbp
  __int64 v6; // rbp
  _QWORD *j; // rbx
  CVisual *v8; // rdi

  v2 = *((_DWORD *)this + 106) - 1;
  for ( i = v2; i >= 0; --i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 50) + 8 * i);
    *(_WORD *)(v6 + 1236) = 0;
    for ( j = *(_QWORD **)(v6 + 312); j != (_QWORD *)(v6 + 312); j = (_QWORD *)*j )
      CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(j - 11));
    CVisual::Release((CVisual *)v6);
  }
  v4 = *((_DWORD *)this + 124) - 1;
  for ( k = v4; k >= 0; --k )
  {
    v8 = *(CVisual **)(*((_QWORD *)this + 59) + 8 * k);
    CVisual::PurgeOldRenderPassInfos(v8);
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_DWORD *)this + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 50, 8u);
  *((_DWORD *)this + 124) = 0;
}
