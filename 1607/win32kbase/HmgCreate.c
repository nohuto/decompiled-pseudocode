/*
 * XREFs of HmgCreate @ 0x1C00533A4
 * Callers:
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     GetMaxGdiHandleCount_0 @ 0x1C0001308 (GetMaxGdiHandleCount_0.c)
 *     GetgvsStateWrap_0 @ 0x1C0001310 (GetgvsStateWrap_0.c)
 *     GreCreateSemaphoreInternal @ 0x1C000D92C (GreCreateSemaphoreInternal.c)
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002AAF0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C0053738 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C0053914 (-HmgrStacksInit@@YAXXZ.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C0053AB0 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     Win32CreateSection @ 0x1C0053C4C (Win32CreateSection.c)
 *     GreCreateFastMutex @ 0x1C0053C9C (GreCreateFastMutex.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C006DD38 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     bLoadProcessHandleQuota @ 0x1C0081E68 (bLoadProcessHandleQuota.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 HmgCreate()
{
  __int64 Lock; // rbx
  unsigned int v1; // r8d
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  int v8; // r8d
  __int64 v9; // rcx
  __int64 CurrentProcess; // rdi
  struct _ENTRY *v11; // rdx
  unsigned int v12; // ecx
  GdiHandleManager *v13; // rcx
  int v14; // ebx
  PVOID DeferredContext; // rax
  union _LARGE_INTEGER *v16; // rax
  void **v17; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  __int64 v22; // [rsp+90h] [rbp+20h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+28h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+30h] BYREF
  int v25; // [rsp+A8h] [rbp+38h] BYREF
  int v26; // [rsp+ACh] [rbp+3Ch]

  WPP_MAIN_CB.DeviceLock.Header.LockNV = GetMaxGdiHandleCount_0();
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    gProcessHandleQuota = 10000;
  Lock = 0x10000LL;
  if ( WPP_MAIN_CB.DeviceLock.Header.LockNV < 0x10000u )
    Lock = (unsigned int)WPP_MAIN_CB.DeviceLock.Header.Lock;
  GetgvsStateWrap_0();
  ghsemHmgr = (PERESOURCE)GreCreateSemaphoreInternal();
  if ( !ghsemHmgr )
    return 0LL;
  memset(&laSize, 0, 0x7CuLL);
  if ( !(unsigned int)HmgInitializeLookAsideList(1u, 0x9F8u, v1, 0x28u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(4u, 0xD8u, v2, 0x60u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(5u, (int)SURFACE::tSize + 256, v3, 0x28u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(8u, 0xD0u, v4, 0xCu) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0x10u, 0xB8u, v5, 0x60u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0xAu, 0x278u, v6, 0x40u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0xBu, 0x3A0u, v7, 0x37u) )
    return 0LL;
  ghfmMemory = (PKGUARDED_MUTEX)GreCreateFastMutex();
  if ( !ghfmMemory )
    return 0LL;
  v26 = 0;
  v25 = 1573384;
  if ( (int)Win32CreateSection((unsigned int)&gpHmgrSharedHandleSection, 6, v8, (unsigned int)&v25) < 0 )
    return 0LL;
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(gpHmgrSharedHandleSection, &gpGdiSharedMemory, &ViewSize) < 0 )
    return 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v9);
  if ( (int)MmMapViewOfSection(
              gpHmgrSharedHandleSection,
              CurrentProcess,
              &v22,
              0LL,
              4096LL,
              &v21,
              &v20,
              2,
              0x400000,
              4,
              ViewSize) < 0 )
    return 0LL;
  RegionSize = 24 * Lock;
  BaseAddress = (PVOID)v22;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v22 + 1572864);
  RegionSize = 520LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = gpGdiSharedMemory;
  WPP_MAIN_CB.SecurityDescriptor = (char *)gpGdiSharedMemory + 1572864;
  WPP_MAIN_CB.Dpc.DeferredContext = GdiHandleManager::Create(v12, v11, Lock);
  if ( !WPP_MAIN_CB.Dpc.DeferredContext )
    return 0LL;
  v14 = 0;
  while ( GdiHandleManager::AcquireEntryIndex(v13, (unsigned int *)&v22) )
  {
    if ( (unsigned int)++v14 >= 0xA )
    {
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
      goto LABEL_25;
    }
  }
  GdiHandleManager::Destroy(v13);
  DeferredContext = 0LL;
  WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
LABEL_25:
  if ( !DeferredContext )
    return 0LL;
  gahStockObjects = (void **)((char *)gpGdiSharedMemory + 1573032);
  gahStockObjects96 = (void **)((char *)gpGdiSharedMemory + 1573208);
  HmgrStacksInit();
  v16 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged();
  gpLockShortDelay = v16;
  if ( !v16 )
    return 0LL;
  v16->LowPart = -100000;
  gpLockShortDelay->HighPart = -1;
  WPP_MAIN_CB.Dpc.SystemArgument1 = PALLOCMEM2(0x1000uLL, 1836345415LL, 0);
  v17 = (void **)Win32AllocPoolNonPaged();
  gpTmpGlobalFree = v17;
  if ( !WPP_MAIN_CB.Dpc.SystemArgument1 || !v17 )
    return 0LL;
  *v17 = WPP_MAIN_CB.Dpc.SystemArgument1;
  return 1LL;
}
