/*
 * XREFs of ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18004CC40
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18004D4A0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180035490 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1800E9E04 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180104678 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
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

  v2 = *((_DWORD *)this + 108) - 1;
  for ( i = v2; i >= 0; --i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 51) + 8 * i);
    *(_WORD *)(v6 + 1284) = 0;
    for ( j = *(_QWORD **)(v6 + 328); j != (_QWORD *)(v6 + 328); j = (_QWORD *)*j )
      CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(j - 11));
    CVisual::Release((CVisual *)v6);
  }
  v4 = *((_DWORD *)this + 126) - 1;
  for ( k = v4; k >= 0; --k )
  {
    v8 = *(CVisual **)(*((_QWORD *)this + 60) + 8 * k);
    CVisual::PurgeOldRenderPassInfos(v8);
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_DWORD *)this + 108) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 51, 8u);
  *((_DWORD *)this + 126) = 0;
}
