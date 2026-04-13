/*
 * XREFs of sub_180007D50 @ 0x180007D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180007D50(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    *a2 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 16))(*(_QWORD *)(v2 + 16));
  else
    *a2 = 2;
  return 0LL;
}
