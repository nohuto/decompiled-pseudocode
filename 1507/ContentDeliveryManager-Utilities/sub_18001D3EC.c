/*
 * XREFs of sub_18001D3EC @ 0x18001D3EC
 * Callers:
 *     sub_18001CB68 @ 0x18001CB68 (sub_18001CB68.c)
 *     sub_18001CCC0 @ 0x18001CCC0 (sub_18001CCC0.c)
 *     sub_18001F370 @ 0x18001F370 (sub_18001F370.c)
 *     sub_18001F5F0 @ 0x18001F5F0 (sub_18001F5F0.c)
 *     sub_1800279D9 @ 0x1800279D9 (sub_1800279D9.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18001D3EC(__int64 a1)
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
  return sub_18001BCBC(a1);
}
