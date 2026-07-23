/*
 * XREFs of PpmHeteroRestrictToFavoredClass @ 0x14020AEB0
 * Callers:
 *     PpmParkChooseCoresToUnpark @ 0x14020D7B0 (PpmParkChooseCoresToUnpark.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 */

__int64 __fastcall PpmHeteroRestrictToFavoredClass(unsigned __int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int8 v5; // r14
  unsigned __int64 v6; // r15
  int v7; // esi
  unsigned __int64 v8; // rax
  __int64 Prcb; // rdx
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  v2 = 0LL;
  v4 = a1;
  v5 = 0;
  v6 = a1;
  if ( a1 )
  {
    v7 = a2 << 6;
    do
    {
      _BitScanForward64(&v8, v6);
      Prcb = KeGetPrcb(KiProcessorNumberToIndexMappingTable[v7 + (v8 & 0x3F)]);
      v10 = v5;
      if ( v5 <= *(_BYTE *)(Prcb + 23859) )
        v10 = *(_BYTE *)(Prcb + 23859);
      v5 = v10;
      v6 &= ~*(_QWORD *)(Prcb + 1608);
    }
    while ( v6 );
  }
  for ( ; v4; v4 &= ~*(_QWORD *)(v12 + 1608) )
  {
    _BitScanForward64(&v11, v4);
    v12 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v11 & 0x3F)]);
    if ( *(_BYTE *)(v12 + 23859) == v5 )
      v2 |= *(_QWORD *)(v12 + 1608);
  }
  return v2;
}
