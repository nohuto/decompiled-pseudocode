/*
 * XREFs of ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180125778
 * Callers:
 *     ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180125678 (-RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  D3DDevice = CD3DDeviceManager::GetD3DDevice(a1, a2, *(struct _LUID *)((char *)a3 + 832), &v13);
  v8 = v13;
  v9 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v10 = CHwTexturedColorSource::RealizeFromBitmapSource(
            v13,
            a4,
            (__int128 *)a5,
            *(_DWORD *)(*((_QWORD *)a3 + 19) + 852LL),
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
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 392));
  return v9;
}
