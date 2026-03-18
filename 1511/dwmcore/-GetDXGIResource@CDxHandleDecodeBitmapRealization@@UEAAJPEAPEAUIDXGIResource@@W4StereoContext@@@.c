/*
 * XREFs of ?GetDXGIResource@CDxHandleDecodeBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18015FBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDXGIResource@CD3DTexture@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18002D8BC (-GetDXGIResource@CD3DTexture@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x18015F6E0 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0x106u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x104u);
  }
  return v5;
}
