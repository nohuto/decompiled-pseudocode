/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x1400E94D4
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyLatencyHint @ 0x140138764 (PpmPerfApplyLatencyHint.c)
 */

char PpmPerfApplyLatencyHints()
{
  unsigned __int64 v1; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( PpmCheckLatencyBoostActive )
  {
    v1 = qword_1403208E8[0];
    for ( i = 0; ; v1 = qword_1403208E8[i] )
    {
      while ( v1 )
      {
        _BitScanForward64(&v3, v1);
        v1 &= ~(1LL << v3);
        v4 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v3];
        if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
          v5 = 0LL;
        else
          v5 = KiProcessorBlock[v4];
        PpmPerfApplyLatencyHint(v5);
      }
      if ( ++i >= (unsigned int)(unsigned __int16)PpmPerfStatesRegistered )
        break;
    }
  }
  return 1;
}
