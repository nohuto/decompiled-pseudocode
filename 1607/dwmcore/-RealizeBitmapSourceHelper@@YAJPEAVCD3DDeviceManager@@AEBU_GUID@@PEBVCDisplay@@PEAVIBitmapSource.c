/*
 * XREFs of ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180164A18
 * Callers:
 *     ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180164918 (-RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RealizeBitmapSourceHelper(
        struct CD3DDeviceManager *a1,
        const struct _GUID *a2,
        const struct CDisplay *a3,
        struct IBitmapSource *a4,
        const struct PixelFormatInfo *a5)
{
  struct _LUID v7; // r8
  CHwBitmapColorSource *v8; // rbx
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v10; // rsi
  unsigned int v11; // edi
  int v12; // eax
  struct CD3DDeviceLevel1 *v14; // [rsp+40h] [rbp-28h] BYREF
  CHwBitmapColorSource *v15; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0LL;
  v7 = (struct _LUID)*((_QWORD *)a3 + 29);
  v8 = 0LL;
  v15 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(a1, a2, v7, &v14);
  v10 = v14;
  v11 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x25u);
  }
  else
  {
    v12 = CHwTexturedColorSource::RealizeFromBitmapSource(
            v14,
            a4,
            (__int128 *)a5,
            *(_DWORD *)(*((_QWORD *)a3 + 17) + 244LL),
            0,
            0LL,
            &v15);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2Du);
    v8 = v15;
  }
  if ( v8 )
    (*(void (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v10 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v10 + 408));
  return v11;
}
