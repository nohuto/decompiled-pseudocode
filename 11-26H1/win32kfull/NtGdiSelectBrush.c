/*
 * XREFs of NtGdiSelectBrush @ 0x14032BBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

HBRUSH __fastcall NtGdiSelectBrush(HDC a1, HBRUSH a2)
{
  HBRUSH v3; // rbx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0LL;
  if ( v5[0] )
    v3 = GrepSelectBrush((struct XDCOBJ *)v5, a2, 0);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
