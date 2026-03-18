/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C0083E30
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x1C0022378 (UserGetDesktopDC.c)
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004373C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

HDC __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  HDC DisplayDC; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return (HDC)UserGetDesktopDC(2u, 1u, 0);
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v3[0] + 48LL), 2u, 1LL);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  return DisplayDC;
}
