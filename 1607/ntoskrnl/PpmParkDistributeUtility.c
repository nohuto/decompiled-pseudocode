/*
 * XREFs of PpmParkDistributeUtility @ 0x1400D2710
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x14020AD4C (PpmHeteroDistributeUtility.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 */

char PpmParkDistributeUtility()
{
  unsigned int v0; // ecx
  unsigned int v1; // r11d
  char *v2; // r12
  unsigned __int16 v3; // r8
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  int v7; // r9d
  unsigned __int64 v8; // rcx
  unsigned int v9; // r9d
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r14d
  unsigned __int64 v13; // r15
  int v14; // r13d
  unsigned int v15; // ecx
  unsigned int v16; // r10d
  unsigned __int16 v17; // r9
  int v18; // r8d
  unsigned __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  char *v24; // r12
  unsigned __int16 v25; // cx
  int v26; // r8d
  unsigned int v27; // r8d
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v31; // rdx
  __int64 Prcb; // rax
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-58h] BYREF
  __int64 v36; // [rsp+28h] [rbp-50h]
  unsigned __int16 v37; // [rsp+30h] [rbp-48h]
  bool v38; // [rsp+90h] [rbp+18h]
  ULONG v39; // [rsp+98h] [rbp+20h] BYREF
  unsigned int v40; // [rsp+A0h] [rbp+28h]
  char *v41; // [rsp+A8h] [rbp+30h]

  v38 = LOBYTE(PpmCurrentProfile[174 * dword_140303D4C + 14]) != 0;
  v0 = PpmParkNumNodes;
  v40 = 0;
  v1 = 0;
  if ( !PpmParkNumNodes )
    return 1;
  do
  {
    v2 = (char *)PpmParkNodes + 120 * v1;
    v41 = v2;
    if ( v2[107] )
      goto LABEL_41;
    v3 = *((_WORD *)v2 + 2);
    v4 = 0;
    v5 = 0;
    v6 = *((_QWORD *)v2 + 4) ^ *((_QWORD *)v2 + 1);
    v7 = v3;
    v8 = v6;
    v37 = v3;
    v35 = 0LL;
    while ( 1 )
    {
      v9 = v7 + 1;
      if ( !v8 )
        break;
LABEL_5:
      _BitScanForward64(&v10, v8);
      v7 = v3;
      v36 = v8 & ~(1LL << v10);
      v39 = KiProcessorNumberToIndexMappingTable[64 * v3 + (unsigned __int8)v10];
      if ( v39 >= (unsigned int)KeNumberProcessors_0 )
        v11 = 0LL;
      else
        v11 = KiProcessorBlock[v39];
      v5 += *(_DWORD *)(v11 + 24236);
      v3 = v37;
      ++v4;
      v8 = v36;
    }
    while ( 1 )
    {
      v37 = ++v3;
      if ( v3 >= v9 )
        break;
      v8 = *(_QWORD *)(8LL * v3 + 8);
      if ( v8 )
        goto LABEL_5;
    }
    v12 = *((unsigned __int16 *)v2 + 2);
    v13 = *((_QWORD *)v2 + 4);
    v35 = 0LL;
    v14 = v12;
    while ( v13 )
    {
LABEL_48:
      _BitScanForward64(&v31, v13);
      v14 = (unsigned __int16)v12;
      v13 &= ~(1LL << v31);
      v39 = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v12 + (unsigned __int8)v31];
      Prcb = KeGetPrcb(v39);
      v5 += *(_DWORD *)(Prcb + 24236) - *(_DWORD *)(Prcb + 24240);
    }
    while ( 1 )
    {
      LOWORD(v12) = v12 + 1;
      if ( (unsigned __int16)v12 >= (unsigned int)(v14 + 1) )
        break;
      v13 = *(_QWORD *)(8LL * (unsigned __int16)v12 + 8);
      if ( v13 )
        goto LABEL_48;
    }
    if ( v4 <= 1 )
      v4 = 1;
    v15 = v4;
    if ( (unsigned __int8)v41[110] < v4 )
      v15 = (unsigned __int8)v41[110];
    if ( v15 <= 1 )
      v15 = 1;
    if ( v4 == 8 )
      v16 = v5 >> 3;
    else
      v16 = v5 / v4;
    if ( v15 != 1 )
      v5 /= v15;
    v37 = *((_WORD *)v41 + 2);
    v17 = v37;
    v18 = v37;
    v35 = 0LL;
    v19 = v6;
    while ( 1 )
    {
      v20 = v18 + 1;
      if ( !v19 )
        break;
LABEL_24:
      _BitScanForward64(&v21, v19);
      v18 = v17;
      v36 = v19 & ~(1LL << v21);
      v39 = KiProcessorNumberToIndexMappingTable[64 * v17 + (unsigned __int8)v21];
      if ( v39 >= (unsigned int)KeNumberProcessors_0 )
        v22 = 0LL;
      else
        v22 = KiProcessorBlock[v39];
      v23 = *(_DWORD *)(v22 + 24236);
      if ( v16 <= v23 )
      {
        v6 ^= *(_QWORD *)(v22 + 1608);
        if ( v5 <= v23 )
        {
          if ( !v38 )
            goto LABEL_27;
          v33 = v5;
          v17 = v37;
          if ( *(_DWORD *)(v22 + 24240) > v5 )
            v33 = *(_DWORD *)(v22 + 24240);
          v19 = v36;
          *(_DWORD *)(v22 + 24236) = v33;
        }
        else
        {
          v17 = v37;
          v19 = v36;
          *(_DWORD *)(v22 + 24236) = v5;
        }
      }
      else
      {
LABEL_27:
        v17 = v37;
        v19 = v36;
      }
    }
    while ( 1 )
    {
      v37 = ++v17;
      if ( v17 >= v20 )
        break;
      v19 = *(_QWORD *)(8LL * v17 + 8);
      if ( v19 )
        goto LABEL_24;
    }
    v24 = v41;
    v35 = 0LL;
    v37 = *((_WORD *)v41 + 2);
    v25 = v37;
    v26 = v37;
    while ( 1 )
    {
      v27 = v26 + 1;
      if ( !v6 )
        break;
LABEL_35:
      _BitScanForward64(&v28, v6);
      v26 = v25;
      v36 = v6 & ~(1LL << v28);
      v39 = KiProcessorNumberToIndexMappingTable[64 * v25 + (unsigned __int8)v28];
      if ( v39 >= (unsigned int)KeNumberProcessors_0 )
        v29 = 0LL;
      else
        v29 = KiProcessorBlock[v39];
      v6 = v36;
      *(_DWORD *)(v29 + 24236) = v16;
      v25 = v37;
    }
    while ( 1 )
    {
      v37 = ++v25;
      if ( v25 >= v27 )
        break;
      v6 = *(_QWORD *)(8LL * v25 + 8);
      if ( v6 )
        goto LABEL_35;
    }
    if ( v38 )
    {
      v37 = *((_WORD *)v24 + 2);
      v36 = *((_QWORD *)v24 + 4);
      v35 = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v39, &v35) )
      {
        v34 = KeGetPrcb(v39);
        *(_DWORD *)(v34 + 24236) = *(_DWORD *)(v34 + 24240);
      }
    }
    v0 = PpmParkNumNodes;
    v1 = v40;
LABEL_41:
    v40 = ++v1;
  }
  while ( v1 < v0 );
  return 1;
}
