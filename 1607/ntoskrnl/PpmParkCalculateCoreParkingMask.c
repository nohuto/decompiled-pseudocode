/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x1400D2A6C
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1401D73AC (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmEventLPICoreParking @ 0x14020BF6C (PpmEventLPICoreParking.c)
 *     PpmEventTraceCoreParkingSelection @ 0x14020C878 (PpmEventTraceCoreParkingSelection.c)
 *     PpmParkChooseCoresToUnpark @ 0x14020D7B0 (PpmParkChooseCoresToUnpark.c)
 *     PpmParkComputeDiff @ 0x14020DDC8 (PpmParkComputeDiff.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  __int64 v0; // r15
  unsigned int v2; // r12d
  unsigned int v3; // ecx
  unsigned int v4; // esi
  char *v5; // rbx
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // al
  unsigned int v8; // r13d
  __int64 v9; // rdi
  __int64 Prcb; // rax
  __int64 *v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // r12
  __int64 v14; // r11
  int v15; // esi
  unsigned int v16; // r9d
  unsigned int v17; // edi
  int v18; // r8d
  unsigned int v19; // r8d
  unsigned __int8 v20; // al
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rdx
  __int16 v23; // ax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // r9d
  unsigned int v27; // r14d
  int v28; // eax
  unsigned __int64 v29; // [rsp+50h] [rbp-49h] BYREF
  ULONG v30; // [rsp+58h] [rbp-41h] BYREF
  ULONG v31; // [rsp+5Ch] [rbp-3Dh] BYREF
  unsigned int v32; // [rsp+60h] [rbp-39h]
  char *v33; // [rsp+68h] [rbp-31h]
  __int64 *v34; // [rsp+70h] [rbp-29h]
  __int64 v35; // [rsp+78h] [rbp-21h]
  _QWORD v36[2]; // [rsp+80h] [rbp-19h] BYREF
  __int16 v37; // [rsp+90h] [rbp-9h]
  _QWORD v38[2]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v39; // [rsp+A8h] [rbp+Fh]
  int v40; // [rsp+100h] [rbp+67h] BYREF
  int v41; // [rsp+108h] [rbp+6Fh]
  unsigned int v42; // [rsp+110h] [rbp+77h]
  unsigned int v43; // [rsp+118h] [rbp+7Fh]

  v0 = 0LL;
  if ( !PpmIsParkingEnabled )
    return 1;
  v2 = 0;
  v43 = 0;
  v3 = PpmParkNumNodes;
  v34 = &PpmCurrentProfile[174 * dword_140303D4C + 5];
  v4 = 100 * *((unsigned __int8 *)v34 + 73);
  v32 = v4;
  if ( !PpmParkNumNodes )
    goto LABEL_44;
  do
  {
    v5 = (char *)PpmParkNodes + 120 * v2;
    if ( (v5[114] & 1) != 0 )
      goto LABEL_43;
    v6 = v5[105];
    *((_QWORD *)v5 + 5) = *((_QWORD *)v5 + 4);
    v7 = v5[103];
    if ( v7 >= v6 )
    {
      v41 = 2;
      v8 = v6;
    }
    else
    {
      v41 = 1;
      v8 = v7;
    }
    v9 = 0LL;
    v37 = *((_WORD *)v5 + 2);
    v36[1] = *((_QWORD *)v5 + 1);
    v36[0] = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v30, v36) )
    {
      Prcb = KeGetPrcb(v30);
      if ( *(_DWORD *)(Prcb + 24240) >= v4 )
        v9 |= *(_QWORD *)(Prcb + 1608);
    }
    v11 = (__int64 *)(v5 + 16);
    v42 = 0;
    v33 = v5 + 16;
    v12 = 0;
    v13 = v9;
    do
    {
      v14 = *v11;
      v15 = 0;
      v40 = 0;
      v35 = v14;
      if ( !v14 )
        break;
      v16 = (unsigned __int8)v5[v0 + 96];
      v17 = v16;
      if ( !PpmPerfMaxOverrideEnabled )
      {
        if ( v16 > (unsigned __int8)v5[v0 + 106] )
          v17 = (unsigned __int8)v5[v0 + 106];
        v17 = (unsigned __int8)PpmParkGranularity
            + v17
            - 1
            - ((unsigned __int8)PpmParkGranularity + v17 - 1) % (unsigned __int8)PpmParkGranularity;
        if ( PpmParkUnparkCores )
          v17 *= (unsigned __int8)PpmParkGranularity;
      }
      if ( PpmCheckLatencyBoostActive )
      {
        v18 = (int)(v16 * *((unsigned __int8 *)v34 + v0 + 67) + 50) / 100;
        v19 = (v16 - v18) % (unsigned __int8)PpmParkGranularity + v18;
        if ( v17 < v19 )
        {
          v15 = 64;
          v17 = v19;
          v40 = 64;
        }
      }
      if ( !v12 && v5[107] )
      {
        v17 = (unsigned __int8)v5[96];
        v15 |= 0x80u;
        v40 = v15;
      }
      v5[v0 + 106] = v17;
      v20 = KeCpuSetQueryUnparkRecommendation(*((unsigned __int16 *)v5 + 2), v14, &v29);
      v21 = v29;
      LODWORD(v22) = v20;
      if ( v20 )
      {
        if ( (unsigned __int8)PpmParkGranularity > 1u )
        {
          v23 = *((_WORD *)v5 + 2);
          v38[0] = 0LL;
          v39 = v23;
          v38[1] = v29;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v31, v38) )
            v21 |= *(_QWORD *)(KeGetPrcb(v31) + 24920);
          v29 = v21;
          v22 = (0x101010101010101LL
               * ((((v21 - ((v21 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v21 - ((v21 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v21 - ((v21 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v21 - ((v21 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
        v17 += v22;
        if ( v17 >= (unsigned __int8)v5[v0 + 96] )
          v17 = (unsigned __int8)v5[v0 + 96];
        v15 |= 0x10u;
        v40 = v15;
      }
      v24 = (unsigned __int8)v5[v0 + 98];
      if ( v17 < v24 )
      {
        v15 |= 4u;
LABEL_38:
        v17 = v24;
        v40 = v15;
        goto LABEL_39;
      }
      v24 = (unsigned __int8)v5[v0 + 100];
      if ( v17 > v24 )
      {
        v15 |= 8u;
        goto LABEL_38;
      }
LABEL_39:
      v25 = 0;
      if ( v8 < v17 )
      {
        v17 = v8;
        v40 = v41 | v15;
        v25 = 1;
      }
      v8 -= v17;
      v5[v0 + 111] = PpmParkChooseCoresToUnpark(
                       v17,
                       *((unsigned __int16 *)v5 + 2),
                       v35,
                       *((_QWORD *)v5 + 5),
                       v13,
                       v21,
                       (__int64)(v5 + 32),
                       v25,
                       (__int64)&v40);
      v26 = v21;
      v27 = v42;
      PpmEventTraceCoreParkingSelection((_DWORD)v5, v42, v13, v26, v17, v40);
      v12 = v27 + 1;
      v11 = (__int64 *)(v33 + 8);
      v42 = v12;
      ++v0;
      v33 += 8;
    }
    while ( v12 < 2 );
    v3 = PpmParkNumNodes;
    v0 = 0LL;
    v2 = v43;
    v4 = v32;
LABEL_43:
    v43 = ++v2;
  }
  while ( v2 < v3 );
LABEL_44:
  PpmParkComputeDiff();
  if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v28 = 0, PpmParkLpiCapChanged) )
    v28 = 1;
  PpmParkLpiEngaged = PpmParkLpiCap != 0;
  PpmParkLpiCapChanged = 0;
  if ( v28 )
    PpmEventLPICoreParking();
  return 1;
}
