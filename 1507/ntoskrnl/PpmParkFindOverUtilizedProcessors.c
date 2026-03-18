/*
 * XREFs of PpmParkFindOverUtilizedProcessors @ 0x140242668
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1400E9C10 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmParkFindOverUtilizedProcessors(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // r9
  int v4; // r11d
  __int64 v6; // r10
  unsigned int v7; // r11d
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = *(_WORD *)(a1 + 4);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  v6 = 0LL;
LABEL_2:
  v7 = v4 + 1;
  while ( 1 )
  {
    if ( v3 )
    {
      _BitScanForward64(&v8, v3);
      v4 = v2;
      v3 &= ~(1LL << v8);
      v9 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v2 + (unsigned __int8)v8];
      if ( (unsigned int)v9 >= (unsigned int)KeNumberProcessors_0 )
      {
        v10 = 0LL;
      }
      else
      {
        _mm_lfence();
        v10 = KiProcessorBlock[v9];
      }
      if ( *(_DWORD *)(v10 + 24240) >= a2 )
        v6 |= *(_QWORD *)(v10 + 1608);
      goto LABEL_2;
    }
    if ( ++v2 >= v7 )
      return v6;
    v3 = *(_QWORD *)(8LL * v2 + 8);
  }
}
