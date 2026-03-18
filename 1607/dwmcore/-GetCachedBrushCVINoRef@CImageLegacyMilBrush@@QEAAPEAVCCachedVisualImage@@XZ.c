/*
 * XREFs of ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x180032274
 * Callers:
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18005CDE0 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18005CF00 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180032E90 (-IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AE890 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct CCachedVisualImage *__fastcall CImageLegacyMilBrush::GetCachedBrushCVINoRef(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  char v5; // al

  v1 = *((_QWORD *)this + 74);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = v1 + 16;
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v1 + 16) + 48LL);
    if ( v4 == CBitmapResource::IsOfType )
    {
      v5 = CBitmapResource::IsOfType(v3, 57LL);
    }
    else if ( v4 == CCachedVisualImage::IsOfType )
    {
      v5 = CCachedVisualImage::IsOfType(v3, 57LL);
    }
    else
    {
      v5 = v4(v3, 57LL);
    }
    if ( v5 )
      return (struct CCachedVisualImage *)v1;
  }
  return (struct CCachedVisualImage *)v2;
}
