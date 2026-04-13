/*
 * XREFs of sub_18001CCC0 @ 0x18001CCC0
 * Callers:
 *     ?dtor$0@?0???0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0 @ 0x1800279B6 (-dtor$0@-0---0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0.c)
 * Callees:
 *     sub_180004160 @ 0x180004160 (sub_180004160.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001CCC0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi

  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 < 0 )
    sub_180004160((volatile signed __int32 *)(2 * v2));
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return sub_18001D3EC(a1);
}
