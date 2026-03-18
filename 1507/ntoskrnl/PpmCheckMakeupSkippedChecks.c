/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x1400E9574
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfMinimumPerfReached @ 0x14011A534 (PpmPerfMinimumPerfReached.c)
 *     PpmParkMaximumCoresParked @ 0x140127F04 (PpmParkMaximumCoresParked.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14024189C (PpmEventTraceMakeupPerfCheck.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  unsigned __int64 v1; // r9
  unsigned __int16 i; // r8
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  unsigned int v7; // r8d
  unsigned __int16 v8; // dx
  _QWORD *v9; // r9
  __int64 v10; // rax

  if ( PpmCheckMakeupCount )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v1 = qword_140320998[0];
      for ( i = 0; ; v1 = qword_140320998[i] )
      {
        while ( v1 )
        {
          _BitScanForward64(&v3, v1);
          v1 &= ~(1LL << v3);
          v4 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v3];
          if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
          {
            v5 = 0LL;
          }
          else
          {
            _mm_lfence();
            v5 = KiProcessorBlock[v4];
          }
          v6 = *(_QWORD **)(v5 + 24168);
          if ( v6 )
          {
            v6[1] = v6[3];
            *v6 = v6[4];
          }
        }
        if ( ++i >= (unsigned int)(unsigned __int16)PpmCheckRegistered )
          break;
      }
      v7 = PpmParkNumNodes;
      v8 = 0;
      if ( PpmParkNumNodes )
      {
        v9 = PpmParkNodes;
        do
        {
          v10 = v8++;
          v9[15 * v10 + 11] = v9[15 * v10 + 10];
        }
        while ( v8 < v7 );
      }
      PpmCheckMakeupCount = 0;
    }
    else
    {
      PpmEventTraceMakeupPerfCheck();
      --PpmCheckMakeupCount;
      PpmCheckPipelineIndex = 3;
    }
  }
  return 1;
}
