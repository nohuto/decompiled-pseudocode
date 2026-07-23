/*
 * XREFs of MiPageMightBeZero @ 0x1400E2A70
 * Callers:
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageMightBeZero(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
    || *(_WORD *)(a1 + 32) != 1
    || (*(_BYTE *)(a1 + 34) & 0xC0) != 0x40
    || (*(_BYTE *)(a1 + 35) & 0x40) != 0 )
  {
    return 0LL;
  }
  v3 = a2 << 25 >> 16;
  return (a3 & 2) != 0 || (*(_QWORD *)v3 | *(_QWORD *)(v3 + 4088)) == 0LL;
}
