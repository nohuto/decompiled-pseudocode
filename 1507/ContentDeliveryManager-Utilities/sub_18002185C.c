/*
 * XREFs of sub_18002185C @ 0x18002185C
 * Callers:
 *     sub_18000B510 @ 0x18000B510 (sub_18000B510.c)
 *     sub_18000DDA8 @ 0x18000DDA8 (sub_18000DDA8.c)
 *     sub_18000DF28 @ 0x18000DF28 (sub_18000DF28.c)
 *     sub_180011BA8 @ 0x180011BA8 (sub_180011BA8.c)
 *     sub_180014534 @ 0x180014534 (sub_180014534.c)
 *     sub_1800145A0 @ 0x1800145A0 (sub_1800145A0.c)
 * Callees:
 *     sub_1800144B0 @ 0x1800144B0 (sub_1800144B0.c)
 *     sub_1800218A8 @ 0x1800218A8 (sub_1800218A8.c)
 */

__int64 __fastcall sub_18002185C(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx

  result = *(_QWORD *)(a1 + 8);
  if ( !result || (--byte_18003A3C8[result], byte_18003A3C8[result] <= 0) )
  {
    result = sub_1800218A8(a1);
    v3 = *(_QWORD **)(a1 + 64);
    if ( v3 )
      return (__int64)sub_1800144B0(v3, 1);
  }
  return result;
}
