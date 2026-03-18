/*
 * XREFs of PpmIdleCheckCoordinatedStateEligibility @ 0x140234828
 * Callers:
 *     PpmIdleSelectStates @ 0x140160AB0 (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402344D4 (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PpmCheckIdleVeto @ 0x1402340B8 (PpmCheckIdleVeto.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x14023436C (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140235064 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402352AC (PpmIdleWaitForDependentTransitions.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedStateEligibility(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r15
  unsigned int v13; // r13d
  __int64 v14; // rbx
  unsigned __int16 v15; // ax
  unsigned __int16 *v16; // r10
  unsigned __int16 v17; // r8
  unsigned __int16 i; // dx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 *v21; // r9
  unsigned __int16 v22; // dx
  unsigned int v23; // eax
  int v24; // r8d
  __int64 v25; // r10
  unsigned int v26; // r11d
  unsigned __int16 v29; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int16 v30; // [rsp+62h] [rbp-F6h]
  int v31; // [rsp+64h] [rbp-F4h]
  _QWORD v32[21]; // [rsp+68h] [rbp-F0h]

  v9 = *(_QWORD *)(a1 + 23808);
  v10 = PpmPlatformStates;
  v11 = 384LL * a5;
  v12 = v9 + 224;
  v13 = *(_DWORD *)(a8 + 4);
  if ( *(_BYTE *)(v11 + PpmPlatformStates + 113) )
  {
    if ( !*(_BYTE *)(v9 + 524) )
    {
LABEL_3:
      v14 = 0xFFFFFFFFLL;
LABEL_36:
      PpmIdleRollbackCoordinatedSelection(a8, v13);
      return v14;
    }
  }
  else
  {
    v15 = *(_WORD *)(v9 + 560);
    v16 = (unsigned __int16 *)(v11 + PpmPlatformStates + 120);
    v17 = *v16;
    if ( *v16 < v15 )
      v15 = *v16;
    v29 = v15;
    for ( i = 0; i < v29; v15 = v29 )
    {
      v19 = i++;
      v32[v19] = *(_QWORD *)(v9 + 8 * v19 + 568) & *(_QWORD *)&v16[4 * v19 + 4];
    }
    v31 = 0;
    v30 = 20;
    if ( i < 0x14u )
    {
      do
      {
        v20 = i++;
        v32[v20] = 0LL;
      }
      while ( i < v30 );
      v15 = v29;
      v16 = (unsigned __int16 *)(v11 + v10 + 120);
    }
    if ( v17 >= v15 )
    {
      v21 = v16;
      v17 = v15;
    }
    else
    {
      v21 = &v29;
    }
    v22 = 0;
    if ( v17 )
    {
      while ( *(_QWORD *)&v16[4 * v22 + 4] == v32[v22] )
      {
        if ( ++v22 >= v17 )
          goto LABEL_17;
      }
      goto LABEL_3;
    }
LABEL_17:
    if ( v22 < *v21 )
    {
      while ( !*(_QWORD *)&v21[4 * v22 + 4] )
      {
        if ( ++v22 >= *v21 )
          goto LABEL_20;
      }
      goto LABEL_3;
    }
  }
LABEL_20:
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(v11 + v10 + 312),
         (a6 << 27) | KeGetPcr()->Prcb.Number & 0xFFF | 0x1000000,
         0) )
  {
    goto LABEL_3;
  }
  *(_DWORD *)(*(_QWORD *)(a8 + 16) + 4LL * (unsigned int)(*(_DWORD *)(a8 + 4))++) = a5;
  v23 = PpmCheckIdleVeto(v11 + v10 + 72);
  if ( v23 )
  {
    v14 = v23 | 0x100000000LL;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(v11 + v10 + 64) > v26 )
  {
    v14 = 2147483650LL;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(v11 + v10 + 384) )
  {
    v14 = 2147483652LL;
    goto LABEL_36;
  }
  if ( *(unsigned int *)(v11 + v10 + 68) > a4 )
  {
    v14 = 2147483651LL;
    goto LABEL_36;
  }
  v14 = PpmIdleCheckCoordinatedDependencies(
          v25,
          a2,
          v24,
          v26 - *(_DWORD *)(v11 + v10 + 64),
          a4,
          *(_DWORD *)(v11 + v10 + 116),
          *(unsigned int **)(v11 + v10 + 304),
          (__int64)a7,
          a8,
          v12);
  if ( v14 )
    goto LABEL_36;
  if ( *a7 == -1 )
  {
    v14 = 2147483649LL;
    goto LABEL_36;
  }
  if ( (int)PpmIdleWaitForDependentTransitions(v12) < 0 )
  {
    v14 = 2147483653LL;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(v11 + v10 + 384) )
  {
    v14 = 2147483652LL;
    goto LABEL_36;
  }
  return v14;
}
