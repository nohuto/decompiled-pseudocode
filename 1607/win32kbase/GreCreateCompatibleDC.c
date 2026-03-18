/*
 * XREFs of GreCreateCompatibleDC @ 0x1C001CB50
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C001CB40 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 * Callees:
 *     UserGetDesktopDC @ 0x1C001CBFC (UserGetDesktopDC.c)
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     GreSetLayout @ 0x1C0079D30 (GreSetLayout.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00BCF30 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  HDC DisplayDC; // rax
  unsigned int v4; // r8d
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+2Ch] [rbp-2Ch]
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  if ( !a1 )
    return (HDC)UserGetDesktopDC(1LL, 0LL, 0LL);
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v9);
  XDCOBJ::vLock((XDCOBJ *)&v6, a1);
  if ( v6 )
  {
    DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(v6 + 48), 1LL, 0LL);
    v1 = DisplayDC;
    if ( DisplayDC )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(v6 + 80) + 312LL);
      if ( (v4 & 7) != 0 )
        GreSetLayout(DisplayDC, -1, v4);
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v6);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v9);
  return v1;
}
