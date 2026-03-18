/*
 * XREFs of ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18018FC60
 * Callers:
 *     ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180190390 (-GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180178D20 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDXGIResource(CD2DBitmap **a1, struct IDXGIResource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int DXGIResource; // eax

  *a2 = 0LL;
  v4 = (*((__int64 (__fastcall **)(CD2DBitmap **))*a1 + 14))(a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x141u);
  }
  else
  {
    DXGIResource = CD2DBitmap::GetDXGIResource(a1[52], a2);
    v5 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0x143u);
  }
  return v5;
}
