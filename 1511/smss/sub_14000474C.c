/*
 * XREFs of sub_14000474C @ 0x14000474C
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 *     sub_1400031FC @ 0x1400031FC (sub_1400031FC.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 * Callees:
 *     sub_14000436C @ 0x14000436C (sub_14000436C.c)
 *     sub_140004390 @ 0x140004390 (sub_140004390.c)
 *     sub_14000478C @ 0x14000478C (sub_14000478C.c)
 *     sub_140012F08 @ 0x140012F08 (sub_140012F08.c)
 */

__int64 __fastcall sub_14000474C(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( (unsigned int)sub_14000478C(a1) )
    goto LABEL_2;
  sub_140004390(*(_DWORD *)(v3 + 64), 1, (__int64)v6);
  if ( !(unsigned int)sub_14000478C(a1) )
    v2 = sub_140012F08(v5, (*(_BYTE *)(a1 + 8) & 1) == 0, v6);
  sub_14000436C((__int64)v6);
  if ( v2 >= 0 )
  {
LABEL_2:
    if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v2;
}
