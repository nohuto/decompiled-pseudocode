/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x1400E9C10
 * Callers:
 *     <none>
 * Callees:
 *     KeCpuSetQueryUnparkRecommendation @ 0x140205704 (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmEventLPICoreParking @ 0x140240B24 (PpmEventLPICoreParking.c)
 *     PpmEventTraceCoreParkingSelection @ 0x140241408 (PpmEventTraceCoreParkingSelection.c)
 *     PpmParkChooseCoresToUnpark @ 0x140241F7C (PpmParkChooseCoresToUnpark.c)
 *     PpmParkComputeDiff @ 0x1402425E0 (PpmParkComputeDiff.c)
 *     PpmParkFindOverUtilizedProcessors @ 0x140242668 (PpmParkFindOverUtilizedProcessors.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  unsigned int v1; // r14d
  unsigned int v2; // ecx
  char *v3; // rdi
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // al
  unsigned int v6; // r15d
  __int64 OverUtilizedProcessors; // rax
  int v8; // r14d
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 *v11; // rax
  __int64 v12; // r13
  int v13; // ebx
  unsigned int v14; // r10d
  unsigned int v15; // ecx
  unsigned int v16; // esi
  int v17; // r8d
  unsigned int v18; // r8d
  unsigned __int8 UnparkRecommendation; // al
  unsigned int v20; // eax
  int v21; // eax
  int v22; // ebx
  char v23; // al
  int v24; // r8d
  BOOL v25; // eax
  char *v26; // [rsp+50h] [rbp-68h]
  __int64 *v27; // [rsp+58h] [rbp-60h]
  __int64 v28[11]; // [rsp+60h] [rbp-58h] BYREF
  int v29; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+C8h] [rbp+10h]
  int v31; // [rsp+D0h] [rbp+18h]
  __int64 v32; // [rsp+D8h] [rbp+20h]

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 0;
  v30 = 0;
  v2 = PpmParkNumNodes;
  v27 = &PpmCurrentProfile[174 * dword_14032E84C + 5];
  v31 = 100 * *((unsigned __int8 *)v27 + 73);
  if ( !PpmParkNumNodes )
    goto LABEL_34;
  do
  {
    v3 = (char *)PpmParkNodes + 120 * v1;
    if ( (v3[114] & 1) != 0 )
      goto LABEL_33;
    v4 = v3[105];
    *((_QWORD *)v3 + 5) = *((_QWORD *)v3 + 4);
    v5 = v3[103];
    if ( v5 >= v4 )
    {
      v29 = 2;
      v6 = v4;
    }
    else
    {
      v29 = 1;
      v6 = v5;
    }
    OverUtilizedProcessors = PpmParkFindOverUtilizedProcessors(v3);
    v8 = v29;
    v9 = 0;
    v32 = OverUtilizedProcessors;
    v10 = 0LL;
    v11 = (__int64 *)(v3 + 16);
    v26 = v3 + 16;
    do
    {
      v12 = *v11;
      v13 = 0;
      v29 = 0;
      if ( !v12 )
        break;
      v14 = (unsigned __int8)v3[v10 + 96];
      v15 = v14;
      if ( v14 > (unsigned __int8)v3[v10 + 106] )
        v15 = (unsigned __int8)v3[v10 + 106];
      v16 = v15
          + (unsigned __int8)PpmParkGranularity
          - 1
          - (v15 + (unsigned __int8)PpmParkGranularity - 1) % (unsigned __int8)PpmParkGranularity;
      if ( PpmParkUnparkCores )
        v16 *= (unsigned __int8)PpmParkGranularity;
      if ( PpmCheckLatencyBoostActive )
      {
        v17 = (int)(v14 * *((unsigned __int8 *)v27 + v10 + 67) + 50) / 100;
        v18 = (v14 - v17) % (unsigned __int8)PpmParkGranularity + v17;
        if ( v16 < v18 )
        {
          v13 = 64;
          v16 = v18;
          v29 = 64;
        }
      }
      if ( !v9 && v3[107] )
      {
        v16 = (unsigned __int8)v3[96];
        v13 |= 0x80u;
        v29 = v13;
      }
      v3[v10 + 106] = v16;
      UnparkRecommendation = KeCpuSetQueryUnparkRecommendation(*((unsigned __int16 *)v3 + 2), v12, v28);
      if ( UnparkRecommendation )
      {
        v16 += UnparkRecommendation;
        if ( v16 >= (unsigned __int8)v3[v10 + 96] )
          v16 = (unsigned __int8)v3[v10 + 96];
        v13 |= 0x10u;
        v29 = v13;
      }
      v20 = (unsigned __int8)v3[v10 + 98];
      if ( v16 < v20 )
      {
        v13 |= 4u;
LABEL_28:
        v16 = v20;
        v29 = v13;
        goto LABEL_29;
      }
      v20 = (unsigned __int8)v3[v10 + 100];
      if ( v16 > v20 )
      {
        v13 |= 8u;
        goto LABEL_28;
      }
LABEL_29:
      v21 = 0;
      if ( v6 < v16 )
      {
        v16 = v6;
        v29 = v8 | v13;
        v21 = 1;
      }
      v22 = v28[0];
      v6 -= v16;
      v23 = PpmParkChooseCoresToUnpark(
              v16,
              *((unsigned __int16 *)v3 + 2),
              v12,
              *((_QWORD *)v3 + 5),
              v32,
              v28[0],
              (__int64)(v3 + 32),
              v21,
              (__int64)&v29);
      v24 = v32;
      v3[v10 + 111] = v23;
      PpmEventTraceCoreParkingSelection((_DWORD)v3, v9++, v24, v22, v16, v29);
      v11 = (__int64 *)(v26 + 8);
      ++v10;
      v26 += 8;
    }
    while ( v9 < 2 );
    v2 = PpmParkNumNodes;
    v1 = v30;
LABEL_33:
    v30 = ++v1;
  }
  while ( v1 < v2 );
LABEL_34:
  PpmParkComputeDiff();
  v25 = __PAIR64__(PpmParkLpiCapChanged, PpmParkLpiEngaged) != (PpmParkLpiCap != 0);
  PpmParkLpiCapChanged = 0;
  PpmParkLpiEngaged = PpmParkLpiCap != 0;
  if ( v25 )
    PpmEventLPICoreParking();
  return 1;
}
