/*
 * XREFs of sub_18000FEBC @ 0x18000FEBC
 * Callers:
 *     sub_180027191 @ 0x180027191 (sub_180027191.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18000FEBC(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v4; // rsi

  v1 = a1[1];
  if ( v1 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
