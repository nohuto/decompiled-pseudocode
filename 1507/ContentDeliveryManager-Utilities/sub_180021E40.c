/*
 * XREFs of sub_180021E40 @ 0x180021E40
 * Callers:
 *     unknown_libname_5 @ 0x18000AF80 (unknown_libname_5.c)
 *     sub_18000AFA0 @ 0x18000AFA0 (sub_18000AFA0.c)
 * Callees:
 *     sub_180022A04 @ 0x180022A04 (sub_180022A04.c)
 *     sub_180022A84 @ 0x180022A84 (sub_180022A84.c)
 */

__int64 __fastcall sub_180021E40(unsigned __int16 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  int v5; // eax
  unsigned __int16 v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int16 v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = a1;
  v8 = a1;
  v3 = sub_180022A04(a2);
  if ( v7 == 0xFFFF )
    return v8;
  if ( !v3 && v7 < 0x100u )
  {
    if ( (unsigned __int16)(v7 - 97) <= 0x19u )
      return (unsigned __int16)(v7 - 32);
    return v8;
  }
  v5 = sub_180022A84(v3, 512, (unsigned int)&v7, 1, (__int64)&v8, 1, *(_DWORD *)(a2 + 4));
  v4 = v8;
  if ( !v5 )
    return v7;
  return v4;
}
