/*
 * XREFs of ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800183E0
 * Callers:
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x180048B64 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 * Callees:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18001404C (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwBitmapCache::CreateColorSourceFromExistingTexture(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  CHwDeviceBitmapColorSource **v9; // r14
  __int64 (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rax
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  CHwDeviceBitmapColorSource *v14; // rdi
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+18h]

  v17 = a3;
  v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 144);
  v16 = 0LL;
  v9 = (CHwDeviceBitmapColorSource **)a6;
  v10 = *v6;
  *(_QWORD *)a6 = 0LL;
  v11 = (*v10)(v6, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v16);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4D4u);
  }
  else
  {
    v13 = CHwDeviceBitmapColorSource::CreateFromExistingTexture(
            *(struct CD3DDeviceLevel1 **)(a1 + 136),
            v16,
            0,
            v17,
            a4,
            a5,
            v9);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x4DCu);
    }
    else
    {
      v14 = *v9;
      *((_QWORD *)v14 + 42) = *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 496) = v14;
      (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v14)(v14);
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v12;
}
