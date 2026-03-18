/*
 * XREFs of Win32UserInitialize @ 0x1C0138B1C
 * Callers:
 *     DriverEntry @ 0x1C01372C0 (DriverEntry.c)
 * Callees:
 *     IsValidatetagWNDLayoutSupported_0 @ 0x1C00029A0 (IsValidatetagWNDLayoutSupported_0.c)
 *     ValidatetagWNDLayout_0 @ 0x1C00029A8 (ValidatetagWNDLayout_0.c)
 *     IsInitSMSLookasideSupported_0 @ 0x1C00029B0 (IsInitSMSLookasideSupported_0.c)
 *     InitSMSLookaside_0 @ 0x1C00029B8 (InitSMSLookaside_0.c)
 *     IsCreateSetupNameArraySupported_0 @ 0x1C00029C0 (IsCreateSetupNameArraySupported_0.c)
 *     CreateSetupNameArray_0 @ 0x1C00029C8 (CreateSetupNameArray_0.c)
 *     IsInitFunctionTablesSupported_0 @ 0x1C00029D0 (IsInitFunctionTablesSupported_0.c)
 *     InitFunctionTables_0 @ 0x1C00029D8 (InitFunctionTables_0.c)
 *     IsInitMessageTablesSupported_0 @ 0x1C00029E0 (IsInitMessageTablesSupported_0.c)
 *     InitMessageTables_0 @ 0x1C00029E8 (InitMessageTables_0.c)
 *     IsVerifySyncOnlyMessagesSupported_0 @ 0x1C00029F0 (IsVerifySyncOnlyMessagesSupported_0.c)
 *     VerifySyncOnlyMessages_0 @ 0x1C00029F8 (VerifySyncOnlyMessages_0.c)
 *     IsInitOLEFormatsSupported_0 @ 0x1C0002A00 (IsInitOLEFormatsSupported_0.c)
 *     InitOLEFormats_0 @ 0x1C0002A08 (InitOLEFormats_0.c)
 *     IsSetupClassAtomsSupported_0 @ 0x1C0002A10 (IsSetupClassAtomsSupported_0.c)
 *     SetupClassAtoms_0 @ 0x1C0002A18 (SetupClassAtoms_0.c)
 *     IsGetguiKeyboardCorrectionCalloutTimeoutSupported_0 @ 0x1C0002A20 (IsGetguiKeyboardCorrectionCalloutTimeoutSupported_0.c)
 *     GetguiKeyboardCorrectionCalloutTimeout_0 @ 0x1C0002A28 (GetguiKeyboardCorrectionCalloutTimeout_0.c)
 *     IsInitClipFormatExceptionListSupported_0 @ 0x1C0002A30 (IsInitClipFormatExceptionListSupported_0.c)
 *     InitClipFormatExceptionList_0 @ 0x1C0002A38 (InitClipFormatExceptionList_0.c)
 *     IsInitClipboardILDefSupported_0 @ 0x1C0002A40 (IsInitClipboardILDefSupported_0.c)
 *     InitClipboardILDef_0 @ 0x1C0002A48 (InitClipboardILDef_0.c)
 *     IsInitializeTouchPadSysParamsSupported_0 @ 0x1C0002A50 (IsInitializeTouchPadSysParamsSupported_0.c)
 *     InitializeTouchPadSysParams_0 @ 0x1C0002A58 (InitializeTouchPadSysParams_0.c)
 *     IsInitModuleAllocationsSupported_0 @ 0x1C0002A60 (IsInitModuleAllocationsSupported_0.c)
 *     InitModuleAllocations_0 @ 0x1C0002A68 (InitModuleAllocations_0.c)
 *     IsAllocateCvrSupported_0 @ 0x1C0002A70 (IsAllocateCvrSupported_0.c)
 *     AllocateCvr_0 @ 0x1C0002A78 (AllocateCvr_0.c)
 *     UserAddAtomEx @ 0x1C000EB00 (UserAddAtomEx.c)
 *     UserLeaveUserCritSec @ 0x1C0013090 (UserLeaveUserCritSec.c)
 *     SharedAlloc @ 0x1C0018960 (SharedAlloc.c)
 *     ?InitUIPI@@YAXXZ @ 0x1C007BEA4 (-InitUIPI@@YAXXZ.c)
 *     FastGetProfileDwordW @ 0x1C007CAF0 (FastGetProfileDwordW.c)
 *     IsIMMEnabledSystem @ 0x1C007CE90 (IsIMMEnabledSystem.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     UserRtlCreateAtomTable @ 0x1C01392FC (UserRtlCreateAtomTable.c)
 *     HMInitHandleTable @ 0x1C013931C (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C013939C (InitCreateUserSubsystem.c)
 *     InitQEntryLookaside @ 0x1C01394E8 (InitQEntryLookaside.c)
 *     InitSecurity @ 0x1C0139550 (InitSecurity.c)
 *     InitCreateSharedSection @ 0x1C0139750 (InitCreateSharedSection.c)
 */

