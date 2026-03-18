/*
 * XREFs of GreGetCharSet @ 0x1400FE588
 * Callers:
 *     NtGdiGetCharSet @ 0x1400FE570 (NtGdiGetCharSet.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetCharSet@@YAKAEAVDCOBJ@@@Z @ 0x1400FE5E8 (-GrepGetCharSet@@YAKAEAVDCOBJ@@@Z.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  unsigned int CharSet; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    CharSet = GrepGetCharSet((struct DCOBJ *)v3);
  }
  else
  {
    EngSetLastError(6u);
    CharSet = 0x10000;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return CharSet;
}
