/*
 * XREFs of ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180190390
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180178D20 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18018FC60 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801901E0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1801905D0 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDXGIResource(
        CD2DBitmap **a1,
        struct IDXGIResource **a2,
        unsigned int a3)
{
  int DXGIResource; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax

  if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(a1, a3) )
  {
    DXGIResource = CDxHandleBitmapRealization::GetDXGIResource(a1, a2);
    v6 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0xABu);
  }
  else
  {
    v7 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(a1);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xAFu);
    }
    else
    {
      v8 = CD2DBitmap::GetDXGIResource(a1[54], a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB1u);
    }
  }
  return v6;
}
