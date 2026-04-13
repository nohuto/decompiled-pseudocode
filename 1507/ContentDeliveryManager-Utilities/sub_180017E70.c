/*
 * XREFs of sub_180017E70 @ 0x180017E70
 * Callers:
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_1800165C8 @ 0x1800165C8 (sub_1800165C8.c)
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 *     sub_180018A44 @ 0x180018A44 (sub_180018A44.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

void __fastcall sub_180017E70(__int64 *a1)
{
  __int64 v1; // rdi
  int v3; // ecx
  __int16 **v4; // rcx
  __int16 *v5; // rdx
  __int16 v6; // ax

  v1 = *a1;
  if ( !*a1
    || (!**(_QWORD **)(v1 + 56) ? (v3 = 0) : (v3 = **(_DWORD **)(v1 + 80)),
        v3 <= 0
      ? (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1))
      : (--**(_DWORD **)(v1 + 80), v4 = *(__int16 ***)(v1 + 56), v5 = *v4, ++*v4, v6 = *v5),
        v6 == -1) )
  {
    *a1 = 0LL;
    *((_BYTE *)a1 + 8) = 1;
  }
  else
  {
    *((_BYTE *)a1 + 8) = 0;
  }
}
