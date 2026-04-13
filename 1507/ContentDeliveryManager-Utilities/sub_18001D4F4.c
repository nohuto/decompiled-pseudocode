/*
 * XREFs of sub_18001D4F4 @ 0x18001D4F4
 * Callers:
 *     sub_18001CF68 @ 0x18001CF68 (sub_18001CF68.c)
 *     sub_18001D0C0 @ 0x18001D0C0 (sub_18001D0C0.c)
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_18001F670 @ 0x18001F670 (sub_18001F670.c)
 *     sub_180027A43 @ 0x180027A43 (sub_180027A43.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18001D4F4(__int64 a1)
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
  return sub_18001C3BC(a1);
}
