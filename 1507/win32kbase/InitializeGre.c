/*
 * XREFs of InitializeGre @ 0x1C0137A5C
 * Callers:
 *     DriverEntry @ 0x1C01372C0 (DriverEntry.c)
 * Callees:
 *     IsbDoubleDpiSupported_0 @ 0x1C0001A28 (IsbDoubleDpiSupported_0.c)
 *     bDoubleDpi_0 @ 0x1C0001A30 (bDoubleDpi_0.c)
 *     IsVerifierInitializationSupported_0 @ 0x1C0001A38 (IsVerifierInitializationSupported_0.c)
 *     VerifierInitialization_0 @ 0x1C0001A40 (VerifierInitialization_0.c)
 *     IsInitializeGdiCrossSessionGlobalsSupported_0 @ 0x1C0001A48 (IsInitializeGdiCrossSessionGlobalsSupported_0.c)
 *     InitializeGdiCrossSessionGlobals_0 @ 0x1C0001A50 (InitializeGdiCrossSessionGlobals_0.c)
 *     IsNineGridRenderingSupported_0 @ 0x1C0001A58 (IsNineGridRenderingSupported_0.c)
 *     GetNineGridRenderingData_0 @ 0x1C0001A60 (GetNineGridRenderingData_0.c)
 *     IsEnableHalftoneSupported_0 @ 0x1C0001A68 (IsEnableHalftoneSupported_0.c)
 *     EnableHalftone_0 @ 0x1C0001A70 (EnableHalftone_0.c)
 *     IsbInitRedirDevSupported_0 @ 0x1C0001A78 (IsbInitRedirDevSupported_0.c)
 *     bInitRedirDev_0 @ 0x1C0001A80 (bInitRedirDev_0.c)
 *     IsvInitFontsDirectoryNameInformationSupported_0 @ 0x1C0001A88 (IsvInitFontsDirectoryNameInformationSupported_0.c)
 *     vInitFontsDirectoryNameInformation_0 @ 0x1C0001A90 (vInitFontsDirectoryNameInformation_0.c)
 *     GreCreateRectRgn @ 0x1C0011BD0 (GreCreateRectRgn.c)
 *     GreCreateSemaphore @ 0x1C0024380 (GreCreateSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C002439C (GreCreateSemaphoreInternal.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042C0C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C006FF60 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C007BB4C (-Initialize@SfmState@@QEAAHXZ.c)
 *     HmgCreate @ 0x1C007CEA4 (HmgCreate.c)
 *     bLockEtwEnabled @ 0x1C007D58C (bLockEtwEnabled.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C007D628 (GreCreateSemaphoreNonTracked.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C007D668 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C00811B0 (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C0081408 (--0CTokenManager@@AEAA@XZ.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     bInitBMOBJ @ 0x1C0137ECC (bInitBMOBJ.c)
 *     bInitICM @ 0x1C0137F6C (bInitICM.c)
 *     bInitPALOBJ @ 0x1C01381D0 (bInitPALOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C0138530 (bInitBRUSHOBJ.c)
 *     vInitXLATE @ 0x1C0138A8C (vInitXLATE.c)
 *     bLoadProcessHandleQuota @ 0x1C0139844 (bLoadProcessHandleQuota.c)
 */

