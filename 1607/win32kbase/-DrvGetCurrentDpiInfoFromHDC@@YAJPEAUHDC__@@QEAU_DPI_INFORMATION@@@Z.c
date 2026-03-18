/*
 * XREFs of ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00C6E78
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00747D8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0057E4C (DrvGetCurrentDpiInfoFromHDev.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDC(HDC a1, struct _DPI_INFORMATION *const a2)
{
  unsigned int CurrentDpiInfoFromHDev; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_OWORD **)(v5[0] + 48LL), (__int64)a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v6);
  return CurrentDpiInfoFromHDev;
}
