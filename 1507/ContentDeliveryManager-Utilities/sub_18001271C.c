/*
 * XREFs of sub_18001271C @ 0x18001271C
 * Callers:
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA @ 0x180027179 (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurrency@@_N@Z@4HA.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001271C(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  __int64 v5; // r14

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    LOBYTE(a2) = v2 != a1;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 96), a2);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 96), a2);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return result;
}
