/*
 * XREFs of sub_180019C40 @ 0x180019C40
 * Callers:
 *     sub_180019130 @ 0x180019130 (sub_180019130.c)
 * Callees:
 *     sub_180002654 @ 0x180002654 (sub_180002654.c)
 *     sub_1800055F0 @ 0x1800055F0 (sub_1800055F0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall sub_180019C40(volatile signed __int32 **a1, __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  bool v6; // zf

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v4 )
  {
    v5 = *a2;
    *v4 = &off_18002BFD8;
    sub_180002654(v4 + 1);
    v6 = qword_18003AC80 == 0;
    *v4 = off_18002D0F0;
    v4[1] = off_18002E590;
    *((_DWORD *)v4 + 9) = 1;
    if ( !v6 )
      _InterlockedIncrement(&dword_18003AC88);
    v4[5] = v5;
    *v4 = off_18002DED0;
    v4[1] = off_18002E590;
    if ( *a1 )
      sub_1800055F0(*a1);
    *a1 = (volatile signed __int32 *)v4;
  }
  return a1;
}
