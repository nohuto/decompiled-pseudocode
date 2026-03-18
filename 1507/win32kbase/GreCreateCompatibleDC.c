/*
 * XREFs of GreCreateCompatibleDC @ 0x1C00165F0
 * Callers:
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     GreSetLayout @ 0x1C0012430 (GreSetLayout.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     UserGetDesktopDC @ 0x1C0044A2C (UserGetDesktopDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  HDC DisplayDC; // rax
  unsigned int v3; // r8d
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0LL;
  if ( !a1 )
    return (HDC)UserGetDesktopDC(1LL, 0LL, 0LL);
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(v5[0] + 48LL), 1LL, 0LL);
    v1 = DisplayDC;
    if ( DisplayDC )
    {
      v3 = *(_DWORD *)(*(_QWORD *)(v5[0] + 80LL) + 312LL);
      if ( (v3 & 7) != 0 )
        GreSetLayout(DisplayDC, -1, v3);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v1;
}
