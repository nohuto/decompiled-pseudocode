/*
 * XREFs of sub_180026074 @ 0x180026074
 * Callers:
 *     sub_18000EEB0 @ 0x18000EEB0 (sub_18000EEB0.c)
 *     sub_180027065 @ 0x180027065 (sub_180027065.c)
 *     sub_180027092 @ 0x180027092 (sub_180027092.c)
 *     sub_18002709E @ 0x18002709E (sub_18002709E.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800260E4 @ 0x1800260E4 (sub_1800260E4.c)
 */

_UNKNOWN **__fastcall sub_180026074(__int64 a1, __int64 a2, int a3, __int64 (__fastcall *a4)(__int64))
{
  _UNKNOWN **result; // rax
  int v6; // ebx
  __int64 i; // rdi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a3;
  for ( i = a1 + a2 * a3; --v6 >= 0; result = (_UNKNOWN **)a4(i) )
  {
    i -= a2;
    _guard_check_icall_fptr();
  }
  return result;
}
