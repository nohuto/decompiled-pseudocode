/*
 * XREFs of sub_18001E004 @ 0x18001E004
 * Callers:
 *     sub_18000F470 @ 0x18000F470 (sub_18000F470.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001EB78 @ 0x18001EB78 (sub_18001EB78.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_18001E004(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  void *v8; // rax
  __int64 v9; // rbp

  *(_QWORD *)a1 = 0LL;
  v8 = operator new(0x120uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v8 )
  {
    v9 = sub_18001EB78(v8, a2, *a3, *a4);
    if ( *(_QWORD *)a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 16LL))(*(_QWORD *)a1 + 8LL);
    *(_QWORD *)a1 = v9;
  }
  return a1;
}
