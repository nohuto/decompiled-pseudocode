/*
 * XREFs of ?GetDXGIResource@CDxHandleDecodeBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801526D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDXGIResource@CD3DTexture@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180084948 (-GetDXGIResource@CD3DTexture@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x180152210 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleDecodeBitmapRealization::GetDXGIResource(CD3DTexture **a1, struct IDXGIResource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int DXGIResource; // eax

  *a2 = 0LL;
  v4 = CDxHandleDecodeBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleDecodeBitmapRealization *)a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    DXGIResource = CD3DTexture::GetDXGIResource(a1[57], a2);
    v5 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0xFFu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xFDu);
  }
  return v5;
}
