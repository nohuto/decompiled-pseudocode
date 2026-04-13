/*
 * XREFs of sub_180017F00 @ 0x180017F00
 * Callers:
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 *     sub_180014D90 @ 0x180014D90 (sub_180014D90.c)
 *     sub_180014F10 @ 0x180014F10 (sub_180014F10.c)
 *     sub_180015080 @ 0x180015080 (sub_180015080.c)
 *     sub_1800151F0 @ 0x1800151F0 (sub_1800151F0.c)
 *     sub_180015360 @ 0x180015360 (sub_180015360.c)
 *     sub_1800154D0 @ 0x1800154D0 (sub_1800154D0.c)
 *     sub_180015640 @ 0x180015640 (sub_180015640.c)
 *     sub_180015760 @ 0x180015760 (sub_180015760.c)
 *     sub_180015870 @ 0x180015870 (sub_180015870.c)
 *     sub_180015980 @ 0x180015980 (sub_180015980.c)
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_1800165C8 @ 0x1800165C8 (sub_1800165C8.c)
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 *     sub_180018A44 @ 0x180018A44 (sub_180018A44.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180017F00(__int64 *a1)
{
  __int64 v1; // rsi
  __int16 *v3; // rdx
  int v4; // ecx
  __int16 v5; // ax
  __int64 result; // rax

  v1 = *a1;
  if ( !*a1
    || ((v3 = **(__int16 ***)(v1 + 56)) == 0LL ? (v4 = 0) : (v4 = **(_DWORD **)(v1 + 80)),
        v4 <= 0 ? (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1)) : (v5 = *v3),
        v5 == -1) )
  {
    *a1 = 0LL;
  }
  else
  {
    *((_WORD *)a1 + 5) = v5;
  }
  result = *((unsigned __int16 *)a1 + 5);
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
