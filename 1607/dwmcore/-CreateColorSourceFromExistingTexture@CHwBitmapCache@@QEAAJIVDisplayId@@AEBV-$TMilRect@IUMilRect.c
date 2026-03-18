/*
 * XREFs of ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180081D20
 * Callers:
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800942EC (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800A5AF4 (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::CreateColorSourceFromExistingTexture(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v6; // rsi
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v15 = 0LL;
  v6 = (__int64 *)a6;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 144);
  *(_QWORD *)a6 = 0LL;
  v10 = (**v9)(v9, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v15);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x4D4u);
  }
  else
  {
    v12 = CHwDeviceBitmapColorSource::CreateFromExistingTexture(
            *(struct CD3DDeviceLevel1 **)(a1 + 136),
            a4,
            a5,
            (__int64)v6);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x4DCu);
    }
    else
    {
      v13 = *v6;
      *(_QWORD *)(v13 + 336) = *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 496) = v13;
      (**(void (__fastcall ***)(__int64))v13)(v13);
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v11;
}
