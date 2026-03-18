/*
 * XREFs of ExGenRandom @ 0x140020AD0
 * Callers:
 *     RtlpAllocateHeap @ 0x14010A2D0 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x14015874C (RtlpCreateHeapEncoding.c)
 *     MiBuildDynamicRegion @ 0x14015FC6C (MiBuildDynamicRegion.c)
 *     CcBcbProfiler @ 0x14017B2D0 (CcBcbProfiler.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x140248618 (RtlpHeapGenerateRandomValue64.c)
 *     sub_1402685C8 @ 0x1402685C8 (sub_1402685C8.c)
 *     sub_140406000 @ 0x140406000 (sub_140406000.c)
 *     MiCreatePebOrTeb @ 0x140421270 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404658B4 (PspPrepareSystemDllInitBlock.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140467C98 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1404686D4 (MiInitializeProcessBottomUpEntropy.c)
 *     MiSelectImageBase @ 0x14046B754 (MiSelectImageBase.c)
 *     RtlRandomEx @ 0x1404A2FFC (RtlRandomEx.c)
 *     PspWow64InitThreadGuestx86 @ 0x140530D98 (PspWow64InitThreadGuestx86.c)
 *     MiProcessLoadConfigForDriver @ 0x140575BA0 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x1405A6AF4 (CmpCmdInit.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     ExpTimerInitialization @ 0x1407C3D10 (ExpTimerInitialization.c)
 *     MiInitializeRelocations @ 0x1407C7D1C (MiInitializeRelocations.c)
 *     InitializePool @ 0x1407C9DC4 (InitializePool.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
 *     ExpInitSystemPhase0 @ 0x1407DF914 (ExpInitSystemPhase0.c)
 *     ExpRngInitializeSystem @ 0x1407DFBDC (ExpRngInitializeSystem.c)
 *     MiInitializeBootDefaults @ 0x1407E29A0 (MiInitializeBootDefaults.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExGenRandom(int a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // si
  char *v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // ebx
  unsigned int v7; // ebx
  int v8; // ecx
  int *v12; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&ExpLFGRngLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpLFGRngLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(&ExpLFGRngLock);
  }
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExpLFGRngLock, retaddr);
  else
    _InterlockedAnd64(&ExpLFGRngLock, 0LL);
  __writecr8(CurrentIrql);
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
