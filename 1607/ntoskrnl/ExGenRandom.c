/*
 * XREFs of ExGenRandom @ 0x1400F0494
 * Callers:
 *     RtlpAllocateHeap @ 0x14009409C (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x14012E95C (RtlpCreateHeapEncoding.c)
 *     MiBuildDynamicRegion @ 0x14013C940 (MiBuildDynamicRegion.c)
 *     MiAssignSharedUserRanges @ 0x14013D1A0 (MiAssignSharedUserRanges.c)
 *     CcBcbProfiler @ 0x1401565E0 (CcBcbProfiler.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x1402138F0 (RtlpHeapGenerateRandomValue64.c)
 *     sub_14023207C @ 0x14023207C (sub_14023207C.c)
 *     sub_1403E1000 @ 0x1403E1000 (sub_1403E1000.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     PspUserThreadStartup @ 0x140459060 (PspUserThreadStartup.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14046D1D4 (MiInitializeProcessBottomUpEntropy.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14046D7BC (MiInitializeProcessTopDownEntropy.c)
 *     MiSelectImageBase @ 0x14046E580 (MiSelectImageBase.c)
 *     MiProcessLoadConfigForDriver @ 0x140484394 (MiProcessLoadConfigForDriver.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 *     MiReserveDriverPtes @ 0x1404CD0DC (MiReserveDriverPtes.c)
 *     RtlRandomEx @ 0x1404E91F8 (RtlRandomEx.c)
 *     PspSetupUserStack @ 0x14050B934 (PspSetupUserStack.c)
 *     PspPrepareSystemDllInitBlock @ 0x14051A834 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThreadGuestx86 @ 0x14051AB90 (PspWow64InitThreadGuestx86.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405362FC (MiInitializeSystemWorkingSetList.c)
 *     CmpCmdInit @ 0x14056F1EC (CmpCmdInit.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     MiInitializeBootDefaults @ 0x14078E68C (MiInitializeBootDefaults.c)
 *     ExpTimerInitialization @ 0x14079DF80 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407A4D44 (MiInitializeSystemPtes.c)
 *     MiAssignSessionRanges @ 0x1407AAAD8 (MiAssignSessionRanges.c)
 *     MiAssignTopLevelRanges @ 0x1407AACF4 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x1407AAFAC (MiAssignSystemVa.c)
 *     MiInitializeTopLevelBitmap @ 0x1407AB088 (MiInitializeTopLevelBitmap.c)
 *     InitializePool @ 0x1407B4330 (InitializePool.c)
 *     ExpInitSystemPhase0 @ 0x1407B58A0 (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x1407B89C4 (ExRngInitializeSystem.c)
 *     MiInitializeRelocations @ 0x1407BA558 (MiInitializeRelocations.c)
 *     MiInitializeSharedUserData @ 0x1407D0468 (MiInitializeSharedUserData.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ExGenRandom(int a1)
{
  __int64 v1; // rdi
  KIRQL v2; // r11
  char *v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // ebx
  unsigned int v7; // ebx
  int v8; // ecx
  int *v12; // rdi

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&ExpLFGRngLock);
  if ( (_DWORD)v1 == 1 && ExpRemainingLeftoverBootRngData )
  {
    v12 = (int *)((char *)&ExpLeftoverBootRngData + 4 * (unsigned int)--ExpRemainingLeftoverBootRngData);
    v6 = *v12;
    memset(v12, 0, sizeof(int));
  }
  else
  {
    v3 = (char *)&ExpLFGRngState + 228 * v1;
    v4 = (unsigned int)(*((_DWORD *)v3 + 55) + 1);
    v5 = (unsigned int)(*((_DWORD *)v3 + 56) + 1);
    if ( *((_DWORD *)v3 + 55) == 54 )
      v4 = 0LL;
    if ( *((_DWORD *)v3 + 56) == 54 )
      v5 = 0LL;
    v6 = *(_DWORD *)&v3[4 * v4] - *(_DWORD *)&v3[4 * v5];
    *(_DWORD *)&v3[4 * v4] = v6;
    *((_DWORD *)v3 + 55) = v4;
    *((_DWORD *)v3 + 56) = v5;
  }
  KeReleaseSpinLock(&ExpLFGRngLock, v2);
  v7 = ExpRNGAuxiliarySeed ^ v6;
  if ( (KeFeatureBits & 0x100000000LL) != 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      if ( _CF )
        break;
      if ( (unsigned int)++v8 >= 0xA )
        return v7;
    }
    v7 ^= _RDX;
  }
  return v7;
}
