/*
 * XREFs of hbmSelectBitmap @ 0x1C0025B20
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 *     GreSelectBitmap @ 0x1C00768B0 (GreSelectBitmap.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C0026B30 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 */

HBITMAP __fastcall hbmSelectBitmap(HDC a1, HBITMAP a2, int a3, int a4)
{
  HBITMAP v5; // rbx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  v9[0] = 0LL;
  v9[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  if ( v9[0] )
    v5 = hbmSelectBitmapInternal((struct XDCOBJ *)v9, a2, a3, a4, 1);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v9);
  return v5;
}
