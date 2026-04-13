/*
 * XREFs of sub_180026450 @ 0x180026450
 * Callers:
 *     sub_18000EEB0 @ 0x18000EEB0 (sub_18000EEB0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800260E4 @ 0x1800260E4 (sub_1800260E4.c)
 */

_UNKNOWN **__fastcall sub_180026450(__int64 a1, __int64 a2, int a3, __int64 (__fastcall *a4)(__int64))
{
  _UNKNOWN **result; // rax
  int i; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0; i < a3; ++i )
  {
    result = (_UNKNOWN **)a4(a1);
    a1 += a2;
  }
  return result;
}
