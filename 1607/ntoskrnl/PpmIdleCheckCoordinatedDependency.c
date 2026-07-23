/*
 * XREFs of PpmIdleCheckCoordinatedDependency @ 0x1401FFC78
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x1401FFB1C (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1401FFB1C (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1401FFF40 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1402006D4 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleTransitionStall @ 0x140200924 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x14020106C (PpmTestAndLockProcessor.c)
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
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned int v11; // r11d
  __int64 v12; // r8
  __int64 v13; // rbx
  char v14; // r12
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned int v22; // ebx
  unsigned int v23; // r9d
  __int64 Prcb; // rax
  unsigned int v26; // [rsp+58h] [rbp-51h]
  int v27; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v28; // [rsp+60h] [rbp-49h]
  ULONG v29; // [rsp+64h] [rbp-45h] BYREF
  unsigned __int16 *v30[2]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v31; // [rsp+78h] [rbp-31h]
  _QWORD v32[13]; // [rsp+80h] [rbp-29h] BYREF

  v9 = *(unsigned int *)(a1 + 36);
  v10 = a1;
  v27 = -1;
  v26 = 0;
  v11 = a3;
  v12 = a6;
  v13 = 2147483649LL;
  v14 = (*(_QWORD *)(PpmPlatformStates
                   + 8
                   * (48LL * *(unsigned int *)(*(_QWORD *)(a6 + 8) + 4LL)
                    + ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v9] >> 6))
                   + 128) >> (KiProcessorIndexToNumberMappingTable[v9] & 0x3F)) & 1;
  v15 = 0LL;
  v28 = 0;
  if ( !*(_DWORD *)a6 )
    return v13;
  v16 = a8;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v12 + 8);
    v18 = 3 * v15;
    v19 = PpmPlatformStates;
    v20 = *(unsigned int *)(v17 + 24 * v15 + 4);
    v21 = 384 * v20;
    if ( v14 )
    {
      v26 = *(_DWORD *)(v16 + 4);
      if ( !*(_BYTE *)(v17 + 24 * v15 + 1) )
        goto LABEL_26;
      v27 = -1;
      v13 = PpmIdleCheckCoordinatedStateEligibility(v10, a2, v11, a4, v20, a5, (__int64)&v27, v16);
      if ( !v13 )
        break;
LABEL_24:
      PpmIdleRollbackCoordinatedSelection(v16, v26);
      goto LABEL_25;
    }
    if ( !*(_BYTE *)(v17 + 24 * v15 + 2) )
      goto LABEL_26;
    v22 = *(_DWORD *)(v21 + PpmPlatformStates + 312);
    if ( (v22 & 0x4000000) == 0 )
    {
      memset(v32, 0, 0x20uLL);
      v32[1] = PopIdleTransitionTimeout;
      BYTE4(v32[3]) = 1;
      v32[2] = 0LL;
      if ( (v22 & 0x3000000) == 0x1000000 )
      {
        do
        {
          if ( v22 >> 27 > a5 )
            break;
          PpmIdleTransitionStall(v32);
          v22 = *(_DWORD *)(v21 + v19 + 312);
        }
        while ( (v22 & 0x3000000) == 0x1000000 );
        v16 = a8;
      }
      v11 = a3;
      v12 = a6;
      v10 = a1;
      if ( (v22 & 0x4000000) == 0 )
      {
        v13 = 2147483659LL;
        goto LABEL_26;
      }
    }
    v23 = *(_DWORD *)(v21 + v19 + 64);
    if ( v23 > v11 )
    {
      v13 = 2147483650LL;
      goto LABEL_26;
    }
    v13 = PpmIdleCheckCoordinatedDependencies(
            v10,
            a2,
            a5,
            v23 - v11,
            a4,
            *(_DWORD *)(v17 + 8 * v18 + 8),
            *(ULONG **)(v17 + 8 * v18 + 16),
            0LL,
            0LL,
            a9);
    if ( !v13 )
      break;
LABEL_25:
    v12 = a6;
LABEL_26:
    v15 = (unsigned int)(v28 + 1);
    v28 = v15;
    if ( (unsigned int)v15 >= *(_DWORD *)v12 )
      return v13;
    v10 = a1;
    v11 = a3;
  }
  if ( *(_BYTE *)(v17 + 8 * v18) )
  {
    v31 = 0;
    v13 = 0LL;
    v30[0] = (unsigned __int16 *)(v21 + v19 + 120);
    v30[1] = *((unsigned __int16 **)v30[0] + 1);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v29, v30) )
    {
      Prcb = KeGetPrcb(v29);
      if ( a1 != Prcb && (int)PpmTestAndLockProcessor(Prcb, a9, 0LL) < 0 )
      {
        v13 = 2147483653LL;
        if ( !v14 )
          goto LABEL_25;
        goto LABEL_24;
      }
    }
  }
  if ( v14 )
    *a7 = v27;
  return v13;
}
