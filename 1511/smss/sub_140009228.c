/*
 * XREFs of sub_140009228 @ 0x140009228
 * Callers:
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 *     sub_14000F9D0 @ 0x14000F9D0 (sub_14000F9D0.c)
 * Callees:
 *     sub_1400081A4 @ 0x1400081A4 (sub_1400081A4.c)
 *     sub_1400091A4 @ 0x1400091A4 (sub_1400091A4.c)
 *     sub_14000FE88 @ 0x14000FE88 (sub_14000FE88.c)
 */

__int64 __fastcall sub_140009228(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    sub_14000FE88();
  v2 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 > v2 )
    v2 = v5;
  v6 = v2;
  sub_1400081A4((__int64 *)&v5, &v6);
  v3 = v5;
  *(_QWORD *)(a1 + 64) = v6;
  *(_QWORD *)(a1 + 56) = v3;
  if ( *(_QWORD *)(a1 + 48) > v3 )
    *(_QWORD *)(a1 + 48) = v3;
  if ( (*(_BYTE *)(a1 + 92) & 4) == 0 )
    return sub_1400091A4(a1, 1);
  result = sub_1400091A4(a1, 0);
  if ( (int)result < 0 )
    return sub_1400091A4(a1, 1);
  return result;
}
