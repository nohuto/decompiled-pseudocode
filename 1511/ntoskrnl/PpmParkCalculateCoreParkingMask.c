/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x140076518
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1401C84C0 (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmEventLPICoreParking @ 0x1401F2000 (PpmEventLPICoreParking.c)
 *     PpmEventTraceCoreParkingSelection @ 0x1401F290C (PpmEventTraceCoreParkingSelection.c)
 *     PpmParkChooseCoresToUnpark @ 0x1401F3EC0 (PpmParkChooseCoresToUnpark.c)
 *     PpmParkComputeDiff @ 0x1401F44CC (PpmParkComputeDiff.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  __int64 v0; // r14
  unsigned int v1; // r15d
  unsigned int v2; // ecx
  unsigned int v3; // esi
  char *v4; // rdi
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al
  unsigned int v7; // r12d
  __int64 v8; // rbx
  __int64 Prcb; // rax
  __int64 v10; // r15
  __int64 *v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // r10
  int v14; // ebx
  unsigned int v15; // r9d
  unsigned int v16; // esi
  int v17; // r8d
  unsigned int v18; // r8d
  unsigned __int8 v19; // al
  unsigned int v20; // eax
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  unsigned int v25; // [rsp+50h] [rbp-29h]
  char *v26; // [rsp+58h] [rbp-21h]
  __int64 *v27; // [rsp+60h] [rbp-19h]
  __int64 v28; // [rsp+68h] [rbp-11h] BYREF
  __int64 v29; // [rsp+70h] [rbp-9h]
  _QWORD v30[2]; // [rsp+78h] [rbp-1h] BYREF
  __int16 v31; // [rsp+88h] [rbp+Fh]
  __int64 v32; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v33; // [rsp+E8h] [rbp+6Fh] BYREF
  int v34; // [rsp+F0h] [rbp+77h]
  unsigned int v35; // [rsp+F8h] [rbp+7Fh]

  v0 = 0LL;
  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 0;
  v35 = 0;
  v2 = PpmParkNumNodes;
  v27 = &PpmCurrentProfile[174 * dword_1402DE28C + 5];
  v3 = 100 * *((unsigned __int8 *)v27 + 73);
  v25 = v3;
  if ( !PpmParkNumNodes )
    goto LABEL_39;
  do
  {
    v4 = (char *)PpmParkNodes + 120 * v1;
    if ( (v4[114] & 1) != 0 )
      goto LABEL_38;
    v5 = v4[105];
    *((_QWORD *)v4 + 5) = *((_QWORD *)v4 + 4);
    v6 = v4[103];
    if ( v6 >= v5 )
    {
      v34 = 2;
      v7 = v5;
    }
    else
    {
      v34 = 1;
      v7 = v6;
    }
    v31 = *((_WORD *)v4 + 2);
    v8 = 0LL;
    v30[1] = *((_QWORD *)v4 + 1);
    v32 = 0LL;
    v30[0] = 0LL;
    if ( !(unsigned int)KeEnumerateNextProcessor(&v33, v30) )
    {
      do
      {
        Prcb = KeGetPrcb(v33);
        if ( *(_DWORD *)(Prcb + 24240) >= v3 )
          v8 |= *(_QWORD *)(Prcb + 1608);
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v33, v30) );
      v32 = v8;
    }
    v10 = v32;
    v11 = (__int64 *)(v4 + 16);
    v26 = v4 + 16;
    v12 = 0;
    do
    {
      v13 = *v11;
      v14 = 0;
      LODWORD(v32) = 0;
      v29 = v13;
      if ( !v13 )
        break;
      v15 = (unsigned __int8)v4[v0 + 96];
      v16 = v15;
      if ( !PpmPerfMaxOverrideEnabled )
      {
        if ( v15 > (unsigned __int8)v4[v0 + 106] )
          v16 = (unsigned __int8)v4[v0 + 106];
        v16 = (unsigned __int8)PpmParkGranularity
            + v16
            - 1
            - ((unsigned __int8)PpmParkGranularity + v16 - 1) % (unsigned __int8)PpmParkGranularity;
        if ( PpmParkUnparkCores )
          v16 *= (unsigned __int8)PpmParkGranularity;
      }
      if ( PpmCheckLatencyBoostActive )
      {
        v17 = (int)(v15 * *((unsigned __int8 *)v27 + v0 + 67) + 50) / 100;
        v18 = (v15 - v17) % (unsigned __int8)PpmParkGranularity + v17;
        if ( v16 < v18 )
        {
          v14 = 64;
          v16 = v18;
          LODWORD(v32) = 64;
        }
      }
      if ( !v12 && v4[107] )
      {
        v16 = (unsigned __int8)v4[96];
        v14 |= 0x80u;
        LODWORD(v32) = v14;
      }
      v4[v0 + 106] = v16;
      v19 = KeCpuSetQueryUnparkRecommendation(*((unsigned __int16 *)v4 + 2), v13, &v28);
      if ( v19 )
      {
        v16 += v19;
        if ( v16 >= (unsigned __int8)v4[v0 + 96] )
          v16 = (unsigned __int8)v4[v0 + 96];
        v14 |= 0x10u;
        LODWORD(v32) = v14;
      }
      v20 = (unsigned __int8)v4[v0 + 98];
      if ( v16 < v20 )
      {
        v14 |= 4u;
LABEL_33:
        v16 = v20;
        LODWORD(v32) = v14;
        goto LABEL_34;
      }
      v20 = (unsigned __int8)v4[v0 + 100];
      if ( v16 > v20 )
      {
        v14 |= 8u;
        goto LABEL_33;
      }
LABEL_34:
      v21 = 0;
      if ( v7 < v16 )
      {
        v16 = v7;
        LODWORD(v32) = v34 | v14;
        v21 = 1;
      }
      v22 = v28;
      v7 -= v16;
      v4[v0 + 111] = PpmParkChooseCoresToUnpark(
                       v16,
                       *((unsigned __int16 *)v4 + 2),
                       v29,
                       *((_QWORD *)v4 + 5),
                       v10,
                       v28,
                       (__int64)(v4 + 32),
                       v21,
                       (__int64)&v32);
      PpmEventTraceCoreParkingSelection((_DWORD)v4, v12++, v10, v22, v16, v32);
      v11 = (__int64 *)(v26 + 8);
      ++v0;
      v26 += 8;
    }
    while ( v12 < 2 );
    v2 = PpmParkNumNodes;
    v0 = 0LL;
    v1 = v35;
    v3 = v25;
LABEL_38:
    v35 = ++v1;
  }
  while ( v1 < v2 );
LABEL_39:
  PpmParkComputeDiff();
  if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v23 = 0, PpmParkLpiCapChanged) )
    v23 = 1;
  PpmParkLpiEngaged = PpmParkLpiCap != 0;
  PpmParkLpiCapChanged = 0;
  if ( v23 )
    PpmEventLPICoreParking();
  return 1;
}
