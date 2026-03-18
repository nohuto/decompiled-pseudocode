/*
 * XREFs of ?IsMonitorSpecificContent@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ @ 0x18014408C
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033D40 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180034328 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x1801325D8 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 */

char __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsMonitorSpecificContent(
        CCachedVisualImage::RenderTargetBitmapInfo *this,
        __int64 a2,
        __int64 a3,
        struct _GUID *a4)
{
  CRenderTargetBitmap *v4; // rcx
  char v5; // bl
  int v7; // [rsp+30h] [rbp+8h] BYREF
  struct _LUID v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = (CRenderTargetBitmap *)*((_QWORD *)this + 1);
  v5 = 0;
  v7 = 0;
  if ( (int)CRenderTargetBitmap::GetDeviceInfo(v4, &v8, (struct DisplayId *)&v7, a4) >= 0 )
    return DisplayId::IsSpecific((DisplayId *)&v7);
  return v5;
}
