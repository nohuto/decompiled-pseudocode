/*
 * XREFs of InitializeGre @ 0x1C013A000
 * Callers:
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
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
 *     GreCreateSemaphore @ 0x1C0012310 (GreCreateSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C0012318 (GreCreateSemaphoreInternal.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027EDC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C003D4CC (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C003D6B8 (--0CTokenManager@@AEAA@XZ.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C003D74C (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C0064AE4 (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateRectRgn @ 0x1C0069800 (GreCreateRectRgn.c)
 *     HmgCreate @ 0x1C006CE6C (HmgCreate.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C007E2F0 (GreCreateSemaphoreNonTracked.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C007E6A0 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     bLockEtwEnabled @ 0x1C007E778 (bLockEtwEnabled.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     bInitICM @ 0x1C013A470 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C013A6D4 (bInitPALOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C013A9B0 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C013AE60 (bInitBMOBJ.c)
 *     vInitXLATE @ 0x1C013C660 (vInitXLATE.c)
 *     bLoadProcessHandleQuota @ 0x1C013C79C (bLoadProcessHandleQuota.c)
 */

char InitializeGre()
{
  HRGN RectRgn; // rax
  CTokenManager *v2; // rax
  CTokenManager *v3; // rbx
  SfmState *v4; // rcx
  int v5; // edi
  _QWORD v6[4]; // [rsp+30h] [rbp-59h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-39h] BYREF
  __int64 v8; // [rsp+88h] [rbp-1h]
  int v9; // [rsp+90h] [rbp+7h]
  __int64 v10; // [rsp+98h] [rbp+Fh]
  PULONG BitMapBuffer; // [rsp+F0h] [rbp+67h]
  void *v12; // [rsp+F8h] [rbp+6Fh]
  struct _RTL_BITMAP *BitMapHeader; // [rsp+100h] [rbp+77h]
  _QWORD *v14; // [rsp+108h] [rbp+7Fh]

  G_fConsole = gbRemoteSession == 0;
  if ( (int)IsbDoubleDpiSupported_0() < 0 )
    HIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 0;
  else
    HIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = bDoubleDpi_0();
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  if ( _InterlockedDecrement(&CountInit) )
    return 1;
  gIsTerminalServer = (MEMORY[0xFFFFF780000002D0] & 0x10) != 0;
  qword_1C0106FA8 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  WPP_MAIN_CB.Reserved = GreCreateSemaphoreNonTracked();
  if ( WPP_MAIN_CB.Reserved )
  {
    if ( (int)IsVerifierInitializationSupported_0() >= 0 )
      VerifierInitialization_0();
    qword_1C0106F98 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    WPP_MAIN_CB.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)GreCreateSemaphoreNonTracked();
    if ( WPP_MAIN_CB.DeviceObjectExtension )
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
          ghsemDriverMgmt = (PERESOURCE)GreCreateSemaphoreInternal();
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
                          ghsemDynamicModeChange = (PERESOURCE)GreCreateSemaphoreInternal();
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
                                            RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, RectRgn, 1);
                                            if ( v6[0] )
                                            {
                                              prgnDefault = (struct REGION *)v6[0];
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
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
                                                    v2 = (CTokenManager *)Win32AllocPoolZInit(0xF8uLL);
                                                    v3 = v2 ? CTokenManager::CTokenManager(v2) : 0LL;
                                                    if ( v3 )
                                                    {
                                                      v5 = CTokenManager::Initialize(v3);
                                                      if ( v5 >= 0 )
                                                      {
                                                        g_pTokenManager = v3;
                                                        v3 = 0LL;
                                                      }
                                                      if ( v3 )
                                                        CTokenManager::`scalar deleting destructor'(v3);
                                                      if ( v5 >= 0 && (unsigned int)SfmState::Initialize(v4) )
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
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
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
