/*
 * XREFs of PpmIdleCheckCoordinatedStateEligibility @ 0x1401FFF40
 * Callers:
 *     PpmIdleSelectStates @ 0x14013BBF0 (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1401FFC78 (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1401D3D04 (KeIsSubsetAffinityEx.c)
 *     PpmCheckIdleVeto @ 0x1401FF5D4 (PpmCheckIdleVeto.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1401FFB1C (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1402006D4 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402009F4 (PpmIdleWaitForDependentTransitions.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedStateEligibility(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v9; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // r8d
  __int64 v18; // r10
  int v19; // r11d
  unsigned int v21; // [rsp+B0h] [rbp+28h]

  v9 = PpmPlatformStates;
  v12 = *(_QWORD *)(a1 + 23808);
  v13 = 384LL * a5;
  v14 = v12 + 224;
  v21 = *(_DWORD *)(a8 + 4);
  if ( *(_BYTE *)(v13 + PpmPlatformStates + 113) )
  {
    if ( !*(_BYTE *)(v12 + 524) )
    {
LABEL_3:
      v15 = 0xFFFFFFFFLL;
LABEL_21:
      PpmIdleRollbackCoordinatedSelection(a8, v21);
      return v15;
    }
  }
  else if ( !(unsigned int)KeIsSubsetAffinityEx((__int16 *)(v13 + PpmPlatformStates + 120), (__int16 *)(v12 + 560)) )
  {
    goto LABEL_3;
  }
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(v13 + v9 + 312),
         (a6 << 27) | KeGetPcr()->Prcb.Number & 0xFFF | 0x1000000,
         0) )
  {
    goto LABEL_3;
  }
  *(_DWORD *)(*(_QWORD *)(a8 + 16) + 4LL * (unsigned int)(*(_DWORD *)(a8 + 4))++) = a5;
  v16 = PpmCheckIdleVeto(v13 + v9 + 72);
  if ( v16 )
  {
    v15 = v16 | 0x100000000LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 64) > a3 )
  {
    v15 = 2147483650LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 384) )
  {
    v15 = 2147483652LL;
    goto LABEL_21;
  }
  if ( *(unsigned int *)(v13 + v9 + 68) > a4 )
  {
    v15 = 2147483651LL;
    goto LABEL_21;
  }
  v15 = PpmIdleCheckCoordinatedDependencies(
          v18,
          v19,
          v17,
          a3 - *(_DWORD *)(v13 + v9 + 64),
          a4,
          *(_DWORD *)(v13 + v9 + 116),
          *(ULONG **)(v13 + v9 + 304),
          (__int64)a7,
          a8,
          v14);
  if ( v15 )
    goto LABEL_21;
  if ( *a7 == -1 )
  {
    v15 = 2147483649LL;
    goto LABEL_21;
  }
  if ( (int)PpmIdleWaitForDependentTransitions(v14) < 0 )
  {
    v15 = 2147483653LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 384) )
  {
    v15 = 2147483652LL;
    goto LABEL_21;
  }
  return v15;
}
