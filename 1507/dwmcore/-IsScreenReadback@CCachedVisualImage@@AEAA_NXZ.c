/*
 * XREFs of ?IsScreenReadback@CCachedVisualImage@@AEAA_NXZ @ 0x180053294
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?GetRenderParameter@CComposition@@QEAA_NW4Enum@MilVisualRenderParameterType@@PEAPEAUMilVisualRenderParameter@@@Z @ 0x180067EA0 (-GetRenderParameter@CComposition@@QEAA_NW4Enum@MilVisualRenderParameterType@@PEAPEAUMilVisualRen.c)
 */

bool __fastcall CCachedVisualImage::IsScreenReadback(CCachedVisualImage *this)
{
  int v1; // r10d
  char v3; // cl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)CComposition::GetRenderParameter(*((_QWORD *)this + 4), 0LL, &v4) )
  {
    v3 = v1;
    if ( *(_DWORD *)(v4 + 4) != v1 )
      v3 = 1;
    LOBYTE(v1) = v3;
  }
  return v1;
}
