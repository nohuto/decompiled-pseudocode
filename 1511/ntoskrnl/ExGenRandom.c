/*
 * XREFs of ExGenRandom @ 0x14002D854
 * Callers:
 *     RtlpAllocateHeap @ 0x1400D3E80 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1401250E8 (RtlpCreateHeapEncoding.c)
 *     MiBuildDynamicRegion @ 0x140132FA0 (MiBuildDynamicRegion.c)
 *     CcBcbProfiler @ 0x14014D260 (CcBcbProfiler.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x1401F95C4 (RtlpHeapGenerateRandomValue64.c)
 *     sub_140217EA0 @ 0x140217EA0 (sub_140217EA0.c)
 *     sub_1403B4000 @ 0x1403B4000 (sub_1403B4000.c)
 *     MiSelectImageBase @ 0x1403C6738 (MiSelectImageBase.c)
 *     RtlRandomEx @ 0x1403CBDAC (RtlRandomEx.c)
 *     MiProcessLoadConfigForDriver @ 0x1403CC914 (MiProcessLoadConfigForDriver.c)
 *     PspSetupUserStack @ 0x1403F2A8C (PspSetupUserStack.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     PspUserThreadStartup @ 0x140445974 (PspUserThreadStartup.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140462B64 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1404634D4 (MiInitializeProcessBottomUpEntropy.c)
 *     PspPrepareSystemDllInitBlock @ 0x140463B1C (PspPrepareSystemDllInitBlock.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     PspWow64InitThreadGuestx86 @ 0x1404A484C (PspWow64InitThreadGuestx86.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x1405301A0 (CmpCmdInit.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     InitializePool @ 0x1407496B4 (InitializePool.c)
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 *     MiInitializeRelocations @ 0x14074C01C (MiInitializeRelocations.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     MiInitializeNonPagedPool @ 0x14074D3B8 (MiInitializeNonPagedPool.c)
 *     CcInitializeCacheManager @ 0x140758600 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     ExpTimerInitialization @ 0x14075A390 (ExpTimerInitialization.c)
 *     ExpInitSystemPhase0 @ 0x14076ADE4 (ExpInitSystemPhase0.c)
 *     ExpRngInitializeSystem @ 0x14076B0AC (ExpRngInitializeSystem.c)
 *     MiInitializeBootDefaults @ 0x14076F498 (MiInitializeBootDefaults.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
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
