/*
 * XREFs of ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x18013AAD4
 * Callers:
 *     ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x18013A9D4 (-RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall RealizeBitmapSourceHelper(
        struct CD3DDeviceManager *a1,
        const struct _GUID *a2,
        const struct CDisplay *a3,
        struct IBitmapSource *a4,
        const struct PixelFormatInfo *a5)
{
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v8; // rbp
  unsigned int v9; // edi
  int v10; // eax
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
  struct CD3DDeviceLevel1 *v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  v12[0] = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(a1, a2, *(struct _LUID *)((char *)a3 + 232), &v13);
  v8 = v13;
  v9 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v10 = CHwTexturedColorSource::RealizeFromBitmapSource(
            v13,
            a4,
            (__int128 *)a5,
            *(_DWORD *)(*((_QWORD *)a3 + 17) + 244LL),
            0,
            0LL,
            (__int64)v12);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2Du);
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 8LL))(v12[0]);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x25u);
  }
  if ( v8 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 384));
  return v9;
}
