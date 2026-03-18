/*
 * XREFs of ?Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180088644
 * Callers:
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x18008B110 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x18002B024 (-GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Construct(
        _DWORD *a1,
        int a2,
        int a3,
        CHwDeviceBitmapColorSource *a4)
{
  void *SharedHandle; // rax
  __int64 v6; // r10
  __int64 (__fastcall ***v7)(CHwDeviceBitmapColorSource *); // r9

  *a1 = a2;
  a1[1] = a3;
  SharedHandle = CHwDeviceBitmapColorSource::GetSharedHandle(a4);
  *(_QWORD *)(v6 + 8) = SharedHandle;
  *(_QWORD *)(v6 + 16) = v7;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_BYTE *)(v6 + 88) = 0;
  return (**v7)(a4);
}
