/*
 * XREFs of sub_18001D470 @ 0x18001D470
 * Callers:
 *     sub_18001CD68 @ 0x18001CD68 (sub_18001CD68.c)
 *     sub_18001CEC0 @ 0x18001CEC0 (sub_18001CEC0.c)
 *     sub_18001F400 @ 0x18001F400 (sub_18001F400.c)
 *     sub_18001F630 @ 0x18001F630 (sub_18001F630.c)
 *     sub_180027A0E @ 0x180027A0E (sub_180027A0E.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18001D470(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rsi

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return sub_18001C03C(a1);
}
