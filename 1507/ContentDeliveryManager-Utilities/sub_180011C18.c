/*
 * XREFs of sub_180011C18 @ 0x180011C18
 * Callers:
 *     sub_1800274B2 @ 0x1800274B2 (sub_1800274B2.c)
 * Callees:
 *     sub_1800144B0 @ 0x1800144B0 (sub_1800144B0.c)
 */

__int64 (__fastcall **__fastcall sub_180011C18(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rcx

  result = off_18002E358;
  *a1 = off_18002E358;
  v2 = a1[12];
  if ( v2 )
    return (__int64 (__fastcall **)())sub_1800144B0(v2, 1LL);
  return result;
}
