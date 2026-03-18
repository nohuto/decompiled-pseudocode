/*
 * XREFs of HmgCreate @ 0x1C007CEA4
 * Callers:
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 * Callees:
 *     GetMaxGdiHandleCount_0 @ 0x1C0001308 (GetMaxGdiHandleCount_0.c)
 *     GetgvsStateWrap_0 @ 0x1C0001310 (GetgvsStateWrap_0.c)
 *     GreCreateSemaphoreInternal @ 0x1C002439C (GreCreateSemaphoreInternal.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C007D1FC (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C007D2B4 (-HmgrStacksInit@@YAXXZ.c)
 *     GreCreateFastMutex @ 0x1C007D450 (GreCreateFastMutex.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     Win32CreateSection @ 0x1C00AB874 (Win32CreateSection.c)
 */

__int64 HmgCreate()
{
  unsigned int v0; // r8d
  unsigned int v1; // r8d
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rbx
  union _LARGE_INTEGER *v11; // rax
  void **v12; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+20h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+28h] BYREF
  int v20; // [rsp+A8h] [rbp+30h] BYREF
  int v21; // [rsp+ACh] [rbp+34h]

  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = GetMaxGdiHandleCount_0();
  pgvs = (struct tagVSTATE *)GetgvsStateWrap_0();
  ghsemHmgr = (PERESOURCE)GreCreateSemaphoreInternal();
  if ( !ghsemHmgr )
    return 0LL;
  ghFreeHmgr = 0LL;
  gcMaxHmgr = 10;
  memset(&laSize, 0, 0x7CuLL);
  if ( !(unsigned int)HmgInitializeLookAsideList(1u, 0x9F8u, v0, 0x28u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(4u, 0xD8u, v1, 0x60u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(5u, (int)SURFACE::tSize + 256, v2, 0x28u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(8u, 0xD8u, v3, 0xCu) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0x10u, 0xB8u, v4, 0x60u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0xAu, 0x278u, v5, 0x40u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0xBu, 0x390u, v6, 0x37u) )
    return 0LL;
  ghfmMemory = (PKGUARDED_MUTEX)GreCreateFastMutex();
  if ( !ghfmMemory )
    return 0LL;
  v21 = 0;
  v20 = 1573032;
  if ( (int)Win32CreateSection((unsigned int)&gpHmgrSharedHandleSection, 6, v7, (unsigned int)&v20) < 0 )
    return 0LL;
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(gpHmgrSharedHandleSection, &gpGdiSharedMemory, &ViewSize) < 0 )
    return 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v16[0] = 0LL;
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  if ( (int)MmMapViewOfSection(gpHmgrSharedHandleSection, CurrentProcess, &v17, 0LL, 4096LL, v16, &v15, 2, 0x400000, 4) < 0 )
    return 0LL;
  BaseAddress = (PVOID)v17;
  RegionSize = 24LL * LODWORD(WPP_MAIN_CB.DeviceQueue.Lock);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v17 + 1572864);
  RegionSize = 168LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess, v17);
  gpentPushLock = (struct _EX_PUSH_LOCK *)PALLOCMEM2(
                                            (unsigned int)(8 * LODWORD(WPP_MAIN_CB.DeviceQueue.Lock)),
                                            1819297863LL,
                                            0);
  if ( !gpentPushLock )
    return 0LL;
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = gpGdiSharedMemory;
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (struct _LIST_ENTRY *)((char *)gpGdiSharedMemory + 1572864);
  if ( !gpGdiSharedMemory )
    return 0LL;
  HmgrStacksInit();
  v11 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged();
  gpLockShortDelay = v11;
  if ( !v11 )
    return 0LL;
  v11->LowPart = -100000;
  gpLockShortDelay->HighPart = -1;
  gpTmpGlobal = PALLOCMEM2(0x1000uLL, 1836345415LL, 0);
  v12 = (void **)Win32AllocPoolNonPaged();
  gpTmpGlobalFree = v12;
  if ( !gpTmpGlobal || !v12 )
    return 0LL;
  *v12 = gpTmpGlobal;
  return 1LL;
}
