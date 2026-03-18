/*
 * XREFs of PpmParkUnblockIdle @ 0x140242948
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfQueueAction @ 0x140157980 (PpmPerfQueueAction.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char PpmParkUnblockIdle()
{
  char v0; // di
  unsigned __int64 v1; // r9
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r11d
  int v8; // r9d
  __int64 *v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int16 v14; // si
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v0 = 1;
  if ( PpmIsParkingEnabled )
  {
    v1 = qword_14031ED28[0];
    v2 = 0;
LABEL_3:
    v3 = PpmPerfNewUnparkedMask[0];
    while ( 1 )
    {
      while ( v1 )
      {
        _BitScanForward64(&v4, v1);
        v1 &= ~(1LL << v4);
        v5 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v2 + (unsigned __int8)v4];
        if ( (unsigned int)v5 >= (unsigned int)KeNumberProcessors_0 )
        {
          v6 = 0LL;
        }
        else
        {
          _mm_lfence();
          v6 = KiProcessorBlock[v5];
        }
        if ( *(_BYTE *)(v6 + 23869) )
        {
          *(_BYTE *)(v6 + 23869) = 0;
          goto LABEL_3;
        }
        v7 = KiProcessorIndexToNumberMappingTable[v5];
        v3 = PpmPerfNewUnparkedMask[0];
        if ( LOWORD(PpmPerfNewUnparkedMask[0]) > v7 >> 6 )
        {
          qword_14031ED28[v7 >> 6] &= ~(1LL << (v7 & 0x3F));
          goto LABEL_3;
        }
      }
      if ( ++v2 >= (unsigned int)v3 )
        break;
      v1 = qword_14031ED28[v2];
    }
    v8 = 0;
    if ( v3 )
    {
      v9 = qword_14031ED28;
      v10 = v3;
      do
      {
        v11 = *v9;
        v12 = *v9++;
        v8 += (unsigned int)((0x101010101010101LL
                            * ((((v11 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v11 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                              + ((((v11 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v11 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        --v10;
      }
      while ( v10 );
      if ( v8 )
      {
        v13 = qword_14031ED28[0];
        v14 = 0;
        PpmCheckCount = v8;
        while ( 1 )
        {
          while ( v13 )
          {
            _BitScanForward64(&v15, v13);
            v13 &= ~(1LL << v15);
            v16 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v14 + (unsigned __int8)v15];
            if ( (unsigned int)v16 >= (unsigned int)KeNumberProcessors_0 )
              v17 = 0LL;
            else
              v17 = KiProcessorBlock[v16];
            PpmPerfQueueAction(v17, 4);
            v3 = PpmPerfNewUnparkedMask[0];
          }
          if ( ++v14 >= (unsigned int)v3 )
            break;
          v13 = qword_14031ED28[v14];
        }
        PpmPerfNewUnparkedMask[0] = 1310721LL;
        memset(qword_14031ED28, 0, sizeof(qword_14031ED28));
        return 0;
      }
    }
  }
  return v0;
}
