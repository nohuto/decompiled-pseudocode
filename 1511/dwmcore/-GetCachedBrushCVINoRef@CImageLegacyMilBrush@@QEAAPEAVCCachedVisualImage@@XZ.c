/*
 * XREFs of ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18005A62C
 * Callers:
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x180056280 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800563C0 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005A930 (-IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005C340 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

struct CCachedVisualImage *__fastcall CImageLegacyMilBrush::GetCachedBrushCVINoRef(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, __int64); // rbp
  char v4; // al

  v1 = *((_QWORD *)this + 64);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v1 + 16) + 48LL);
    if ( v3 == CBitmapResource::IsOfType )
    {
      v4 = CBitmapResource::IsOfType(v1 + 16, 56LL);
    }
    else if ( v3 == CCachedVisualImage::IsOfType )
    {
      v4 = CCachedVisualImage::IsOfType(v1 + 16, 56LL);
    }
    else
    {
      v4 = v3(v1 + 16, 56LL);
    }
    if ( v4 )
      return (struct CCachedVisualImage *)v1;
  }
  return (struct CCachedVisualImage *)v2;
}
