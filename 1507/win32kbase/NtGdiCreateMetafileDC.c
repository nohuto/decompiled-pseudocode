/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C0069580
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     UserGetDesktopDC @ 0x1C0044A2C (UserGetDesktopDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 */

HDC __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  HDC DisplayDC; // rbx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return (HDC)UserGetDesktopDC(2u, 1u, 0);
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v3[0] + 48LL), 2u, 1LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return DisplayDC;
}
