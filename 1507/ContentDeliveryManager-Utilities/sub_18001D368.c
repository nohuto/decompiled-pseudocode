/*
 * XREFs of sub_18001D368 @ 0x18001D368
 * Callers:
 *     sub_18001C970 @ 0x18001C970 (sub_18001C970.c)
 *     sub_18001CAC8 @ 0x18001CAC8 (sub_18001CAC8.c)
 *     sub_18001F2E0 @ 0x18001F2E0 (sub_18001F2E0.c)
 *     sub_18001F5B0 @ 0x18001F5B0 (sub_18001F5B0.c)
 *     sub_1800279A4 @ 0x1800279A4 (sub_1800279A4.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18001D368(__int64 a1)
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
  return sub_18001B22C(a1);
}
