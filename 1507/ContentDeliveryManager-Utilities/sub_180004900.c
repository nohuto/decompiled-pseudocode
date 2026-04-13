/*
 * XREFs of sub_180004900 @ 0x180004900
 * Callers:
 *     sub_180003B80 @ 0x180003B80 (sub_180003B80.c)
 *     sub_180006320 @ 0x180006320 (sub_180006320.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180004900(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_18002BAA8;
    v6[1] = unk_18002BFC8;
    v6[2] = unk_18002C570;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
