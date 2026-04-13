/*
 * XREFs of sub_180008BE0 @ 0x180008BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180008BE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(result + 40) = 1;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 16LL))(v3 + 16);
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
