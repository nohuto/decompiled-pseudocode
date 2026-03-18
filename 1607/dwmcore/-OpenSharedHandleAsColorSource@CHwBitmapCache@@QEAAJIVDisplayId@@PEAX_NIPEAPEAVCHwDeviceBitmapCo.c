/*
 * XREFs of ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180081DFC
 * Callers:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1800352B0 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1800A6494 (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::OpenSharedHandleAsColorSource(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 *a7)
{
  __int64 *v7; // rsi
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  char v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+18h]

  v19 = a3;
  v18 = 0LL;
  v7 = a7;
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[18];
  *a7 = 0LL;
  v12 = (**v9)(v9, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v18);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x4A3u);
  }
  else
  {
    v17 = a5;
    v14 = CHwDeviceBitmapColorSource::OpenShared(a1[17], v18, a2, v19, a4, v17, a6, v7);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4ACu);
    }
    else
    {
      v15 = *v7;
      *(_QWORD *)(v15 + 336) = a1[62];
      a1[62] = v15;
      (**(void (__fastcall ***)(__int64))v15)(v15);
    }
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v13;
}
