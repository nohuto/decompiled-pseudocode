/*
 * XREFs of ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1800A6494
 * Callers:
 *     ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180081DFC (-OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapCo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800A5AF4 (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800A6580 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::OpenShared(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        bool a6,
        unsigned int a7,
        CHwDeviceBitmapColorSource **a8)
{
  int v11; // eax
  CMILPoolResource *v12; // rdi
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  CMILPoolResource *v17; // [rsp+40h] [rbp-49h] BYREF
  int v18; // [rsp+48h] [rbp-41h]
  int v19; // [rsp+4Ch] [rbp-3Dh]
  struct D3D11_TEXTURE2D_DESC v20; // [rsp+50h] [rbp-39h] BYREF

  v17 = 0LL;
  *a8 = 0LL;
  v11 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v20, a2, a1, a5, a6, a7, &v17);
  v12 = v17;
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x230u);
  }
  else
  {
    v14 = *((_DWORD *)v17 + 34);
    v17 = 0LL;
    v18 = v14;
    v19 = v14;
    v15 = CHwDeviceBitmapColorSource::CreateFromExistingTexture(a1, a2, a3, a4, (__int64)&v17, (__int64)v12, a8);
    v13 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x245u);
  }
  if ( v12 )
    CMILPoolResource::Release(v12);
  return v13;
}
