/*
 * XREFs of sub_18001A104 @ 0x18001A104
 * Callers:
 *     sub_1800270E9 @ 0x1800270E9 (sub_1800270E9.c)
 *     sub_180027113 @ 0x180027113 (sub_180027113.c)
 *     sub_18002713D @ 0x18002713D (sub_18002713D.c)
 *     sub_180027167 @ 0x180027167 (sub_180027167.c)
 *     sub_1800276ED @ 0x1800276ED (sub_1800276ED.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001A104(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 8) + 16LL))(v1 + 8);
  }
  return result;
}
