/*
 * XREFs of sub_18001E300 @ 0x18001E300
 * Callers:
 *     sub_18001D8C8 @ 0x18001D8C8 (sub_18001D8C8.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001E300(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return (**(__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a1)(*a1, &unk_18002BB40, a2);
}
