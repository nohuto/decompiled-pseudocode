/*
 * XREFs of sub_180007330 @ 0x180007330
 * Callers:
 *     sub_1800067D0 @ 0x1800067D0 (sub_1800067D0.c)
 *     sub_1800082C0 @ 0x1800082C0 (sub_1800082C0.c)
 *     sub_180008410 @ 0x180008410 (sub_180008410.c)
 *     sub_180008570 @ 0x180008570 (sub_180008570.c)
 *     sub_180008650 @ 0x180008650 (sub_180008650.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180007330(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x60uLL);
  if ( v6 )
  {
    *v6 = xmmword_18002BAA8;
    v6[1] = unk_18002BFC8;
    v6[2] = xmmword_18002BFB8;
    v6[3] = xmmword_18002BB20;
    v6[4] = xmmword_18002C2A8;
    v6[5] = xmmword_18002C030;
    *a2 = 6;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
