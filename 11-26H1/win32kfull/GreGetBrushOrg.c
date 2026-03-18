/*
 * XREFs of GreGetBrushOrg @ 0x140242288
 * Callers:
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1402FA5BC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBrushOrg(HDC a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v3 = 1;
    *a2 = *(_QWORD *)(v5[0] + 124LL);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
