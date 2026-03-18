/*
 * XREFs of ulGetFontData @ 0x1C00320E8
 * Callers:
 *     NtGdiGetFontData @ 0x1C0032160 (NtGdiGetFontData.c)
 * Callees:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C002F7F8 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall ulGetFontData(HDC a1, unsigned int a2, int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int FontData2; // ebx
  _QWORD v10[7]; // [rsp+30h] [rbp-38h] BYREF

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
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return FontData2;
}
