/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x18002E1C0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180092464 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?Release@CCompositionSurfaceBitmap@@WCI@EAAKXZ @ 0x1800BCFA0 (-Release@CCompositionSurfaceBitmap@@WCI@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WDA@EAAKXZ @ 0x1800BCFB0 (-Release@CCompositionSurfaceBitmap@@WDA@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ @ 0x1800BCFC0 (-Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WEI@EAAKXZ @ 0x1800BCFD0 (-Release@CCompositionSurfaceBitmap@@WEI@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x18002DE80 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(CCompositionSurfaceBitmap *this)
{
  unsigned __int32 v1; // edi
  CCompositionSurfaceBitmap *(__fastcall *v3)(CCompositionSurfaceBitmap *, char); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CCompositionSurfaceBitmap *(__fastcall **)(CCompositionSurfaceBitmap *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CCompositionSurfaceBitmap::`scalar deleting destructor' )
      CCompositionSurfaceBitmap::`scalar deleting destructor'(this, 1);
    else
      v3(this, 1);
  }
  return v1;
}
