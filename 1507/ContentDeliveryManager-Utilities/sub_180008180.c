/*
 * XREFs of sub_180008180 @ 0x180008180
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004160 @ 0x180004160 (sub_180004160.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

_QWORD *__fastcall sub_180008180(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi

  v4 = a1[10];
  if ( v4 < 0 )
    sub_180004160((volatile signed __int32 *)(2 * v4));
  v5 = a1[3];
  if ( v5 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
