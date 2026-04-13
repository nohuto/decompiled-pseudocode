/*
 * XREFs of sub_18001E284 @ 0x18001E284
 * Callers:
 *     sub_18001AFC0 @ 0x18001AFC0 (sub_18001AFC0.c)
 *     sub_18001B990 @ 0x18001B990 (sub_18001B990.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001E284(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return (**(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64 *))*a1)(*a1, &xmmword_18002C1E8, a2);
}
