/*
 * XREFs of ?DoesContainContent@CImageLegacyMilBrush@@MEBAJPEAH@Z @ 0x180032640
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180024750 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x18001B870 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrush::DoesContainContent(CImageLegacyMilBrush *this, int *a2)
{
  __int64 v3; // rcx
  CCachedVisualImage *v4; // rcx
  __int64 (*v5)(void); // rax
  char HasContent; // al

  *a2 = 0;
  v3 = *((_QWORD *)this + 74);
  if ( v3 )
  {
    v4 = (CCachedVisualImage *)(v3 + 8);
    v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 80LL);
    if ( (char *)v5 == (char *)CCachedVisualImage::HasContent )
      HasContent = CCachedVisualImage::HasContent(v4);
    else
      HasContent = v5();
    if ( HasContent )
      *a2 = 1;
  }
  return 0LL;
}
