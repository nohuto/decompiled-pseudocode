/*
 * XREFs of sub_18001D578 @ 0x18001D578
 * Callers:
 *     sub_18001D168 @ 0x18001D168 (sub_18001D168.c)
 *     sub_18001D2C0 @ 0x18001D2C0 (sub_18001D2C0.c)
 *     sub_18001F520 @ 0x18001F520 (sub_18001F520.c)
 *     sub_18001F6B0 @ 0x18001F6B0 (sub_18001F6B0.c)
 *     sub_180027A78 @ 0x180027A78 (sub_180027A78.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18001D578(__int64 a1)
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
  return sub_18001C73C(a1);
}
