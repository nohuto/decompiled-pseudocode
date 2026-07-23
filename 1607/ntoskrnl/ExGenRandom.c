/*
 * XREFs of ExGenRandom @ 0x1400EE314
 * Callers:
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x14012EECC (RtlpCreateHeapEncoding.c)
 *     MiBuildDynamicRegion @ 0x14013CEB0 (MiBuildDynamicRegion.c)
 *     MiAssignSharedUserRanges @ 0x14013D710 (MiAssignSharedUserRanges.c)
 *     CcBcbProfiler @ 0x140156B50 (CcBcbProfiler.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x14021371C (RtlpHeapGenerateRandomValue64.c)
 *     sub_140231EA8 @ 0x140231EA8 (sub_140231EA8.c)
 *     sub_1403E1000 @ 0x1403E1000 (sub_1403E1000.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     PspUserThreadStartup @ 0x140457F30 (PspUserThreadStartup.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14046C0A4 (MiInitializeProcessBottomUpEntropy.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14046C68C (MiInitializeProcessTopDownEntropy.c)
 *     MiSelectImageBase @ 0x14046D450 (MiSelectImageBase.c)
 *     MiProcessLoadConfigForDriver @ 0x1404830E8 (MiProcessLoadConfigForDriver.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     RtlRandomEx @ 0x1404CB2E8 (RtlRandomEx.c)
 *     PspSetupUserStack @ 0x1404EE8C4 (PspSetupUserStack.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404FDC24 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThreadGuestx86 @ 0x1404FDF80 (PspWow64InitThreadGuestx86.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
 *     CmpCmdInit @ 0x14056F72C (CmpCmdInit.c)
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
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
