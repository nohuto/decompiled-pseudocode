/*
 * XREFs of ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18013B6C8
 * Callers:
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180132EE0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18013F124 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
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
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v9; // r15
  __int64 *v11; // r14
  int v12; // eax
  unsigned int v13; // esi
  int Shared; // eax
  __int64 v15; // rdi
  __int64 v17[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+8h] BYREF
  int v19; // [rsp+B8h] [rbp+20h]

  v19 = a4;
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 144);
  v9 = a7;
  v11 = a8;
  v18 = 0LL;
  v17[0] = 0LL;
  *a7 = 0LL;
  *v11 = 0LL;
  v12 = (**v8)(v8, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v18);
  v13 = v12;
  if ( v12 >= 0 )
  {
    Shared = CHwDeviceBitmapColorSource::CreateShared(
               *(struct CD3DDeviceLevel1 **)(a1 + 136),
               v19,
               a5,
               a6,
               (__int64)v17,
               (__int64)v11);
    v13 = Shared;
    if ( Shared >= 0 )
    {
      v15 = *v11;
      *(_QWORD *)(v15 + 336) = *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 496) = v15;
      (**(void (__fastcall ***)(__int64))v15)(v15);
      *v9 = v17[0];
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Shared, 0x475u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x46Bu);
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v13;
}
