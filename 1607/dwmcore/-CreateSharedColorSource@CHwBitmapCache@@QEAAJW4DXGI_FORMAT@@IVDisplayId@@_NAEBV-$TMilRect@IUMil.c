/*
 * XREFs of ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18017C114
 * Callers:
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180112D90 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18017F1A0 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 */

__int64 __fastcall CHwBitmapCache::CreateSharedColorSource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8)
{
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 *v10; // r14
  __int64 *v11; // rsi
  __int64 (__fastcall **v12)(_QWORD, GUID *, __int64 *); // rax
  int v13; // eax
  unsigned int v14; // ebx
  int Shared; // eax
  __int64 v16; // rcx
  __int64 v18[7]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+A8h] [rbp+20h]

  v20 = a4;
  v19 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 144);
  v10 = a7;
  v11 = a8;
  v18[0] = 0LL;
  v12 = *v9;
  *a7 = 0LL;
  *v11 = 0LL;
  v13 = (*v12)(v9, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v19);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x46Bu);
  }
  else
  {
    Shared = CHwDeviceBitmapColorSource::CreateShared(
               *(struct CD3DDeviceLevel1 **)(a1 + 136),
               v20,
               a5,
               a6,
               (__int64)v18,
               (__int64)v11);
    v14 = Shared;
    if ( Shared < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Shared, 0x475u);
    }
    else
    {
      v16 = *v11;
      *(_QWORD *)(v16 + 336) = *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 496) = v16;
      (**(void (__fastcall ***)(__int64))v16)(v16);
      *v10 = v18[0];
    }
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return v14;
}
