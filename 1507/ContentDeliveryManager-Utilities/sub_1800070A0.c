/*
 * XREFs of sub_1800070A0 @ 0x1800070A0
 * Callers:
 *     sub_180006780 @ 0x180006780 (sub_180006780.c)
 *     sub_180008660 @ 0x180008660 (sub_180008660.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800070A0(__int64 a1, _DWORD *a2, _QWORD *a3)
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
    v6[2] = unk_18002BE68;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
