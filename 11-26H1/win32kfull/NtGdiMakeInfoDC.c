/*
 * XREFs of NtGdiMakeInfoDC @ 0x140260AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMakeInfoDC(HDC a1, int a2)
{
  unsigned int InfoDC; // ebx
  DC *v5[15]; // [rsp+20h] [rbp-78h] BYREF

  InfoDC = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( v5[0] )
    InfoDC = DC::bMakeInfoDC(v5[0], a2);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return InfoDC;
}
