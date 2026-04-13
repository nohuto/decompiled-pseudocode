/*
 * XREFs of sub_180004F50 @ 0x180004F50
 * Callers:
 *     sub_180004630 @ 0x180004630 (sub_180004630.c)
 *     sub_1800073D0 @ 0x1800073D0 (sub_1800073D0.c)
 *     sub_18001AA40 @ 0x18001AA40 (sub_18001AA40.c)
 * Callees:
 *     sub_180004160 @ 0x180004160 (sub_180004160.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall sub_180004F50(volatile signed __int32 **a1, __int64 *a2)
{
  _DWORD *v4; // rbx
  bool v5; // zf
  __int64 v6; // rax

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v4 )
  {
    v5 = qword_18003AC80 == 0;
    v6 = *a2;
    *(_QWORD *)v4 = off_18002BF28;
    v4[3] = 1;
    if ( !v5 )
      _InterlockedIncrement(&dword_18003AC88);
    v4[4] = 0x3FFFFFFF;
    *(_QWORD *)v4 = &off_18002C280;
    *((_QWORD *)v4 + 3) = v6;
    v4[3] = 2;
    if ( *a1 )
      sub_180004160(*a1);
    *a1 = v4;
  }
  return a1;
}
