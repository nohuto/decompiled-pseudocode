/*
 * XREFs of sub_18001F490 @ 0x18001F490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004160 @ 0x180004160 (sub_180004160.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001D4F4 @ 0x18001D4F4 (sub_18001D4F4.c)
 */

_QWORD *__fastcall sub_18001F490(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi

  v4 = a1[23];
  if ( v4 < 0 )
    sub_180004160((volatile signed __int32 *)(2 * v4));
  v5 = a1[14];
  if ( v5 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_18001D4F4((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
