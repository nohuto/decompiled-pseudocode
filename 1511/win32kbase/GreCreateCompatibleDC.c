/*
 * XREFs of GreCreateCompatibleDC @ 0x1C006C030
 * Callers:
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 * Callees:
 *     UserGetDesktopDC @ 0x1C0022378 (UserGetDesktopDC.c)
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004373C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSetLayout @ 0x1C0075DC0 (GreSetLayout.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  __int64 v2; // rdi
  HDC DisplayDC; // rax
  unsigned int v4; // r8d
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( !a1 )
    return (HDC)UserGetDesktopDC(1u, 0, 0);
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v2 = v6[0];
  if ( v6[0] )
  {
    DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v6[0] + 48LL), 1u, 0LL);
    v1 = DisplayDC;
    if ( DisplayDC )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(v2 + 80) + 312LL);
      if ( (v4 & 7) != 0 )
        GreSetLayout(DisplayDC, -1, v4);
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v6);
  return v1;
}
