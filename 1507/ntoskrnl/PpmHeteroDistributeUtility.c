/*
 * XREFs of PpmHeteroDistributeUtility @ 0x14024026C
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x1400E9C50 (PpmParkDistributeUtility.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140241570 (PpmEventTraceHeteroDistributeUtility.c)
 */

char PpmHeteroDistributeUtility()
{
  __int64 v0; // r8
  __int64 v1; // rdx
  unsigned int v2; // r14d
  unsigned int v3; // ecx
  char *v4; // rdi
  __int64 v5; // rbp
  unsigned __int16 v6; // si
  char v7; // r12
  unsigned __int64 v8; // rbx
  int v9; // r13d
  int v10; // r15d
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const void *v14; // rdx
  __int64 v15; // rcx
  char v16; // r15
  unsigned __int16 v17; // si
  unsigned __int64 j; // rbx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  const void *v22; // rdx
  __int64 v23; // rcx
  unsigned __int16 v25; // [rsp+38h] [rbp-50h]
  unsigned int i; // [rsp+98h] [rbp+10h]
  __int64 *v27; // [rsp+A0h] [rbp+18h]
  __int64 v28; // [rsp+A8h] [rbp+20h]

  PpmParkDistributeUtility();
  v1 = 1LL;
  if ( PpmHeteroPolicy == 4 )
  {
    v2 = 0;
    v3 = PpmParkNumNodes;
    v27 = PpmCurrentProfile;
    v28 = 174LL * dword_14032E84C;
    for ( i = 0; v2 < v3; i = v2 )
    {
      v4 = (char *)PpmParkNodes + 120 * v2;
      v5 = ~*((_QWORD *)v4 + 4);
      if ( (v5 & *((_QWORD *)v4 + 3)) != 0 )
      {
        v6 = *((_WORD *)v4 + 2);
        v7 = 0;
        v8 = v5 & *((_QWORD *)v4 + 5) & *((_QWORD *)v4 + 3);
        v9 = v6;
        v25 = v6;
        v10 = v6;
        while ( 1 )
        {
          while ( v8 )
          {
            _BitScanForward64(&v11, v8);
            v10 = v6;
            v8 &= ~(1LL << v11);
            v12 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v6 + (unsigned __int8)v11];
            if ( (unsigned int)v12 >= (unsigned int)KeNumberProcessors_0 )
            {
              v13 = 0LL;
            }
            else
            {
              _mm_lfence();
              v13 = KiProcessorBlock[v12];
            }
            v14 = (const void *)(v13 + 23808);
            v15 = *(_QWORD *)(v13 + 24168);
            if ( v15 )
            {
              v7 = BYTE1(v27[v28 + 178]);
              *(_BYTE *)(v15 + 187) = v7;
              if ( (PoDebug & 0x40000) != 0 )
                DbgPrint(
                  "PPM: PpmHeteroDistributeUtility()=> PpmState @ %p : Class1MinimumPerfSelection: %d%%\n",
                  v14,
                  *(unsigned __int8 *)(v15 + 187));
            }
            v1 = 1LL;
          }
          if ( ++v6 >= (unsigned int)(v10 + 1) )
            break;
          v8 = *(_QWORD *)(8LL * v6 + 8);
        }
        v16 = 0;
        v17 = v25;
        v2 = i;
        for ( j = v5 & *((_QWORD *)v4 + 2); ; j = *(_QWORD *)(8LL * v17 + 8) )
        {
          while ( j )
          {
            _BitScanForward64(&v19, j);
            v9 = v17;
            j &= ~(1LL << v19);
            v20 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v17 + (unsigned __int8)v19];
            if ( (unsigned int)v20 >= (unsigned int)KeNumberProcessors_0 )
            {
              v21 = 0LL;
            }
            else
            {
              _mm_lfence();
              v21 = KiProcessorBlock[v20];
            }
            v22 = (const void *)(v21 + 23808);
            v23 = *(_QWORD *)(v21 + 24168);
            if ( v23 )
            {
              v16 = v27[v28 + 178];
              *(_BYTE *)(v23 + 186) = v16;
              if ( (PoDebug & 0x40000) != 0 )
                DbgPrint(
                  "PPM: PpmHeteroDistributeUtility()=> PpmState @ %p : Class0FloorPerfSelection: %d%%\n",
                  v22,
                  *(unsigned __int8 *)(v23 + 186));
            }
            v1 = 1LL;
          }
          if ( ++v17 >= (unsigned int)(v9 + 1) )
            break;
        }
        LOBYTE(v1) = v16;
        LOBYTE(v0) = v7;
        PpmEventTraceHeteroDistributeUtility(v4, v1, v0);
        v3 = PpmParkNumNodes;
        v1 = 1LL;
      }
      ++v2;
    }
  }
  return 1;
}
