/*
 * XREFs of sub_18001F8C4 @ 0x18001F8C4
 * Callers:
 *     sub_18001F844 @ 0x18001F844 (sub_18001F844.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall sub_18001F8C4(_QWORD *a1, __int64 *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  bool v6; // zf
  __int64 v7; // r14

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  v5 = v4;
  if ( v4 )
  {
    v6 = qword_18003AC80 == 0;
    *(_QWORD *)v4 = &off_18002BFD8;
    *(_QWORD *)v4 = off_18002DC80;
    v4[3] = 1;
    if ( !v6 )
      _InterlockedIncrement(&dword_18003AC88);
    *(_QWORD *)v4 = off_18002D9F0;
    v7 = *a2;
    *((_QWORD *)v4 + 2) = *a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *((_QWORD *)v5 + 3) = a2[1];
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
