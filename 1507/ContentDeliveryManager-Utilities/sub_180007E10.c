/*
 * XREFs of sub_180007E10 @ 0x180007E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004490 @ 0x180004490 (sub_180004490.c)
 *     sub_180006F00 @ 0x180006F00 (sub_180006F00.c)
 *     sub_1800080BC @ 0x1800080BC (sub_1800080BC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_180007E10(__int64 a1, _QWORD *a2)
{
  void *v3; // rax
  unsigned int v4; // ebx
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8

  *a2 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v3 )
  {
    v5 = (volatile signed __int64 *)sub_1800080BC(v3);
    v4 = sub_180006F00((__int64)v5, &xmmword_18002BAA8, a2);
    if ( v5 )
      sub_180004490(v5, v6, v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
