/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C006C400
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006AD40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     IsGdiMultiUserFontCleanupSupported_0 @ 0x1C0001318 (IsGdiMultiUserFontCleanupSupported_0.c)
 *     GdiMultiUserFontCleanup_0 @ 0x1C0001320 (GdiMultiUserFontCleanup_0.c)
 *     IsGetgpfsTableSupported_0 @ 0x1C0001328 (IsGetgpfsTableSupported_0.c)
 *     GetgpfsTable_0 @ 0x1C0001330 (GetgpfsTable_0.c)
 *     IsGetMAPPER_SignatureTableSupported_0 @ 0x1C0001338 (IsGetMAPPER_SignatureTableSupported_0.c)
 *     GetMAPPER_SignatureTable_0 @ 0x1C0001340 (GetMAPPER_SignatureTable_0.c)
 *     IsGetgpwszFamilyDefaultFontsSupported_0 @ 0x1C0001348 (IsGetgpwszFamilyDefaultFontsSupported_0.c)
 *     GetgpwszFamilyDefaultFonts_0 @ 0x1C0001350 (GetgpwszFamilyDefaultFonts_0.c)
 *     IsMultiUserGreDeleteScriptsSupported_0 @ 0x1C0001358 (IsMultiUserGreDeleteScriptsSupported_0.c)
 *     MultiUserGreDeleteScripts_0 @ 0x1C0001360 (MultiUserGreDeleteScripts_0.c)
 *     IsGetgpDefITableSupported_0 @ 0x1C0001368 (IsGetgpDefITableSupported_0.c)
 *     GetgpDefITable_0 @ 0x1C0001370 (GetgpDefITable_0.c)
 *     IsGetgpRedirDevSupported_0 @ 0x1C0001378 (IsGetgpRedirDevSupported_0.c)
 *     GetgpRedirDev_0 @ 0x1C0001380 (GetgpRedirDev_0.c)
 *     IsGetgpBmpDevSupported_0 @ 0x1C0001388 (IsGetgpBmpDevSupported_0.c)
 *     GetgpBmpDev_0 @ 0x1C0001390 (GetgpBmpDev_0.c)
 *     IsMultiUserCleanupPathAllocSupported_0 @ 0x1C0001398 (IsMultiUserCleanupPathAllocSupported_0.c)
 *     MultiUserCleanupPathAlloc_0 @ 0x1C00013A0 (MultiUserCleanupPathAlloc_0.c)
 *     IsvNetworkedFontFileCleanupSupported_0 @ 0x1C00013A8 (IsvNetworkedFontFileCleanupSupported_0.c)
 *     vNetworkedFontFileCleanup_0 @ 0x1C00013B0 (vNetworkedFontFileCleanup_0.c)
 *     IsvTrustedFontFileTableCleanupSupported_0 @ 0x1C00013B8 (IsvTrustedFontFileTableCleanupSupported_0.c)
 *     vTrustedFontFileTableCleanup_0 @ 0x1C00013C0 (vTrustedFontFileTableCleanup_0.c)
 *     FreeThreadBufferWithTag @ 0x1C000B380 (FreeThreadBufferWithTag.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePagedLookasideList @ 0x1C006C840 (Win32FreePagedLookasideList.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006C860 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006CC64 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C006CE2C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?MultiUserGreHmgOwnAll@@YAXK@Z @ 0x1C006CF28 (-MultiUserGreHmgOwnAll@@YAXK@Z.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C006FF60 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     DrvNotifySessionStateChange @ 0x1C0081160 (DrvNotifySessionStateChange.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  unsigned int v1; // ebx
  _QWORD *v2; // rbx
  _QWORD *MAPPER_SignatureTable_0; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 i; // rbx
  __int64 *v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // edx
  _QWORD *v11; // rbx
  void *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  struct tagStackTraceEntry **v15; // rcx
  unsigned int Lock; // edx
  unsigned int j; // ebx
  struct tagAltStackTraceEntry **v18; // rcx
  unsigned int v19; // edx
  unsigned int k; // ebx
  void * near **v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v24; // [rsp+30h] [rbp+8h]

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  gbGreSessionCleanup = 1;
  v1 = CurrentProcessId & 0xFFFFFFFC;
  MultiUserGreHmgOwnAll(CurrentProcessId & 0xFFFFFFFC);
  if ( (int)IsGdiMultiUserFontCleanupSupported_0() >= 0 )
    GdiMultiUserFontCleanup_0();
  if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
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
    v4 = GetgpwszFamilyDefaultFonts_0();
    v5 = v24;
    v6 = v4;
    for ( i = 0LL; i < v5; ++i )
    {
      if ( *(_QWORD *)(v6 + 8 * i) )
      {
        Win32FreePool();
        *(_QWORD *)(v6 + 8 * i) = 0LL;
        v5 = v24;
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
  v8 = (__int64 *)&unk_1C0106418;
  v9 = 8LL;
  do
  {
    if ( *v8 )
      FreeThreadBufferWithTag(*v8);
    v8 += 4;
    --v9;
  }
  while ( v9 );
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
    CTokenManager::`scalar deleting destructor'(g_pTokenManager, v10);
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
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C0102068 )
  {
    Win32FreePool();
    qword_1C0102068 = 0LL;
  }
  if ( qword_1C0102078 )
  {
    Win32FreePool();
    qword_1C0102078 = 0LL;
  }
  if ( Object )
  {
    ObfDereferenceObject(Object);
    Object = 0LL;
  }
  DrvNotifySessionStateChange(1LL);
  if ( gpLockShortDelay )
  {
    Win32FreePool();
    gpLockShortDelay = 0LL;
  }
  if ( gpTmpGlobal )
  {
    Win32FreePool();
    gpTmpGlobal = 0LL;
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
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    for ( j = 0; j < Lock; ++j )
    {
      if ( v15[j] )
      {
        Win32FreePool();
        v15 = gpentHmgrStacks;
        Lock = WPP_MAIN_CB.DeviceQueue.Lock;
      }
    }
    Win32FreePool();
  }
  v18 = gpentHmgrAltStacks;
  if ( gpentHmgrAltStacks )
  {
    v19 = WPP_MAIN_CB.DeviceQueue.Lock;
    for ( k = 0; k < v19; ++k )
    {
      if ( v18[k] )
      {
        Win32FreePool();
        v19 = WPP_MAIN_CB.DeviceQueue.Lock;
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
  if ( gpentPushLock )
  {
    Win32FreePool();
    gpentPushLock = 0LL;
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
