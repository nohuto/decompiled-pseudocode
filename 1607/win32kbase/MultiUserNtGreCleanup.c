/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C006D778
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006EFD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     IsGdiMultiUserFontCleanupSupported_0 @ 0x1C0001318 (IsGdiMultiUserFontCleanupSupported_0.c)
 *     GdiMultiUserFontCleanup_0 @ 0x1C0001320 (GdiMultiUserFontCleanup_0.c)
 *     IsGetgpfsTableSupported_0 @ 0x1C0001328 (IsGetgpfsTableSupported_0.c)
 *     GetgpfsTable_0 @ 0x1C0001330 (GetgpfsTable_0.c)
 *     IsGetgpfmffTableSupported_0 @ 0x1C0001338 (IsGetgpfmffTableSupported_0.c)
 *     GetgpfmffTable_0 @ 0x1C0001340 (GetgpfmffTable_0.c)
 *     IsGetMAPPER_SignatureTableSupported_0 @ 0x1C0001348 (IsGetMAPPER_SignatureTableSupported_0.c)
 *     GetMAPPER_SignatureTable_0 @ 0x1C0001350 (GetMAPPER_SignatureTable_0.c)
 *     IsGetgpwszFamilyDefaultFontsSupported_0 @ 0x1C0001358 (IsGetgpwszFamilyDefaultFontsSupported_0.c)
 *     GetgpwszFamilyDefaultFonts_0 @ 0x1C0001360 (GetgpwszFamilyDefaultFonts_0.c)
 *     IsMultiUserGreDeleteScriptsSupported_0 @ 0x1C0001368 (IsMultiUserGreDeleteScriptsSupported_0.c)
 *     MultiUserGreDeleteScripts_0 @ 0x1C0001370 (MultiUserGreDeleteScripts_0.c)
 *     IsGetgpDefITableSupported_0 @ 0x1C0001378 (IsGetgpDefITableSupported_0.c)
 *     GetgpDefITable_0 @ 0x1C0001380 (GetgpDefITable_0.c)
 *     IsGetgpRedirDevSupported_0 @ 0x1C0001388 (IsGetgpRedirDevSupported_0.c)
 *     GetgpRedirDev_0 @ 0x1C0001390 (GetgpRedirDev_0.c)
 *     IsGetgpBmpDevSupported_0 @ 0x1C0001398 (IsGetgpBmpDevSupported_0.c)
 *     GetgpBmpDev_0 @ 0x1C00013A0 (GetgpBmpDev_0.c)
 *     IsMultiUserCleanupPathAllocSupported_0 @ 0x1C00013A8 (IsMultiUserCleanupPathAllocSupported_0.c)
 *     MultiUserCleanupPathAlloc_0 @ 0x1C00013B0 (MultiUserCleanupPathAlloc_0.c)
 *     IsvNetworkedFontFileCleanupSupported_0 @ 0x1C00013B8 (IsvNetworkedFontFileCleanupSupported_0.c)
 *     vNetworkedFontFileCleanup_0 @ 0x1C00013C0 (vNetworkedFontFileCleanup_0.c)
 *     IsvTrustedFontFileTableCleanupSupported_0 @ 0x1C00013C8 (IsvTrustedFontFileTableCleanupSupported_0.c)
 *     vTrustedFontFileTableCleanup_0 @ 0x1C00013D0 (vTrustedFontFileTableCleanup_0.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C001AC58 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002AD40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006A050 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     Win32FreePagedLookasideList @ 0x1C006DB80 (Win32FreePagedLookasideList.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C006DD38 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     DrvNotifySessionStateChange @ 0x1C006E2A0 (DrvNotifySessionStateChange.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006E2F0 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C006E550 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C006E598 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     FreeThreadBufferWithTag @ 0x1C006EA90 (FreeThreadBufferWithTag.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  unsigned int NextEntryIndex; // edx
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *MAPPER_SignatureTable_0; // rbx
  __int64 v10; // rax
  struct _ENTRY *v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  void *v17; // rcx
  _QWORD *v18; // rbx
  _QWORD *v19; // rbx
  struct tagREMOTE_CONTEXT *v20; // rcx
  struct tagStackTraceEntry **v21; // rcx
  struct GdiHandleManager *v22; // rcx
  void * near **v23; // rbx
  __int64 v24; // rdi
  volatile unsigned int Lock; // edx
  volatile unsigned int i; // ebx
  volatile unsigned int v28; // edx
  volatile unsigned int j; // ebx
  struct _ENTRY *v30; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 1;
  NextEntryIndex = 0;
  v3 = CurrentProcessId & 0xFFFFFFFC;
  v4 = 0;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v1, NextEntryIndex, &v30);
      if ( !NextEntryIndex )
        break;
      v1 = v30;
      if ( (unsigned __int8)(*((_BYTE *)v30 + 14) - 1) <= 0x1Du )
      {
        *((_DWORD *)v30 + 2) = v3 ^ (*((_DWORD *)v30 + 2) ^ v3) & 1;
        ++v4;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v4;
  }
  if ( (int)IsGdiMultiUserFontCleanupSupported_0() >= 0 )
    GdiMultiUserFontCleanup_0();
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    NtGdiCloseProcess(v3, 2u);
  if ( (int)IsGetgpfsTableSupported_0() >= 0 )
  {
    v7 = (_QWORD *)GetgpfsTable_0();
    if ( *v7 )
    {
      Win32FreePool();
      *v7 = 0LL;
    }
  }
  if ( (int)IsGetgpfmffTableSupported_0() >= 0 )
  {
    v8 = (_QWORD *)GetgpfmffTable_0();
    if ( *v8 )
    {
      Win32FreePool();
      *v8 = 0LL;
    }
  }
  if ( (int)IsGetMAPPER_SignatureTableSupported_0() >= 0 )
  {
    MAPPER_SignatureTable_0 = (_QWORD *)GetMAPPER_SignatureTable_0();
    if ( *MAPPER_SignatureTable_0 )
    {
      Win32FreePool();
      *MAPPER_SignatureTable_0 = 0LL;
    }
  }
  if ( (int)IsGetgpwszFamilyDefaultFontsSupported_0() >= 0 )
  {
    v10 = GetgpwszFamilyDefaultFonts_0();
    v11 = v30;
    v12 = v10;
    v13 = 0LL;
    if ( v30 )
    {
      do
      {
        if ( *(_QWORD *)(v12 + 8 * v13) )
        {
          Win32FreePool();
          *(_QWORD *)(v12 + 8 * v13) = 0LL;
          v11 = v30;
        }
        ++v13;
      }
      while ( v13 < (unsigned __int64)v11 );
    }
  }
  if ( LastNlsTableBuffer )
  {
    Win32FreePool();
    LastNlsTableBuffer = 0LL;
  }
  if ( (int)IsMultiUserGreDeleteScriptsSupported_0() >= 0 )
    MultiUserGreDeleteScripts_0();
  v14 = &unk_1C011E3D8;
  v15 = 8LL;
  do
  {
    if ( *v14 )
      FreeThreadBufferWithTag();
    v14 += 4;
    --v15;
  }
  while ( v15 );
  if ( gpCachedEngbrush )
    Win32FreePool();
  if ( gpCachedDbrush )
    Win32FreePool();
  if ( gpRGBXlate )
  {
    Win32FreePool();
    gpRGBXlate = 0LL;
  }
  if ( (int)IsGetgpDefITableSupported_0() >= 0 )
  {
    v16 = (_QWORD *)GetgpDefITable_0();
    if ( *v16 )
    {
      Win32FreePool();
      *v16 = 0LL;
    }
  }
  v17 = (void *)*((_QWORD *)gpSfmState + 3);
  if ( v17 )
    ZwClose(v17);
  if ( g_pTokenManager )
  {
    CTokenManager::`scalar deleting destructor'(g_pTokenManager);
    g_pTokenManager = 0LL;
  }
  if ( (int)IsGetgpRedirDevSupported_0() >= 0 )
  {
    v18 = (_QWORD *)GetgpRedirDev_0();
    if ( *v18 )
    {
      Win32FreePool();
      *v18 = 0LL;
    }
  }
  if ( (int)IsGetgpBmpDevSupported_0() >= 0 )
  {
    v19 = (_QWORD *)GetgpBmpDev_0();
    if ( *v19 )
    {
      Win32FreePool();
      *v19 = 0LL;
    }
  }
  MultiUserGreCleanupDrivers();
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C011BC58 )
  {
    Win32FreePool();
    qword_1C011BC58 = 0LL;
  }
  v20 = qword_1C011BC68;
  if ( qword_1C011BC68 )
  {
    Win32FreePool();
    qword_1C011BC68 = 0LL;
  }
  GreCleanupRemoteAdapterContext(v20);
  DrvNotifySessionStateChange(1LL);
  if ( gpLockShortDelay )
  {
    Win32FreePool();
    gpLockShortDelay = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    Win32FreePool();
    WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
  }
  if ( gpTmpGlobalFree )
  {
    Win32FreePool();
    gpTmpGlobalFree = 0LL;
  }
  if ( gpAdapterLuids )
  {
    Win32FreePool();
    gpAdapterLuids = 0LL;
  }
  if ( gpDevicesPerLuid )
  {
    Win32FreePool();
    gpDevicesPerLuid = 0LL;
  }
  if ( (int)IsMultiUserCleanupPathAllocSupported_0() >= 0 )
    MultiUserCleanupPathAlloc_0();
  MultiUserGreCleanupEngResources();
  if ( ghfmMemory )
    Win32FreePool();
  v21 = gpentHmgrStacks;
  ghfmMemory = 0LL;
  if ( gpentHmgrStacks )
  {
    Lock = WPP_MAIN_CB.DeviceLock.Header.Lock;
    for ( i = 0; i < Lock; ++i )
    {
      if ( v21[i] )
      {
        Win32FreePool();
        v21 = gpentHmgrStacks;
        Lock = WPP_MAIN_CB.DeviceLock.Header.Lock;
      }
    }
    Win32FreePool();
  }
  v22 = gpentHmgrAltStacks;
  if ( gpentHmgrAltStacks )
  {
    v28 = WPP_MAIN_CB.DeviceLock.Header.Lock;
    for ( j = 0; j < v28; ++j )
    {
      if ( *((_QWORD *)v22 + j) )
      {
        Win32FreePool();
        v28 = WPP_MAIN_CB.DeviceLock.Header.Lock;
        v22 = gpentHmgrAltStacks;
      }
    }
    Win32FreePool();
  }
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    GdiHandleManager::Destroy(v22);
    WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
  }
  if ( gpGdiSharedMemory )
  {
    MmUnmapViewInSessionSpace(gpGdiSharedMemory);
    gpGdiSharedMemory = 0LL;
  }
  if ( gpHmgrSharedHandleSection )
  {
    ObfDereferenceObject(gpHmgrSharedHandleSection);
    gpHmgrSharedHandleSection = 0LL;
  }
  v23 = &pHmgLookAsideList;
  v24 = 31LL;
  do
  {
    if ( *v23 )
    {
      Win32FreePagedLookasideList();
      *v23 = 0LL;
    }
    ++v23;
    --v24;
  }
  while ( v24 );
  if ( (int)IsvNetworkedFontFileCleanupSupported_0() >= 0 )
    vNetworkedFontFileCleanup_0();
  if ( (int)IsvTrustedFontFileTableCleanupSupported_0() >= 0 )
    vTrustedFontFileTableCleanup_0();
  return 1LL;
}
