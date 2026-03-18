/*
 * XREFs of PpmIdleCheckCoordinatedDependency @ 0x1402344D4
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x14023436C (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x14023436C (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140234828 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140235064 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleTransitionStall @ 0x140235220 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x140235ADC (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependency(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r11
  __int64 v10; // rbx
  unsigned int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned int v14; // r13d
  char v15; // r12
  __int64 v16; // r15
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned int v21; // ebx
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  unsigned __int16 v26; // si
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v32; // [rsp+50h] [rbp-78h]
  int v33; // [rsp+54h] [rbp-74h] BYREF
  _QWORD v34[14]; // [rsp+58h] [rbp-70h] BYREF

  v33 = -1;
  v9 = a1;
  v32 = 0;
  v10 = 2147483649LL;
  v11 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v12 = a6;
  v13 = 0LL;
  v14 = 0;
  v15 = (*(_QWORD *)(PpmPlatformStates + 8 * ((v11 >> 6) + 48LL * *(unsigned int *)(*(_QWORD *)(a6 + 8) + 4LL)) + 128) >> (v11 & 0x3F)) & 1;
  if ( !*(_DWORD *)a6 )
    return v10;
  v16 = a8;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v12 + 8);
    v18 = PpmPlatformStates;
    v19 = *(unsigned int *)(v17 + 24LL * v14 + 4);
    v20 = 384 * v19;
    if ( v15 )
      break;
    if ( *(_BYTE *)(v17 + 24LL * v14 + 2) == (_BYTE)v13 )
      goto LABEL_32;
    v21 = *(_DWORD *)(v20 + PpmPlatformStates + 312);
    if ( (v21 & 0x4000000) == 0 )
    {
      memset(v34, 0, 0x20uLL);
      v13 = 0LL;
      v34[1] = PopIdleTransitionTimeout;
      BYTE4(v34[3]) = 1;
      v34[2] = 0LL;
      if ( (v21 & 0x3000000) == 0x1000000 )
      {
        do
        {
          if ( v21 >> 27 > a5 )
            break;
          PpmIdleTransitionStall(v34);
          v21 = *(_DWORD *)(v20 + v18 + 312);
        }
        while ( (v21 & 0x3000000) == 0x1000000 );
        v16 = a8;
        v13 = 0LL;
      }
      v12 = a6;
      v9 = a1;
      if ( (v21 & 0x4000000) == 0 )
      {
        v10 = 2147483659LL;
        goto LABEL_32;
      }
    }
    v22 = *(_DWORD *)(v20 + v18 + 64);
    if ( v22 > a3 )
    {
      v10 = 2147483650LL;
      goto LABEL_32;
    }
    v23 = PpmIdleCheckCoordinatedDependencies(
            v9,
            a2,
            a5,
            v22 - a3,
            a4,
            *(_DWORD *)(v17 + 24LL * v14 + 8),
            *(unsigned int **)(v17 + 24LL * v14 + 16),
            v13,
            v13,
            a9);
    v13 = 0LL;
    v10 = v23;
    if ( !v23 )
      goto LABEL_18;
LABEL_31:
    v12 = a6;
LABEL_32:
    if ( ++v14 >= *(_DWORD *)v12 )
      return v10;
    v9 = a1;
  }
  v32 = *(_DWORD *)(v16 + 4);
  if ( *(_BYTE *)(v17 + 24LL * v14 + 1) == (_BYTE)v13 )
    goto LABEL_32;
  v33 = -1;
  v10 = PpmIdleCheckCoordinatedStateEligibility(v9, a2, a3, a4, v19, a5, (__int64)&v33, v16);
  if ( v10 )
  {
LABEL_30:
    PpmIdleRollbackCoordinatedSelection(v16, v32);
    goto LABEL_31;
  }
LABEL_18:
  if ( *(_BYTE *)(v17 + 24LL * v14) )
  {
    v24 = v20 + v18;
    v10 = 0LL;
    v25 = *(_QWORD *)(v20 + v18 + 128);
    v26 = 0;
    while ( 1 )
    {
      while ( !v25 )
      {
        if ( ++v26 >= (unsigned int)*(unsigned __int16 *)(v24 + 120) )
          goto LABEL_34;
        v25 = *(_QWORD *)(v24 + 8LL * v26 + 128);
      }
      _BitScanForward64(&v27, v25);
      v25 &= ~(1LL << v27);
      v28 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v26 + (unsigned __int8)v27];
      if ( (unsigned int)v28 >= (unsigned int)KeNumberProcessors_0 )
        v29 = 0LL;
      else
        v29 = KiProcessorBlock[v28];
      if ( a1 != v29 )
      {
        v30 = PpmTestAndLockProcessor(v29, a9, 0LL);
        v13 = 0LL;
        if ( v30 < 0 )
          break;
      }
    }
    v10 = 2147483653LL;
    if ( !v15 )
      goto LABEL_31;
    goto LABEL_30;
  }
LABEL_34:
  if ( v15 )
    *a7 = v33;
  return v10;
}
