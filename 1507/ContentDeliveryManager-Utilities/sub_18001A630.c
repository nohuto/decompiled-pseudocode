/*
 * XREFs of sub_18001A630 @ 0x18001A630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001A630(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 96) )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 152) + 152LL))(a1 - 152);
  return result;
}
