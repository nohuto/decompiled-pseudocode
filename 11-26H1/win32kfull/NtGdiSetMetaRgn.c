/*
 * XREFs of NtGdiSetMetaRgn @ 0x140213A10
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x140213A68 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = DC::iSetMetaRgn(v3[0]);
  else
    EngSetLastError(0x57u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
