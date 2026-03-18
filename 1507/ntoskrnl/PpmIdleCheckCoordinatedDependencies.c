/*
 * XREFs of PpmIdleCheckCoordinatedDependencies @ 0x14023436C
 * Callers:
 *     PpmIdleCheckCoordinatedDependency @ 0x1402344D4 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140234828 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     PpmIdleCheckCoordinatedDependency @ 0x1402344D4 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleSelectCoordinatedProcessorDependency @ 0x1402350A4 (PpmIdleSelectCoordinatedProcessorDependency.c)
 *     PpmTestAndLockProcessor @ 0x140235ADC (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependencies(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // esi
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rdi
  int v17; // [rsp+88h] [rbp+10h]
  int v18; // [rsp+90h] [rbp+18h]

  v18 = a3;
  v17 = a2;
  v10 = 0;
  if ( !a6 )
    return 0LL;
  while ( 1 )
  {
    v14 = *a7;
    if ( (_DWORD)v14 == -1 )
    {
      result = PpmIdleCheckCoordinatedDependency(a1, a2, a4, a5, a3, (__int64)(a7 + 2), a8, a9, a10);
    }
    else if ( (_DWORD)v14 == *(_DWORD *)(a1 + 36) )
    {
      result = PpmIdleSelectCoordinatedProcessorDependency(a1, a2, a4, a5, (__int64)(a7 + 2), a8);
    }
    else
    {
      if ( (unsigned int)v14 >= (unsigned int)KeNumberProcessors_0 )
      {
        v16 = 0LL;
      }
      else
      {
        _mm_lfence();
        v16 = KiProcessorBlock[v14];
      }
      if ( (int)PpmTestAndLockProcessor(v16, a10, a7 + 2) >= 0 )
        result = *(_BYTE *)(PpmPlatformStates + 12)
              && *(_DWORD *)(248LL * *(unsigned int *)(v16 + 23860) + *(_QWORD *)(v16 + 23808) + 984) > a4
               ? 2147483650LL
               : 0LL;
      else
        result = 2147483653LL;
    }
    if ( result )
      break;
    a2 = v17;
    ++v10;
    a3 = v18;
    a7 += 6;
    if ( v10 >= a6 )
      return 0LL;
  }
  return result;
}
