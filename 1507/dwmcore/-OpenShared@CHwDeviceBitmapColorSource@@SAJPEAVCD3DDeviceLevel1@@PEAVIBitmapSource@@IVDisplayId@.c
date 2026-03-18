/*
 * XREFs of ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x180013F60
 * Callers:
 *     ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800184E0 (-OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapCo.c)
 * Callees:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18001404C (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800142E4 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::OpenShared(
        struct CD3DDeviceLevel1 *a1,
        bool a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        bool a6,
        unsigned int a7,
        _QWORD *a8)
{
  int v9; // eax
  CMILPoolResource *v10; // rdi
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  CMILPoolResource *v15; // [rsp+40h] [rbp-49h] BYREF
  int v16; // [rsp+48h] [rbp-41h]
  int v17; // [rsp+4Ch] [rbp-3Dh]
  struct D3D11_TEXTURE2D_DESC v18; // [rsp+50h] [rbp-39h] BYREF

  v15 = 0LL;
  *a8 = 0LL;
  v9 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v18, a2, a1, a5, a6, a7, &v15);
  v10 = v15;
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x232u);
  }
  else
  {
    v12 = *((_DWORD *)v15 + 34);
    v15 = 0LL;
    v16 = v12;
    v17 = v12;
    v13 = CHwDeviceBitmapColorSource::CreateFromExistingTexture(a1, (__int64)&v15, (__int64)v10, (__int64)a8);
    v11 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x247u);
  }
  if ( v10 )
    CMILPoolResource::Release(v10);
  return v11;
}
