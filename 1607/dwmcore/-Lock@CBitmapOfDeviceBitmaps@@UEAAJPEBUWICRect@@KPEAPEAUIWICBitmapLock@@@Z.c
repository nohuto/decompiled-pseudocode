/*
 * XREFs of ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x180179A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180179AC0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Lock(
        CBitmapOfDeviceBitmaps *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IWICBitmapLock **a4)
{
  int v5; // eax
  struct IBitmapLock *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  struct IBitmapLock *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = CBitmapOfDeviceBitmaps::Lock((CBitmapOfDeviceBitmaps *)((char *)this - 16), a2, a3, &v10);
  v6 = v10;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6Cu);
  }
  else
  {
    v8 = (**(__int64 (__fastcall ***)(struct IBitmapLock *, GUID *, struct IWICBitmapLock **))v10)(
           v10,
           &IID_IWICBitmapLock,
           a4);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x6Fu);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
