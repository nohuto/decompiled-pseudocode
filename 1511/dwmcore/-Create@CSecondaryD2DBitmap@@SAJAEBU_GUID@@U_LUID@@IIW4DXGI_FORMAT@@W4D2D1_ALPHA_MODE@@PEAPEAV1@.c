/*
 * XREFs of ?Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@@Z @ 0x18000F80C
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18000D308 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180011458 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Create(
        const struct _GUID *a1,
        struct _LUID a2,
        int a3,
        int a4,
        enum DXGI_FORMAT a5,
        enum D2D1_ALPHA_MODE a6,
        struct CSecondaryD2DBitmap **a7)
{
  __int128 v7; // xmm0
  int v8; // eax
  unsigned int v9; // ebx
  struct D2D1_BITMAP_PROPERTIES1 v11; // [rsp+30h] [rbp-41h] BYREF
  _DWORD v12[12]; // [rsp+50h] [rbp-21h] BYREF
  __int128 v13; // [rsp+80h] [rbp+Fh]

  v12[6] = 0;
  v12[7] = 0;
  v12[9] = 0;
  v12[10] = 0;
  v11.bitmapOptions = D2D1_BITMAP_OPTIONS_NONE;
  v11.colorContext = 0LL;
  v11.pixelFormat = (D2D1_PIXEL_FORMAT)"DWM Secondary D2D Bitmap";
  v12[4] = a5;
  LODWORD(v11.dpiX) = 24;
  v7 = *(_OWORD *)&v11.pixelFormat.format;
  v11.pixelFormat.format = a5;
  v11.pixelFormat.alphaMode = a6;
  v12[0] = a3;
  v12[2] = 1;
  v12[3] = 1;
  v12[5] = 1;
  v12[1] = a4;
  v13 = v7;
  v12[8] = 8;
  v11.dpiX = 96.0;
  v11.dpiY = 96.0;
  v8 = CD3DDeviceManager::CreateSecondaryD2DBitmap(
         (CD3DDeviceManager *)&g_D3DDeviceManager,
         a1,
         a2,
         (struct DWM_TEXTURE2D_DESC *)v12,
         &v11,
         a7);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x35u);
  return v9;
}
