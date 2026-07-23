/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x14020AA78
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PpmParkCalculateUnparkCount @ 0x1400D2AAC (PpmParkCalculateUnparkCount.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x14020AF84 (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmEventTraceHeteroResponse @ 0x14020CAC0 (PpmEventTraceHeteroResponse.c)
 */

char PpmCheckComputeHeteroResponse()
{
  unsigned int v0; // ecx
  int v1; // r12d
  unsigned int v2; // r13d
  char v3; // si
  char *v4; // rdi
  __int16 v5; // ax
  __int64 v6; // r14
  unsigned __int16 *v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // rbx
  __int64 Prcb; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  size_t v13; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r14d
  unsigned int v19; // ebx
  __int64 *v20; // rdi
  int v21; // ecx
  unsigned int v22; // edx
  char v23; // si
  size_t NumOfElements; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-C8h]
  char *v27; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v28[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+60h] [rbp-A8h]
  _DWORD Base[64]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[64]; // [rsp+168h] [rbp+60h] BYREF

  v26 = &PpmCurrentProfile[174 * dword_140303D4C + 5];
  if ( PpmHeteroPolicy != 4 )
  {
LABEL_44:
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
      v27 = v4;
      if ( v4[97] )
        break;
      v1 = 1;
LABEL_42:
      if ( ++v2 >= v0 )
      {
        if ( v1 )
          goto LABEL_44;
        return 1;
      }
    }
    v5 = *((_WORD *)v4 + 2);
    v6 = 0LL;
    v7 = (unsigned __int16 *)*((_QWORD *)v4 + 1);
    LODWORD(NumOfElements) = 0;
    v28[0] = 0LL;
    v8 = (unsigned __int8)v4[107];
    LOWORD(v29) = v5;
    v28[1] = v7;
    while ( !(unsigned int)KeEnumerateNextProcessor(&NumOfElements, v28) )
    {
      v9 = (unsigned int)NumOfElements;
      Prcb = KeGetPrcb(NumOfElements);
      v11 = (unsigned int)(*(_DWORD *)(Prcb + 24232) * *(_DWORD *)(Prcb + 24236)) >> 16;
      v6 += v11;
      Base[v9] = v11;
      LODWORD(NumOfElements) = v9 + 1;
    }
    qsort(Base, (unsigned int)NumOfElements, 4uLL, PpmUtilityComparer);
    LODWORD(v12) = (unsigned __int8)v4[6];
    v13 = 0LL;
    v14 = 0LL;
    NumOfElements = 0LL;
    if ( (_DWORD)v12 )
    {
      v15 = *((_QWORD *)v4 + 9);
      v16 = (unsigned int)v12;
      do
      {
        v14 += v6 * *(_QWORD *)(v15 + 8 * v16);
        v12 = (unsigned int)(v12 - 1);
        v31[v12] = v14;
        v15 = *((_QWORD *)v4 + 9);
        v17 = v16 * *(_QWORD *)(v15 + 8 * v16);
        --v16;
        v13 += v17;
      }
      while ( (_DWORD)v12 );
      NumOfElements = v13;
    }
    v18 = (unsigned __int8)v4[97];
    v19 = v8;
    if ( v8 >= v18 )
      goto LABEL_20;
    v20 = v26;
    do
    {
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v13,
                            (unsigned int)Base[v19],
                            v31[v19],
                            *((unsigned __int8 *)v20 + v19 + 744)) )
        break;
      v13 = NumOfElements;
      ++v19;
    }
    while ( v19 < v18 );
    v4 = v27;
    if ( v19 <= v8 )
    {
      do
      {
        v13 = NumOfElements;
LABEL_20:
        if ( !v19 )
          goto LABEL_23;
        --v19;
      }
      while ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                               v13,
                               (unsigned int)Base[v19],
                               v31[v19],
                               *((unsigned __int8 *)v26 + v19 + 104)) );
      ++v19;
LABEL_23:
      v21 = v19 < v8;
    }
    else
    {
      v21 = 2;
    }
    if ( v4[116] == v21 )
    {
      v22 = (unsigned __int8)++v4[115];
    }
    else
    {
      v22 = 1;
      v4[116] = v21;
      v4[115] = 1;
      v3 = 4;
    }
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v3 |= 0x10u;
    }
    else if ( v21 == 2 )
    {
      if ( v22 < *((unsigned __int8 *)v26 + 103) )
      {
LABEL_36:
        v4[114] |= 6u;
        if ( !v4[107] )
        {
          v1 = 1;
          v4[114] &= ~2u;
        }
        if ( v1 )
          v23 = v3 | 1;
        else
          v23 = v3 | 2;
        PpmEventTraceHeteroResponse((_DWORD)v4, (unsigned int)Base, (unsigned int)v31, NumOfElements, v19, v23);
        v0 = PpmParkNumNodes;
        goto LABEL_42;
      }
      v3 |= 0x20u;
    }
    else
    {
      if ( v21 != 1 || v22 < *((unsigned __int8 *)v26 + 102) )
        goto LABEL_36;
      v3 |= 0x40u;
    }
    v4[107] = v19;
    goto LABEL_36;
  }
  return 1;
}
