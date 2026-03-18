/*
 * XREFs of ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18015CF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18000CFD0 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18000D620 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x18015CD50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x18015D1FC (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDXGIResource(
        __int64 a1,
        struct IDXGIResource **a2,
        unsigned int a3)
{
  CD2DBitmap **v5; // rcx
  int DXGIResource; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax

  if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(a1, a3) )
  {
    DXGIResource = CDxHandleBitmapRealization::GetDXGIResource(v5, a2);
    v7 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0xAAu);
  }
  else
  {
    v8 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(v5);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v9 = CD2DBitmap::GetDXGIResource(*(CD2DBitmap **)(a1 + 472), a2);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB0u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xAEu);
    }
  }
  return v7;
}
