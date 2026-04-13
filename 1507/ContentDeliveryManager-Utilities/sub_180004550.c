/*
 * XREFs of sub_180004550 @ 0x180004550
 * Callers:
 *     sub_1800033E0 @ 0x1800033E0 (sub_1800033E0.c)
 *     sub_1800061C0 @ 0x1800061C0 (sub_1800061C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180004550(__int64 a1, _DWORD *a2, _QWORD *a3)
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
    v6[2] = unk_18002C4F8;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
