/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x14023FF64
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkCalculateUnparkCount @ 0x1400E9BD8 (PpmParkCalculateUnparkCount.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x14024051C (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmEventTraceHeteroResponse @ 0x140241650 (PpmEventTraceHeteroResponse.c)
 */

char PpmCheckComputeHeteroResponse()
{
  unsigned int v0; // ecx
  int v1; // r15d
  unsigned int v2; // r12d
  char v3; // si
  char *v4; // rbx
  unsigned __int16 v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // r9
  size_t v8; // rdx
  unsigned int v9; // r14d
  int v10; // r10d
  unsigned int v11; // r10d
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // ebp
  unsigned int v23; // edi
  int v24; // ecx
  unsigned int v25; // edx
  char v26; // si
  __int64 *v28; // [rsp+30h] [rbp-348h]
  _DWORD Base[64]; // [rsp+40h] [rbp-338h] BYREF
  _QWORD v30[64]; // [rsp+140h] [rbp-238h] BYREF

  v28 = &PpmCurrentProfile[174 * dword_14032E84C + 5];
  if ( PpmHeteroPolicy != 4 )
  {
LABEL_47:
    PpmParkCalculateUnparkCount();
    return 1;
  }
  v0 = PpmParkNumNodes;
  v1 = 0;
  v2 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = (char *)PpmParkNodes + 120 * v2;
      if ( v4[97] )
        break;
      v1 = 1;
LABEL_45:
      if ( ++v2 >= v0 )
      {
        if ( v1 )
          goto LABEL_47;
        return 1;
      }
    }
    v5 = *((_WORD *)v4 + 2);
    v6 = 0LL;
    v7 = *((_QWORD *)v4 + 1);
    v8 = 0LL;
    v9 = (unsigned __int8)v4[107];
    v10 = v5;
LABEL_6:
    v11 = v10 + 1;
    while ( 1 )
    {
      if ( v7 )
      {
        _BitScanForward64(&v12, v7);
        v10 = v5;
        v7 &= ~(1LL << v12);
        v13 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v5 + (unsigned __int8)v12];
        if ( (unsigned int)v13 >= (unsigned int)KeNumberProcessors_0 )
        {
          v14 = 0LL;
        }
        else
        {
          _mm_lfence();
          v14 = KiProcessorBlock[v13];
        }
        v15 = (unsigned int)(*(_DWORD *)(v14 + 24232) * *(_DWORD *)(v14 + 24236)) >> 16;
        v6 += v15;
        Base[v13] = v15;
        v8 = (unsigned int)(v13 + 1);
        goto LABEL_6;
      }
      if ( ++v5 >= v11 )
        break;
      v7 = *(_QWORD *)(8LL * v5 + 8);
    }
    qsort(Base, v8, 4uLL, PpmUtilityComparer);
    LODWORD(v16) = (unsigned __int8)v4[6];
    v17 = 0LL;
    v18 = 0LL;
    if ( v4[6] )
    {
      v19 = *((_QWORD *)v4 + 9);
      v20 = (unsigned __int8)v4[6];
      do
      {
        v17 += v6 * *(_QWORD *)(v19 + 8 * v20);
        v16 = (unsigned int)(v16 - 1);
        v30[v16] = v17;
        v19 = *((_QWORD *)v4 + 9);
        v21 = v20 * *(_QWORD *)(v19 + 8 * v20);
        --v20;
        v18 += v21;
      }
      while ( (_DWORD)v16 );
    }
    v22 = (unsigned __int8)v4[97];
    v23 = v9;
    if ( v9 >= v22 )
      goto LABEL_23;
    do
    {
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v18,
                            (unsigned int)Base[v23],
                            v30[v23],
                            *((unsigned __int8 *)v28 + v23 + 744)) )
        break;
      ++v23;
    }
    while ( v23 < v22 );
    if ( v23 <= v9 )
    {
LABEL_23:
      while ( v23 )
      {
        --v23;
        if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                             v18,
                             (unsigned int)Base[v23],
                             v30[v23],
                             *((unsigned __int8 *)v28 + v23 + 104)) )
        {
          ++v23;
          break;
        }
      }
      v24 = v23 < v9;
    }
    else
    {
      v24 = 2;
    }
    if ( v4[116] == v24 )
    {
      v25 = (unsigned __int8)++v4[115];
    }
    else
    {
      v4[116] = v24;
      v25 = 1;
      v4[115] = 1;
      v3 = 4;
    }
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v3 |= 0x10u;
    }
    else if ( v24 == 2 )
    {
      if ( v25 < *((unsigned __int8 *)v28 + 103) )
      {
LABEL_39:
        v4[114] |= 6u;
        if ( !v4[107] )
        {
          v1 = 1;
          v4[114] &= ~2u;
        }
        if ( v1 )
          v26 = v3 | 1;
        else
          v26 = v3 | 2;
        PpmEventTraceHeteroResponse((_DWORD)v4, (unsigned int)Base, (unsigned int)v30, v18, v23, v26);
        v0 = PpmParkNumNodes;
        goto LABEL_45;
      }
      v3 |= 0x20u;
    }
    else
    {
      if ( v24 != 1 || v25 < *((unsigned __int8 *)v28 + 102) )
        goto LABEL_39;
      v3 |= 0x40u;
    }
    v4[107] = v23;
    goto LABEL_39;
  }
  return 1;
}
