/*
 * XREFs of sub_180007DA0 @ 0x180007DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007120 @ 0x180007120 (sub_180007120.c)
 *     sub_180007270 @ 0x180007270 (sub_180007270.c)
 *     sub_180007FCC @ 0x180007FCC (sub_180007FCC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_180007DA0(__int64 a1, _QWORD *a2)
{
  void *v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8

  *a2 = 0LL;
  v3 = operator new(0x78uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v3 )
  {
    v5 = sub_180007FCC(v3);
    *(_QWORD *)(v5 + 104) = 0LL;
    v4 = sub_180007120(v5, &xmmword_18002BAA8, a2);
    sub_180007270((volatile signed __int64 *)v5, v6, v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
