/*
 * XREFs of PpmParkDistributeUtility @ 0x1400E9C50
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x14024026C (PpmHeteroDistributeUtility.c)
 * Callees:
 *     <none>
 */

char PpmParkDistributeUtility()
{
  bool v0; // r14
  unsigned int v1; // ecx
  unsigned int v2; // ebp
  char *v3; // rsi
  unsigned int v4; // r9d
  unsigned __int16 v5; // di
  unsigned int v6; // r10d
  unsigned __int64 v7; // rbx
  int v8; // r11d
  unsigned __int64 v9; // r8
  unsigned int v10; // r11d
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 v14; // r8
  unsigned __int64 v15; // r11
  int v16; // edi
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  unsigned int v19; // r11d
  unsigned int v20; // eax
  unsigned __int16 v21; // r10
  int v22; // r9d
  unsigned int v23; // edi
  unsigned int v24; // r9d
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v28; // eax
  unsigned __int16 v29; // r9
  int v30; // r8d
  unsigned int v31; // r8d
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // edx
  unsigned __int16 v40; // r8
  unsigned __int64 v41; // r9
  int v42; // r10d
  unsigned int v43; // r10d
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx

  v0 = LOBYTE(PpmCurrentProfile[174 * dword_14032E84C + 14]) != 0;
  v1 = PpmParkNumNodes;
  v2 = 0;
  if ( !PpmParkNumNodes )
    return 1;
  do
  {
    v3 = (char *)PpmParkNodes + 120 * v2;
    if ( !v3[107] )
    {
      v4 = 0;
      v5 = *((_WORD *)v3 + 2);
      v6 = 0;
      v7 = *((_QWORD *)v3 + 4) ^ *((_QWORD *)v3 + 1);
      v8 = v5;
      v9 = v7;
      while ( 1 )
      {
        v10 = v8 + 1;
        if ( !v9 )
          break;
LABEL_5:
        _BitScanForward64(&v11, v9);
        v8 = v5;
        v9 &= ~(1LL << v11);
        v12 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v5 + (unsigned __int8)v11];
        if ( (unsigned int)v12 >= (unsigned int)KeNumberProcessors_0 )
        {
          v13 = 0LL;
        }
        else
        {
          _mm_lfence();
          v13 = KiProcessorBlock[v12];
        }
        v6 += *(_DWORD *)(v13 + 24236);
        ++v4;
      }
      while ( ++v5 < v10 )
      {
        v9 = *(_QWORD *)(8LL * v5 + 8);
        if ( v9 )
          goto LABEL_5;
      }
      v14 = *((_WORD *)v3 + 2);
      v15 = *((_QWORD *)v3 + 4);
      v16 = v14;
      while ( v15 )
      {
LABEL_44:
        _BitScanForward64(&v36, v15);
        v16 = v14;
        v15 &= ~(1LL << v36);
        v37 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v14 + (unsigned __int8)v36];
        if ( (unsigned int)v37 >= (unsigned int)KeNumberProcessors_0 )
        {
          v38 = 0LL;
        }
        else
        {
          _mm_lfence();
          v38 = KiProcessorBlock[v37];
        }
        v6 += *(_DWORD *)(v38 + 24236) - *(_DWORD *)(v38 + 24240);
      }
      while ( ++v14 < (unsigned int)(v16 + 1) )
      {
        v15 = *(_QWORD *)(8LL * v14 + 8);
        if ( v15 )
          goto LABEL_44;
      }
      if ( v4 <= 1 )
        v4 = 1;
      v17 = v4;
      if ( (unsigned __int8)v3[110] < v4 )
        v17 = (unsigned __int8)v3[110];
      v18 = *((_QWORD *)v3 + 4) ^ *((_QWORD *)v3 + 1);
      if ( v17 <= 1 )
        v17 = 1;
      v19 = v6 / v4;
      v20 = v6;
      v21 = *((_WORD *)v3 + 2);
      v22 = v21;
      v23 = v20 / v17;
      while ( 1 )
      {
        v24 = v22 + 1;
        if ( !v18 )
          break;
LABEL_20:
        _BitScanForward64(&v25, v18);
        v22 = v21;
        v18 &= ~(1LL << v25);
        v26 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v21 + (unsigned __int8)v25];
        if ( (unsigned int)v26 >= (unsigned int)KeNumberProcessors_0 )
        {
          v27 = 0LL;
        }
        else
        {
          _mm_lfence();
          v27 = KiProcessorBlock[v26];
        }
        v28 = *(_DWORD *)(v27 + 24236);
        if ( v19 <= v28 )
        {
          v7 ^= *(_QWORD *)(v27 + 1608);
          if ( v23 > v28 )
          {
            *(_DWORD *)(v27 + 24236) = v23;
          }
          else if ( v0 )
          {
            v39 = v23;
            if ( *(_DWORD *)(v27 + 24240) > v23 )
              v39 = *(_DWORD *)(v27 + 24240);
            *(_DWORD *)(v27 + 24236) = v39;
          }
        }
      }
      while ( ++v21 < v24 )
      {
        v18 = *(_QWORD *)(8LL * v21 + 8);
        if ( v18 )
          goto LABEL_20;
      }
      v29 = *((_WORD *)v3 + 2);
      v30 = v29;
      while ( 1 )
      {
        v31 = v30 + 1;
        if ( !v7 )
          break;
LABEL_30:
        _BitScanForward64(&v32, v7);
        v30 = v29;
        v7 &= ~(1LL << v32);
        v33 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v29 + (unsigned __int8)v32];
        if ( (unsigned int)v33 >= (unsigned int)KeNumberProcessors_0 )
          v34 = 0LL;
        else
          v34 = KiProcessorBlock[v33];
        *(_DWORD *)(v34 + 24236) = v19;
      }
      while ( ++v29 < v31 )
      {
        v7 = *(_QWORD *)(8LL * v29 + 8);
        if ( v7 )
          goto LABEL_30;
      }
      if ( v0 )
      {
        v40 = *((_WORD *)v3 + 2);
        v41 = *((_QWORD *)v3 + 4);
        v42 = v40;
        while ( 1 )
        {
          v43 = v42 + 1;
          if ( !v41 )
            break;
LABEL_60:
          _BitScanForward64(&v44, v41);
          v42 = v40;
          v41 &= ~(1LL << v44);
          v45 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v40 + (unsigned __int8)v44];
          if ( (unsigned int)v45 >= (unsigned int)KeNumberProcessors_0 )
          {
            v46 = 0LL;
          }
          else
          {
            _mm_lfence();
            v46 = KiProcessorBlock[v45];
          }
          *(_DWORD *)(v46 + 24236) = *(_DWORD *)(v46 + 24240);
        }
        while ( ++v40 < v43 )
        {
          v41 = *(_QWORD *)(8LL * v40 + 8);
          if ( v41 )
            goto LABEL_60;
        }
      }
      v1 = PpmParkNumNodes;
    }
    ++v2;
  }
  while ( v2 < v1 );
  return 1;
}
