/*
 * XREFs of sub_18001C934 @ 0x18001C934
 * Callers:
 *     sub_180027835 @ 0x180027835 (sub_180027835.c)
 *     sub_1800278E5 @ 0x1800278E5 (sub_1800278E5.c)
 *     sub_18002790F @ 0x18002790F (sub_18002790F.c)
 *     sub_180027939 @ 0x180027939 (sub_180027939.c)
 *     sub_180027963 @ 0x180027963 (sub_180027963.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001C934(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
