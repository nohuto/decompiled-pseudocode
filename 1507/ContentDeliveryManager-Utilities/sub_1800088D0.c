/*
 * XREFs of sub_1800088D0 @ 0x1800088D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

_QWORD *__fastcall sub_1800088D0(_QWORD *a1, char a2)
{
  __int64 v2; // rsi

  v2 = a1[1];
  *a1 = off_18002D398;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    a1[1] = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
