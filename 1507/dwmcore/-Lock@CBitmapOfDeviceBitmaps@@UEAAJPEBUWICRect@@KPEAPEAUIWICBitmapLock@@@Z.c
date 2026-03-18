/*
 * XREFs of ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x180138050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180138110 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Lock(
        CBitmapOfDeviceBitmaps *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IWICBitmapLock **a4)
{
  int v5; // eax
  struct IBitmapLock *v6; // rsi
  unsigned int v7; // edi
  int v8; // eax
  struct IBitmapLock *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = CBitmapOfDeviceBitmaps::Lock((CBitmapOfDeviceBitmaps *)((char *)this - 16), a2, a3, &v10);
  v6 = v10;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = (**(__int64 (__fastcall ***)(struct IBitmapLock *, GUID *, struct IWICBitmapLock **))v10)(
           v10,
           &IID_IWICBitmapLock,
           a4);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x6Fu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6Cu);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
