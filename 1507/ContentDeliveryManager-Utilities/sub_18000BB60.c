/*
 * XREFs of sub_18000BB60 @ 0x18000BB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

char __fastcall sub_18000BB60(__int64 a1, __int64 a2)
{
  bool v2; // zf

  v2 = dword_18003A0E4 == *(_DWORD *)(a2 + 8);
  dword_18003A0E4 = *(_DWORD *)(a2 + 8);
  if ( !v2 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(a1, 0LL, a2);
  return 1;
}
