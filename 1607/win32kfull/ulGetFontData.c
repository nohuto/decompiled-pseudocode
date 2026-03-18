/*
 * XREFs of ulGetFontData @ 0x1C010B0C4
 * Callers:
 *     NtGdiGetFontData @ 0x1C010AFD0 (NtGdiGetFontData.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C010B148 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall ulGetFontData(HDC a1, unsigned int a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int FontData2; // ebx
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    FontData2 = ulGetFontData2((struct DCOBJ *)v10, a2, a3, a4, a5);
  }
  else
  {
    EngSetLastError(6u);
    FontData2 = -1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v11);
  return FontData2;
}
