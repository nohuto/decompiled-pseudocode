/*
 * XREFs of ?Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800A40B0
 * Callers:
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180094688 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 * Callees:
 *     ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x1800A5A84 (-GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Construct(
        _DWORD *a1,
        int a2,
        int a3,
        CHwDeviceBitmapColorSource *a4)
{
  void *SharedHandle; // rax
  __int64 v5; // r10
  __int64 (***v6)(void); // r9

  *a1 = a2;
  a1[1] = a3;
  SharedHandle = CHwDeviceBitmapColorSource::GetSharedHandle(a4);
  *(_QWORD *)(v5 + 8) = SharedHandle;
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_QWORD *)(v5 + 80) = 0LL;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_BYTE *)(v5 + 88) = 0;
  return (**v6)();
}
