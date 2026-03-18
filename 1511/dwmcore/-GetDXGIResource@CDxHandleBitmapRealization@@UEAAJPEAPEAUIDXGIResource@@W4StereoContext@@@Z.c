/*
 * XREFs of ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18000CFD0
 * Callers:
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180006E44 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18015CF40 (-GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 * Callees:
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18000D620 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180032790 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDXGIResource(CD2DBitmap **a1, struct IDXGIResource **a2)
{
  __int64 (__fastcall *v4)(CDxHandleBitmapRealization *__hidden); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int DXGIResource; // eax

  *a2 = 0LL;
  v4 = (__int64 (__fastcall *)(CDxHandleBitmapRealization *__hidden))*((_QWORD *)*a1 + 14);
  if ( v4 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v5 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)a1);
  else
    v5 = v4((CDxHandleBitmapRealization *)a1);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xFAu);
  }
  else
  {
    DXGIResource = CD2DBitmap::GetDXGIResource(a1[57], a2);
    v6 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0xFCu);
  }
  return v6;
}
