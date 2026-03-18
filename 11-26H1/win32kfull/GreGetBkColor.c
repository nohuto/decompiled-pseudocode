/*
 * XREFs of GreGetBkColor @ 0x1401F0964
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1401F04C0 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBkColor(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  v1 = -1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 180LL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
