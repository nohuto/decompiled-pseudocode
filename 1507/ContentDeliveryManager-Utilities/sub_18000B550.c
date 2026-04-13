/*
 * XREFs of sub_18000B550 @ 0x18000B550
 * Callers:
 *     unknown_libname_26 @ 0x180027365 (unknown_libname_26.c)
 *     sub_180027383 @ 0x180027383 (sub_180027383.c)
 *     sub_18002738F @ 0x18002738F (sub_18002738F.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18000B550(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi

  v1 = *a1;
  result = **a1;
  v3 = *(int *)(result + 4);
  v4 = *(__int64 *)((char *)v1 + v3 + 72);
  if ( v4 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*(__int64 *)((char *)v1 + v3 + 72));
  return result;
}
