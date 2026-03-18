/*
 * XREFs of InitializeGre @ 0x1C0154000
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     IsbDoubleDpiSupported_0 @ 0x1C0001A48 (IsbDoubleDpiSupported_0.c)
 *     bDoubleDpi_0 @ 0x1C0001A50 (bDoubleDpi_0.c)
 *     IsVerifierInitializationSupported_0 @ 0x1C0001A58 (IsVerifierInitializationSupported_0.c)
 *     VerifierInitialization_0 @ 0x1C0001A60 (VerifierInitialization_0.c)
 *     IsInitializeGdiCrossSessionGlobalsSupported_0 @ 0x1C0001A68 (IsInitializeGdiCrossSessionGlobalsSupported_0.c)
 *     InitializeGdiCrossSessionGlobals_0 @ 0x1C0001A70 (InitializeGdiCrossSessionGlobals_0.c)
 *     IsNineGridRenderingSupported_0 @ 0x1C0001A78 (IsNineGridRenderingSupported_0.c)
 *     GetNineGridRenderingData_0 @ 0x1C0001A80 (GetNineGridRenderingData_0.c)
 *     IsEnableHalftoneSupported_0 @ 0x1C0001A88 (IsEnableHalftoneSupported_0.c)
 *     EnableHalftone_0 @ 0x1C0001A90 (EnableHalftone_0.c)
 *     IsbInitRedirDevSupported_0 @ 0x1C0001A98 (IsbInitRedirDevSupported_0.c)
 *     bInitRedirDev_0 @ 0x1C0001AA0 (bInitRedirDev_0.c)
 *     IsvInitFontsDirectoryNameInformationSupported_0 @ 0x1C0001AA8 (IsvInitFontsDirectoryNameInformationSupported_0.c)
 *     vInitFontsDirectoryNameInformation_0 @ 0x1C0001AB0 (vInitFontsDirectoryNameInformation_0.c)
 *     GreCreateSemaphore @ 0x1C000D910 (GreCreateSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C000D92C (GreCreateSemaphoreInternal.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C001A9E4 (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C001ABCC (--0CTokenManager@@AEAA@XZ.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C001AC58 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0036760 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C004EA84 (-Initialize@SfmState@@QEAAHXZ.c)
 *     HmgCreate @ 0x1C00533A4 (HmgCreate.c)
 *     GreCreateRectRgn @ 0x1C0057900 (GreCreateRectRgn.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C0081B64 (GreCreateSemaphoreNonTracked.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C00822C0 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     bLockEtwEnabled @ 0x1C0082440 (bLockEtwEnabled.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 *     bInitPALOBJ @ 0x1C0156360 (bInitPALOBJ.c)
 *     bInitICM @ 0x1C0156614 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C0156878 (bInitBMOBJ.c)
 *     vInitXLATE @ 0x1C0156918 (vInitXLATE.c)
 */

char InitializeGre()
{
  __int64 v0; // rcx
  HRGN RectRgn; // rax
  CTokenManager *v3; // rax
  CTokenManager *v4; // rbx
  SfmState *v5; // rcx
  int v6; // edi
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-79h] BYREF
  __int64 v8; // [rsp+68h] [rbp-41h]
  int v9; // [rsp+70h] [rbp-39h]
  __int64 v10; // [rsp+78h] [rbp-31h]
  _QWORD v11[12]; // [rsp+A0h] [rbp-9h] BYREF
  PULONG BitMapBuffer; // [rsp+110h] [rbp+67h]
  void *v13; // [rsp+118h] [rbp+6Fh]
  struct _RTL_BITMAP *BitMapHeader; // [rsp+120h] [rbp+77h]
  _QWORD *v15; // [rsp+128h] [rbp+7Fh]

  G_fConsole = gbRemoteSession == 0;
  if ( (int)IsbDoubleDpiSupported_0() < 0 )
    WPP_MAIN_CB.DeviceLock.Header.SignalState = 0;
  else
    WPP_MAIN_CB.DeviceLock.Header.SignalState = bDoubleDpi_0();
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  if ( _InterlockedDecrement(&CountInit) )
    return 1;
  RtlGetSuiteMask(v0);
  qword_1C011E3C0 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = GreCreateSemaphoreNonTracked();
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    if ( (int)IsVerifierInitializationSupported_0() >= 0 )
      VerifierInitialization_0();
    qword_1C011E3B0 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)GreCreateSemaphoreNonTracked();
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    {
      if ( (int)IsInitializeGdiCrossSessionGlobalsSupported_0() < 0
        || (unsigned int)InitializeGdiCrossSessionGlobals_0() )
      {
        gbLockEtw = bLockEtwEnabled();
        gbDisableTrappedAcRendering = 0;
        if ( (unsigned int)HmgCreate() )
        {
          REGION::ulUniqueREGION = 1;
          if ( (int)IsNineGridRenderingSupported_0() >= 0 )
          {
            GetNineGridRenderingData_0();
            memset(v13, 0, 0x200uLL);
            *(_QWORD *)BitMapBuffer = 0LL;
            RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
            *v15 = 0LL;
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
                        ghsemDwmState = (HSEMAPHORE)GreCreateSemaphoreInternal();
                        if ( ghsemDwmState )
                        {
                          ghsemDynamicModeChange = (HSEMAPHORE)GreCreateSemaphoreInternal();
                          if ( ghsemDynamicModeChange )
                          {
                            ghsemDCVisRgn = (PERESOURCE)GreCreateSemaphoreInternal();
                            if ( ghsemDCVisRgn )
                            {
                              ghsemVisRgnUniqueness = (PERESOURCE)GreCreateSemaphoreInternal();
                              if ( ghsemVisRgnUniqueness )
                              {
                                ghsemVisRgnPublish = (PERESOURCE)GreCreateSemaphoreInternal();
                                if ( ghsemVisRgnPublish )
                                {
                                  ghsemSprite = (HSEMAPHORE)GreCreateSemaphoreInternal();
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
                                            RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, RectRgn, 1, 0);
                                            if ( v11[0] )
                                            {
                                              prgnDefault = (struct REGION *)v11[0];
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
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
                                                    v3 = (CTokenManager *)Win32AllocPoolZInit(0xF0uLL);
                                                    v4 = v3 ? CTokenManager::CTokenManager(v3) : 0LL;
                                                    if ( v4 )
                                                    {
                                                      v6 = CTokenManager::Initialize(v4);
                                                      if ( v6 >= 0 )
                                                      {
                                                        g_pTokenManager = v4;
                                                        v4 = 0LL;
                                                      }
                                                      if ( v4 )
                                                        CTokenManager::`scalar deleting destructor'(v4);
                                                      if ( v6 >= 0 && (unsigned int)SfmState::Initialize(v5) )
                                                      {
                                                        QueryTable.Flags = 0;
                                                        QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
                                                        memset(&QueryTable.Name, 0, 20);
                                                        QueryTable.DefaultData = 0LL;
                                                        QueryTable.DefaultLength = 0;
                                                        v8 = 0LL;
                                                        v9 = 0;
                                                        v10 = 0LL;
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
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
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
