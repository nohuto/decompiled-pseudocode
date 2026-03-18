/*
 * XREFs of ?RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z @ 0x1801388CC
 * Callers:
 *     ?RemoveClippedD2D1CommandListForAllContexts@CCompositionSurfaceBitmap@@UEAAXPEAVCPolygon@@@Z @ 0x18010A840 (-RemoveClippedD2D1CommandListForAllContexts@CCompositionSurfaceBitmap@@UEAAXPEAVCPolygon@@@Z.c)
 *     ?RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z @ 0x18010C900 (-RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x1800E0B40 (-FindKey@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPol.c)
 *     ?RemoveRange@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHHH@Z @ 0x180138958 (-RemoveRange@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAV.c)
 */

void __fastcall CD2DCommandList::RemoveID2DCommandList(CD2DCommandList *this, struct CPolygon *a2)
{
  int Key; // eax
  __int64 v4; // rdi
  __int64 v5; // r14
  struct CPolygon *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  Key = CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
          (__int64)this + 104,
          (__int64 *)&v6);
  v4 = Key;
  if ( Key != -1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * Key);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v4) = 0LL;
    }
    CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveRange(
      (char *)this + 104,
      (unsigned int)v4);
  }
}
