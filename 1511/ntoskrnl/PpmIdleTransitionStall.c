/*
 * XREFs of PpmIdleTransitionStall @ 0x1401E80F0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     PoInitiateProcessorWake @ 0x1401E6BAC (PoInitiateProcessorWake.c)
 *     PpmExitCoordinatedIdleState @ 0x1401E6F58 (PpmExitCoordinatedIdleState.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1401E7294 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1401E81C0 (PpmIdleWaitForDependentTransitions.c)
 *     PpmTestAndLockProcessor @ 0x1401E8820 (PpmTestAndLockProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall PpmIdleTransitionStall(__int64 a1)
{
  ULONG_PTR v2; // r9

  if ( *(_QWORD *)a1 )
  {
    if ( ++*(_DWORD *)(a1 + 24) == 1000 )
    {
      *(_DWORD *)(a1 + 24) = 0;
      if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)a1) > *(_QWORD *)(a1 + 8) )
      {
        v2 = *(_QWORD *)(a1 + 16);
        if ( v2 )
          KeBugCheckEx(0xA0u, 0x701uLL, *(unsigned int *)(v2 + 23860), v2, *(unsigned int *)(v2 + 36));
        KeBugCheckEx(0xA0u, 0x704uLL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    *(LARGE_INTEGER *)a1 = KeQueryPerformanceCounter(0LL);
  }
  if ( *(_BYTE *)(a1 + 28) )
    _mm_pause();
  _mm_pause();
}
