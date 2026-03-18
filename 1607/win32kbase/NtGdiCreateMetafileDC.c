/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C0085650
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x1C001CBFC (UserGetDesktopDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

HDC __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  HDC DisplayDC; // rbx
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return (HDC)UserGetDesktopDC(2u, 1u, 0);
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v3[0] + 48LL), 2u, 1);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v4);
  return DisplayDC;
}
