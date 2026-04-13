/*
 * XREFs of sub_180011BC0 @ 0x180011BC0
 * Callers:
 *     unknown_libname_27 @ 0x180027371 (unknown_libname_27.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180014648 @ 0x180014648 (sub_180014648.c)
 *     __uncaught_exception @ 0x180021A54 (__uncaught_exception.c)
 */

__int64 __fastcall sub_180011BC0(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  if ( !(unsigned __int8)_uncaught_exception(a1) )
    sub_180014648(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
