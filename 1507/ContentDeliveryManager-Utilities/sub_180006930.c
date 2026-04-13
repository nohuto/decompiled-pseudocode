/*
 * XREFs of sub_180006930 @ 0x180006930
 * Callers:
 *     sub_180026DAB @ 0x180026DAB (sub_180026DAB.c)
 * Callees:
 *     sub_180004160 @ 0x180004160 (sub_180004160.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180006930(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 < 0 )
    result = sub_180004160((volatile signed __int32 *)(2 * v2));
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
