/*
 * XREFs of NtGdiScaleRgn @ 0x140236D50
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140236DAC (-GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall NtGdiScaleRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
    v3 = GrepScaleRgn((struct XDCOBJ *)v5, a2);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
