/*
 * XREFs of ?RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z @ 0x180179FA0
 * Callers:
 *     ?RemoveClippedD2D1CommandListForAllContexts@CCompositionSurfaceBitmap@@UEAAXPEAVCPolygon@@@Z @ 0x180142A60 (-RemoveClippedD2D1CommandListForAllContexts@CCompositionSurfaceBitmap@@UEAAXPEAVCPolygon@@@Z.c)
 *     ?RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z @ 0x180144E80 (-RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x180113208 (-FindKey@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPol.c)
 *     ?RemoveRange@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHHH@Z @ 0x18017A01C (-RemoveRange@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAV.c)
 */

void __fastcall CD2DCommandList::RemoveID2DCommandList(CD2DCommandList *this, struct CPolygon *a2)
{
  int Key; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  struct CPolygon *v6; // [rsp+38h] [rbp+10h] BYREF

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
