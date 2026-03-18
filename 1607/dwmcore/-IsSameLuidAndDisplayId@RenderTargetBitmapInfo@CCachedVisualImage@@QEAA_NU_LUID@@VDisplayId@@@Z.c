/*
 * XREFs of ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x18001B95C
 * Callers:
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18001B810 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsNone@DisplayId@@QEBA_NXZ @ 0x180110938 (-IsNone@DisplayId@@QEBA_NXZ.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x1801325D8 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 */

char __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(
        __int64 a1,
        __int64 a2,
        int a3,
        struct _GUID *a4)
{
  CRenderTargetBitmap *v4; // rcx
  char v5; // bl
  int v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h]
  int v9; // [rsp+50h] [rbp+28h]
  struct _LUID v10; // [rsp+58h] [rbp+30h] BYREF

  v9 = a3;
  v8 = a2;
  v4 = *(CRenderTargetBitmap **)(a1 + 8);
  v5 = 0;
  v7 = 0;
  if ( (int)CRenderTargetBitmap::GetDeviceInfo(v4, &v10, (struct DisplayId *)&v7, a4) >= 0
    && v8 == v10
    && (DisplayId::IsNone((DisplayId *)&v7) || v9 == v7) )
  {
    return 1;
  }
  return v5;
}
