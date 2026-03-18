/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C0063BC4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0062380 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     IsGdiMultiUserFontCleanupSupported_0 @ 0x1C00012A8 (IsGdiMultiUserFontCleanupSupported_0.c)
 *     GdiMultiUserFontCleanup_0 @ 0x1C00012B0 (GdiMultiUserFontCleanup_0.c)
 *     IsGetgpfsTableSupported_0 @ 0x1C00012B8 (IsGetgpfsTableSupported_0.c)
 *     GetgpfsTable_0 @ 0x1C00012C0 (GetgpfsTable_0.c)
 *     IsGetgpfmffTableSupported_0 @ 0x1C00012C8 (IsGetgpfmffTableSupported_0.c)
 *     GetgpfmffTable_0 @ 0x1C00012D0 (GetgpfmffTable_0.c)
 *     IsGetMAPPER_SignatureTableSupported_0 @ 0x1C00012D8 (IsGetMAPPER_SignatureTableSupported_0.c)
 *     GetMAPPER_SignatureTable_0 @ 0x1C00012E0 (GetMAPPER_SignatureTable_0.c)
 *     IsGetgpwszFamilyDefaultFontsSupported_0 @ 0x1C00012E8 (IsGetgpwszFamilyDefaultFontsSupported_0.c)
 *     GetgpwszFamilyDefaultFonts_0 @ 0x1C00012F0 (GetgpwszFamilyDefaultFonts_0.c)
 *     IsMultiUserGreDeleteScriptsSupported_0 @ 0x1C00012F8 (IsMultiUserGreDeleteScriptsSupported_0.c)
 *     MultiUserGreDeleteScripts_0 @ 0x1C0001300 (MultiUserGreDeleteScripts_0.c)
 *     IsGetgpDefITableSupported_0 @ 0x1C0001308 (IsGetgpDefITableSupported_0.c)
 *     GetgpDefITable_0 @ 0x1C0001310 (GetgpDefITable_0.c)
 *     IsGetgpRedirDevSupported_0 @ 0x1C0001318 (IsGetgpRedirDevSupported_0.c)
 *     GetgpRedirDev_0 @ 0x1C0001320 (GetgpRedirDev_0.c)
 *     IsGetgpBmpDevSupported_0 @ 0x1C0001328 (IsGetgpBmpDevSupported_0.c)
 *     GetgpBmpDev_0 @ 0x1C0001330 (GetgpBmpDev_0.c)
 *     IsMultiUserCleanupPathAllocSupported_0 @ 0x1C0001338 (IsMultiUserCleanupPathAllocSupported_0.c)
 *     MultiUserCleanupPathAlloc_0 @ 0x1C0001340 (MultiUserCleanupPathAlloc_0.c)
 *     IsvNetworkedFontFileCleanupSupported_0 @ 0x1C0001348 (IsvNetworkedFontFileCleanupSupported_0.c)
 *     vNetworkedFontFileCleanup_0 @ 0x1C0001350 (vNetworkedFontFileCleanup_0.c)
 *     IsvTrustedFontFileTableCleanupSupported_0 @ 0x1C0001358 (IsvTrustedFontFileTableCleanupSupported_0.c)
 *     vTrustedFontFileTableCleanup_0 @ 0x1C0001360 (vTrustedFontFileTableCleanup_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C003D74C (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0059CD4 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     Win32FreePagedLookasideList @ 0x1C0063FC0 (Win32FreePagedLookasideList.c)
 *     DrvNotifySessionStateChange @ 0x1C0064670 (DrvNotifySessionStateChange.c)
 *     ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x1C00646C0 (-MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00649C0 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     FreeThreadBufferWithTag @ 0x1C0064B70 (FreeThreadBufferWithTag.c)
 *     ?MultiUserGreHmgOwnAll@@YAXK@Z @ 0x1C0064BD0 (-MultiUserGreHmgOwnAll@@YAXK@Z.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  unsigned int v1; // ebx
  _QWORD *v2; // rbx
  _QWORD *v3; // rbx
  _QWORD *MAPPER_SignatureTable_0; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 i; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  void *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  struct tagStackTraceEntry **v15; // rcx
  unsigned int Blink; // edx
  unsigned int j; // ebx
  struct tagAltStackTraceEntry **v18; // rcx
  unsigned int v19; // edx
  unsigned int k; // ebx
  void * near **v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v24; // [rsp+30h] [rbp+8h]

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  *(_DWORD *)&WPP_MAIN_CB.SectorSize = 1;
  v1 = CurrentProcessId & 0xFFFFFFFC;
  MultiUserGreHmgOwnAll(CurrentProcessId & 0xFFFFFFFC);
  if ( (int)IsGdiMultiUserFontCleanupSupported_0() >= 0 )
    GdiMultiUserFontCleanup_0();
  if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
    NtGdiCloseProcess(v1, 2u);
  if ( (int)IsGetgpfsTableSupported_0() >= 0 )
  {
    v2 = (_QWORD *)GetgpfsTable_0();
    if ( *v2 )
    {
      Win32FreePool();
      *v2 = 0LL;
    }
  }
  if ( (int)IsGetgpfmffTableSupported_0() >= 0 )
  {
    v3 = (_QWORD *)GetgpfmffTable_0();
    if ( *v3 )
    {
      Win32FreePool();
      *v3 = 0LL;
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
    v5 = GetgpwszFamilyDefaultFonts_0();
    v6 = v24;
    v7 = v5;
    for ( i = 0LL; i < v6; ++i )
    {
      if ( *(_QWORD *)(v7 + 8 * i) )
      {
        Win32FreePool();
        *(_QWORD *)(v7 + 8 * i) = 0LL;
        v6 = v24;
      }
    }
  }
  if ( LastNlsTableBuffer )
  {
    Win32FreePool();
    LastNlsTableBuffer = 0LL;
  }
  if ( (int)IsMultiUserGreDeleteScriptsSupported_0() >= 0 )
    MultiUserGreDeleteScripts_0();
  v9 = &unk_1C0106FB8;
  v10 = 8LL;
  do
  {
    if ( *v9 )
      FreeThreadBufferWithTag(*v9);
    v9 += 4;
    --v10;
  }
  while ( v10 );
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
    v11 = (_QWORD *)GetgpDefITable_0();
    if ( *v11 )
    {
      Win32FreePool();
      *v11 = 0LL;
    }
  }
  v12 = (void *)*((_QWORD *)gpSfmState + 3);
  if ( v12 )
    ZwClose(v12);
  if ( g_pTokenManager )
  {
    CTokenManager::`scalar deleting destructor'(g_pTokenManager);
    g_pTokenManager = 0LL;
  }
  if ( (int)IsGetgpRedirDevSupported_0() >= 0 )
  {
    v13 = (_QWORD *)GetgpRedirDev_0();
    if ( *v13 )
    {
      Win32FreePool();
      *v13 = 0LL;
    }
  }
  if ( (int)IsGetgpBmpDevSupported_0() >= 0 )
  {
    v14 = (_QWORD *)GetgpBmpDev_0();
    if ( *v14 )
    {
      Win32FreePool();
      *v14 = 0LL;
    }
  }
  MultiUserGreCleanupDrivers();
  MultiUserDrvCleanupGraphicsDeviceList();
  DrvNotifySessionStateChange(1LL);
  if ( gpLockShortDelay )
  {
    Win32FreePool();
    gpLockShortDelay = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
  {
    Win32FreePool();
    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = 0LL;
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
  v15 = gpentHmgrStacks;
  ghfmMemory = 0LL;
  if ( gpentHmgrStacks )
  {
    Blink = (unsigned int)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    for ( j = 0; j < Blink; ++j )
    {
      if ( v15[j] )
      {
        Win32FreePool();
        v15 = gpentHmgrStacks;
        Blink = (unsigned int)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
      }
    }
    Win32FreePool();
  }
  v18 = gpentHmgrAltStacks;
  if ( gpentHmgrAltStacks )
  {
    v19 = (unsigned int)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    for ( k = 0; k < v19; ++k )
    {
      if ( v18[k] )
      {
        Win32FreePool();
        v19 = (unsigned int)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        v18 = gpentHmgrAltStacks;
      }
    }
    Win32FreePool();
  }
  if ( gpGdiSharedMemory )
  {
    MmUnmapViewInSessionSpace(gpGdiSharedMemory);
    gpGdiSharedMemory = 0LL;
    gcMaxHmgr = 0;
  }
  if ( gpHmgrSharedHandleSection )
  {
    ObfDereferenceObject(gpHmgrSharedHandleSection);
    gpHmgrSharedHandleSection = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DpcData )
  {
    Win32FreePool();
    WPP_MAIN_CB.Dpc.DpcData = 0LL;
  }
  v21 = &pHmgLookAsideList;
  v22 = 31LL;
  do
  {
    if ( *v21 )
    {
      Win32FreePagedLookasideList();
      *v21 = 0LL;
    }
    ++v21;
    --v22;
  }
  while ( v22 );
  if ( (int)IsvNetworkedFontFileCleanupSupported_0() >= 0 )
    vNetworkedFontFileCleanup_0();
  if ( (int)IsvTrustedFontFileTableCleanupSupported_0() >= 0 )
    vTrustedFontFileTableCleanup_0();
  return 1LL;
}