__int64 Win32UserInitialize()
{
  __int64 result; // rax
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v9; // rcx
  __int64 v10; // rsi
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rdi
  LARGE_INTEGER v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int inited; // ebx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  int v22; // ebx
  _DWORD *v23; // rax
  int v24; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]
  int v26; // [rsp+60h] [rbp+8h] BYREF
  int v27; // [rsp+68h] [rbp+10h] BYREF
  int *v28; // [rsp+70h] [rbp+18h]

  if ( (int)IsValidatetagWNDLayoutSupported_0() < 0 || (result = ValidatetagWNDLayout_0(), (int)result >= 0) )
  {
    result = InitCreateSharedSection();
    if ( (int)result >= 0 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v3 = 0LL;
      while ( 1 )
      {
        v4 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v4 )
          v3 = *v4;
        if ( IsCurrentProcessDwm(v6, v5)
          || (PVOID)PsGetCurrentProcess(v8, v7) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v3 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v9 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v3 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v9 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v9, UserRequest, 0, 0, 0LL);
      }
      v10 = PsGetCurrentThreadWin32Thread(v8);
      if ( v10 )
      {
        v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LODWORD(Timeout) = 0;
          LOBYTE(v11.LowPart) = byte_1C00FEA58 - 1;
          Template_xqx(
            v11.QuadPart,
            &AcquiredExclusiveUserCritEvent,
            v13.QuadPart,
            v12.QuadPart,
            Timeout,
            gullUserCritAcquireToken);
        }
        if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          LODWORD(Timeout) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
          Template_xqx(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritTelemetryEvent,
            v13.QuadPart,
            0LL,
            Timeout,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v3;
      gbValidateHandleForIL = 1;
      if ( !(unsigned int)InitSecurity() )
        goto LABEL_84;
      *(_DWORD *)(ExWindowStationObjectType + 108LL) = 208;
      *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
      *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
      *(_OWORD *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
      *((_DWORD *)ExDesktopObjectType + 27) = 328;
      *((_DWORD *)ExDesktopObjectType + 26) = 0;
      *((_DWORD *)ExDesktopObjectType + 23) = 983551;
      *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
      *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
      *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
      *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
      *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
      *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
      *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 960;
      *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
      *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
      *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
      gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType, 983043LL);
      inited = InitQEntryLookaside();
      if ( (int)IsInitSMSLookasideSupported_0() >= 0 )
        inited |= InitSMSLookaside_0();
      v20 = UserRtlCreateAtomTable(v19, &UserAtomTableHandle) | inited;
      v22 = UserRtlCreateAtomTable(v21, &UserLibmgmtAtomTableHandle) | v20;
      if ( v22 >= 0 )
      {
        atomUSER32 = UserAddAtomEx((__int64)L"USER32", 1, 2u);
        gatomFirstPinned = atomUSER32;
        if ( !atomUSER32 || !(unsigned int)InitCreateUserSubsystem() )
          goto LABEL_84;
        if ( (int)IsCreateSetupNameArraySupported_0() >= 0 )
          CreateSetupNameArray_0();
        v23 = SharedAlloc(0x1D40u);
        gpsi = v23;
        if ( !v23 )
          goto LABEL_84;
        v23[1012] = 6;
        *((_DWORD *)gpsi + 1013) = 13;
        *((_DWORD *)gpsi + 1038) = 6;
        *((_DWORD *)gpsi + 1039) = 13;
        *((_DWORD *)gpsi + 1015) = 8;
        *((_DWORD *)gpsi + 1016) = 16;
        *((_DWORD *)gpsi + 1826) = 0;
        gpDispInfo = (__int64)SharedAlloc(0xD8u);
        if ( !gpDispInfo )
          goto LABEL_84;
        FastGetProfileDwordW(0LL, 2LL, L"DesktopHeapLogging", 0, &v27, 0);
        if ( v27 )
          *(_DWORD *)gpsi |= 0x100u;
        else
          *(_DWORD *)gpsi &= ~0x100u;
        if ( (_BYTE)NlsMbCodePageTag )
          *(_DWORD *)gpsi |= 2u;
        else
          *(_DWORD *)gpsi &= ~2u;
        if ( (unsigned int)IsIMMEnabledSystem() )
          *(_DWORD *)gpsi |= 4u;
        else
          *(_DWORD *)gpsi &= ~4u;
        if ( (unsigned __int16)(NlsAnsiCodePage - 1255) > 1u )
          *(_DWORD *)gpsi &= ~8u;
        else
          *(_DWORD *)gpsi |= 8u;
        *((_DWORD *)gpsi + 227) = gdwDesktopSectionSize << 10;
        if ( (int)IsInitFunctionTablesSupported_0() >= 0 )
          InitFunctionTables_0();
        if ( (int)IsInitMessageTablesSupported_0() >= 0 )
          InitMessageTables_0();
        if ( (int)IsVerifySyncOnlyMessagesSupported_0() >= 0 )
          VerifySyncOnlyMessages_0();
        if ( (int)IsInitOLEFormatsSupported_0() >= 0 && !(unsigned int)InitOLEFormats_0()
          || (int)IsSetupClassAtomsSupported_0() >= 0 && !(unsigned int)SetupClassAtoms_0()
          || !(unsigned int)HMInitHandleTable() )
        {
          goto LABEL_84;
        }
        gSharedInfo = (__int64)gpsi;
        qword_1C01003F8 = gpDispInfo;
        FastGetProfileDwordW(0LL, 2LL, L"USERProcessHandleQuota", 10000, &v26, 0);
        gUserProcessHandleQuota = v26;
        FastGetProfileDwordW(0LL, 2LL, L"USERPostMessageLimit", 10000, &v26, 0);
        v24 = v26;
        if ( !v26 )
          v24 = -1;
        gUserPostMessageLimit = v24;
        FastGetProfileDwordW(0LL, 2LL, L"USERNestedWindowLimit", gNestedWindowLimit, &v26, 0);
        if ( (unsigned int)(v26 - 50) <= 0x32 )
          gNestedWindowLimit = v26;
        if ( (int)IsGetguiKeyboardCorrectionCalloutTimeoutSupported_0() >= 0 )
        {
          GetguiKeyboardCorrectionCalloutTimeout_0();
          FastGetProfileDwordW(0LL, 2LL, L"USERKCCTimeout", *v28, v28, 0);
        }
        FastGetProfileDwordW(0LL, 40LL, L"Installed", 0, (_DWORD *)gpsi + 556, 0);
        FastGetProfileDwordW(0LL, 41LL, L"Installed", 0, (_DWORD *)gpsi + 557, 0);
        FastGetProfileDwordW(0LL, 45LL, L"R2BuildNumber", 0, (_DWORD *)gpsi + 559, 0);
        FastGetProfileDwordW(0LL, 46LL, L"StarterBuildNumber", 0, (_DWORD *)gpsi + 558, 0);
        InitUIPI();
        if ( gbEnforceUIPI )
        {
          if ( (int)IsInitClipFormatExceptionListSupported_0() >= 0 )
            InitClipFormatExceptionList_0();
          if ( (int)IsInitClipboardILDefSupported_0() >= 0 )
            InitClipboardILDef_0();
        }
        FastGetProfileDwordW(0LL, 53LL, L"ModernDesktopApps", 1, &gfEnableModernOnDesktop, 0);
        FastGetProfileDwordW(0LL, 53LL, L"ShellFrameHangResilient", 1, &gfShellFrameHangResilient, 0);
        FastGetProfileDwordW(0LL, 53LL, L"MDAQueueThreshold", 5000, &gdwMDAQThreshold, 0);
        if ( (unsigned int)gdwMDAQThreshold < 0x64 )
          gdwMDAQThreshold = 5000;
        FastGetProfileDwordW(0LL, 53LL, L"MDAQueueTimeoutDiD", 0, &gdwMDAQTimeoutDefenseInDepth, 0);
        FastGetProfileDwordW(0LL, 53LL, L"ShellWindowManagementBehavior", 63, &gdwShellWindowManagementBehavior, 0);
        if ( (unsigned int)gdwMDAQTimeoutDefenseInDepth < 0x64 )
          gdwMDAQTimeoutDefenseInDepth = 30000;
        *((_DWORD *)gpsi + 555) &= ~0x20u;
        if ( (int)IsInitializeTouchPadSysParamsSupported_0() >= 0 )
          InitializeTouchPadSysParams_0();
        if ( (int)IsInitModuleAllocationsSupported_0() >= 0 )
          InitModuleAllocations_0();
        if ( (int)IsAllocateCvrSupported_0() >= 0 && !(unsigned int)AllocateCvr_0() )
LABEL_84:
          v22 = -1073741801;
      }
      UserLeaveUserCritSec(v15, v14, v16, v17);
      return (unsigned int)v22;
    }
  }
  return result;
}
