/*
 * XREFs of PpmIdleCheckCoordinatedDependencies @ 0x1401FFB1C
 * Callers:
 *     PpmIdleCheckCoordinatedDependency @ 0x1401FFC78 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1401FFF40 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1401FFC78 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleSelectCoordinatedProcessorDependency @ 0x140200714 (PpmIdleSelectCoordinatedProcessorDependency.c)
 *     PpmTestAndLockProcessor @ 0x14020106C (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependencies(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        ULONG *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // edi
  __int64 v15; // rsi
  ULONG v16; // ecx
  __int64 result; // rax
  __int64 Prcb; // rsi
  int v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  v10 = 0;
  if ( !a6 )
    return 0LL;
  v15 = a10;
  while ( 1 )
  {
    v16 = *a7;
    if ( *a7 == -1 )
    {
      result = PpmIdleCheckCoordinatedDependency(a1, a2, a4, a5, a3, (__int64)(a7 + 2), a8, a9, v15);
    }
    else if ( v16 == *(_DWORD *)(a1 + 36) )
    {
      result = PpmIdleSelectCoordinatedProcessorDependency(a1, a2, a4, a5, (__int64)(a7 + 2), a8);
    }
    else
    {
      Prcb = KeGetPrcb(v16);
      if ( (int)PpmTestAndLockProcessor(Prcb, a10, a7 + 2) >= 0 )
        result = *(_BYTE *)(PpmPlatformStates + 12)
              && *(_DWORD *)(248LL * *(unsigned int *)(Prcb + 23860) + *(_QWORD *)(Prcb + 23808) + 984) > a4
               ? 2147483650LL
               : 0LL;
      else
        result = 2147483653LL;
      v15 = a10;
    }
    if ( result )
      break;
    a3 = v19;
    ++v10;
    a7 += 6;
    if ( v10 >= a6 )
      return 0LL;
  }
  return result;
}