char InitializeGre()
{
  HRGN RectRgn; // rax
  CTokenManager *v2; // rax
  PVOID *v3; // rbx
  SfmState *v4; // rcx
  int v5; // edi
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-79h] BYREF
  __int64 v7; // [rsp+68h] [rbp-41h]
  int v8; // [rsp+70h] [rbp-39h]
  __int64 v9; // [rsp+78h] [rbp-31h]
  _QWORD v10[12]; // [rsp+A0h] [rbp-9h] BYREF
  PULONG BitMapBuffer; // [rsp+110h] [rbp+67h]
  void *v12; // [rsp+118h] [rbp+6Fh]
  struct _RTL_BITMAP *BitMapHeader; // [rsp+120h] [rbp+77h]
  _QWORD *v14; // [rsp+128h] [rbp+7Fh]

  G_fConsole = gbRemoteSession == 0;
  if ( (int)IsbDoubleDpiSupported_0() < 0 )
    HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  else
    HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = bDoubleDpi_0();
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  if ( _InterlockedDecrement(&CountInit) )
    return 1;
  gIsTerminalServer = (MEMORY[0xFFFFF780000002D0] & 0x10) != 0;
  qword_1C0101F38 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    if ( (int)IsVerifierInitializationSupported_0() >= 0 )
      VerifierInitialization_0();
    qword_1C0104210 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock )
    {
      if ( (int)IsInitializeGdiCrossSessionGlobalsSupported_0() < 0
        || (unsigned int)InitializeGdiCrossSessionGlobals_0() )
      {
        gbLockEtw = bLockEtwEnabled();
        gbDisableTrappedAcRendering = 0;
        bLoadProcessHandleQuota();
        if ( (unsigned int)HmgCreate() )
        {
          REGION::ulUniqueREGION = 1;
          if ( (int)IsNineGridRenderingSupported_0() >= 0 )
          {
            GetNineGridRenderingData_0();
            memset(v12, 0, 0x200uLL);
            *(_QWORD *)BitMapBuffer = 0LL;
            RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
            *v14 = 0LL;
          }
          ghsemDriverMgmt = (HSEMAPHORE)GreCreateSemaphoreInternal();
          if ( ghsemDriverMgmt )
          {
            PATHALLOC::hsemFreelist = (HSEMAPHORE)GreCreateSemaphore();
            if ( PATHALLOC::hsemFreelist )
            {
              PATHALLOC::freelist = 0LL;
              PATHALLOC::cFree = 0;
              PATHALLOC::cAllocated = 0;
              ghsemRFONTList = (HSEMAPHORE)GreCreateSemaphoreInternal();
              if ( ghsemRFONTList )
              {
                ghsemCLISERV = GreCreateSemaphoreInternal();
                if ( ghsemCLISERV )
                {
                  ghsemAtmfdInit = GreCreateSemaphoreInternal();
                  if ( ghsemAtmfdInit )
                  {
                    ghsemWndobj = (HSEMAPHORE)GreCreateSemaphoreInternal();
                    if ( ghsemWndobj )
                    {
                      ghsemFntCache = GreCreateSemaphoreInternal();
                      if ( ghsemFntCache )
                      {
                        ghsemDwmState = (PERESOURCE)GreCreateSemaphoreInternal();
                        if ( ghsemDwmState )
                        {
                          ghsemDynamicModeChange = (PERESOURCE)GreCreateSemaphoreInternal();
                          if ( ghsemDynamicModeChange )
                          {
                            ghsemDCVisRgn = (PERESOURCE)GreCreateSemaphoreInternal();
                            if ( ghsemDCVisRgn )
                            {
                              ghsemVisRgnUniqueness = (PERESOURCE)GreCreateSemaphoreInternal();
                              if ( ghsemVisRgnUniqueness )
                              {
                                ghsemVisRgnPublish = (HSEMAPHORE)GreCreateSemaphoreInternal();
                                if ( ghsemVisRgnPublish )
                                {
                                  ghsemSprite = (PERESOURCE)GreCreateSemaphoreInternal();
                                  if ( ghsemSprite )
                                  {
                                    ghsemMapRot = (HSEMAPHORE)GreCreateSemaphoreInternal();
                                    if ( ghsemMapRot )
                                    {
                                      ghsemGreLock = (PERESOURCE)GreCreateSemaphoreInternal();
                                      if ( ghsemGreLock )
                                      {
                                        ghsemHT = (HSEMAPHORE)GreCreateSemaphoreInternal();
                                        if ( ghsemHT )
                                        {
                                          RectRgn = (HRGN)GreCreateRectRgn(0, 0, 0, 0);
                                          hrgnDefault = RectRgn;
                                          if ( RectRgn )
                                          {
                                            RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, RectRgn, 1, 0);
                                            if ( v10[0] )
                                            {
                                              prgnDefault = (struct REGION *)v10[0];
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
                                              if ( (unsigned int)bInitPALOBJ() )
                                              {
                                                vInitXLATE();
                                                if ( (unsigned int)bInitBMOBJ() )
                                                {
                                                  if ( (unsigned int)bInitBRUSHOBJ()
                                                    && (unsigned int)bInitICM()
                                                    && ((int)IsEnableHalftoneSupported_0() < 0
                                                     || (unsigned int)EnableHalftone_0())
                                                    && ((int)IsbInitRedirDevSupported_0() < 0
                                                     || (unsigned int)bInitRedirDev_0()) )
                                                  {
                                                    if ( (int)IsvInitFontsDirectoryNameInformationSupported_0() >= 0 )
                                                      vInitFontsDirectoryNameInformation_0();
                                                    v2 = (CTokenManager *)Win32AllocPool();
                                                    v3 = v2 ? (PVOID *)CTokenManager::CTokenManager(v2) : 0LL;
                                                    if ( v3 )
                                                    {
                                                      v5 = CTokenManager::Initialize(v3);
                                                      if ( v5 >= 0 )
                                                      {
                                                        g_pTokenManager = (CTokenManager *)v3;
                                                        v3 = 0LL;
                                                      }
                                                      if ( v3 )
                                                        CTokenManager::`scalar deleting destructor'((CTokenManager *)v3);
                                                      if ( v5 >= 0 && (unsigned int)SfmState::Initialize(v4) )
                                                      {
                                                        QueryTable.Flags = 0;
                                                        QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
                                                        memset(&QueryTable.Name, 0, 20);
                                                        QueryTable.DefaultData = 0LL;
                                                        QueryTable.DefaultLength = 0;
                                                        v7 = 0LL;
                                                        v8 = 0;
                                                        v9 = 0LL;
                                                        *((_DWORD *)gpGdiSharedMemory + 393253) = 0;
                                                        RtlQueryRegistryValues(
                                                          0x80000003,
                                                          L"LanguagePack",
                                                          &QueryTable,
                                                          0LL,
                                                          0LL);
                                                        *((_DWORD *)gpGdiSharedMemory + 393254) = 1;
                                                        return 1;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            else
                                            {
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
