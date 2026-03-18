/*
 * XREFs of Win32UserInitialize @ 0x1C013B9C4
 * Callers:
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 * Callees:
 *     IsValidatetagWNDLayoutSupported_0 @ 0x1C00029C0 (IsValidatetagWNDLayoutSupported_0.c)
 *     ValidatetagWNDLayout_0 @ 0x1C00029C8 (ValidatetagWNDLayout_0.c)
 *     IsInitWPACertificateSupported_0 @ 0x1C00029D0 (IsInitWPACertificateSupported_0.c)
 *     InitWPACertificate_0 @ 0x1C00029D8 (InitWPACertificate_0.c)
 *     IsInitSMSLookasideSupported_0 @ 0x1C00029E0 (IsInitSMSLookasideSupported_0.c)
 *     InitSMSLookaside_0 @ 0x1C00029E8 (InitSMSLookaside_0.c)
 *     IsCreateSetupNameArraySupported_0 @ 0x1C00029F0 (IsCreateSetupNameArraySupported_0.c)
 *     CreateSetupNameArray_0 @ 0x1C00029F8 (CreateSetupNameArray_0.c)
 *     IsInitFunctionTablesSupported_0 @ 0x1C0002A00 (IsInitFunctionTablesSupported_0.c)
 *     InitFunctionTables_0 @ 0x1C0002A08 (InitFunctionTables_0.c)
 *     IsInitMessageTablesSupported_0 @ 0x1C0002A10 (IsInitMessageTablesSupported_0.c)
 *     InitMessageTables_0 @ 0x1C0002A18 (InitMessageTables_0.c)
 *     IsVerifySyncOnlyMessagesSupported_0 @ 0x1C0002A20 (IsVerifySyncOnlyMessagesSupported_0.c)
 *     VerifySyncOnlyMessages_0 @ 0x1C0002A28 (VerifySyncOnlyMessages_0.c)
 *     IsInitOLEFormatsSupported_0 @ 0x1C0002A30 (IsInitOLEFormatsSupported_0.c)
 *     InitOLEFormats_0 @ 0x1C0002A38 (InitOLEFormats_0.c)
 *     IsSetupClassAtomsSupported_0 @ 0x1C0002A40 (IsSetupClassAtomsSupported_0.c)
 *     SetupClassAtoms_0 @ 0x1C0002A48 (SetupClassAtoms_0.c)
 *     IsGetguiKeyboardCorrectionCalloutTimeoutSupported_0 @ 0x1C0002A50 (IsGetguiKeyboardCorrectionCalloutTimeoutSupported_0.c)
 *     GetguiKeyboardCorrectionCalloutTimeout_0 @ 0x1C0002A58 (GetguiKeyboardCorrectionCalloutTimeout_0.c)
 *     IsInitClipFormatExceptionListSupported_0 @ 0x1C0002A60 (IsInitClipFormatExceptionListSupported_0.c)
 *     InitClipFormatExceptionList_0 @ 0x1C0002A68 (InitClipFormatExceptionList_0.c)
 *     IsInitClipboardILDefSupported_0 @ 0x1C0002A70 (IsInitClipboardILDefSupported_0.c)
 *     InitClipboardILDef_0 @ 0x1C0002A78 (InitClipboardILDef_0.c)
 *     IsInitializeTouchPadSysParamsSupported_0 @ 0x1C0002A80 (IsInitializeTouchPadSysParamsSupported_0.c)
 *     InitializeTouchPadSysParams_0 @ 0x1C0002A88 (InitializeTouchPadSysParams_0.c)
 *     IsInitModuleAllocationsSupported_0 @ 0x1C0002A90 (IsInitModuleAllocationsSupported_0.c)
 *     InitModuleAllocations_0 @ 0x1C0002A98 (InitModuleAllocations_0.c)
 *     IsAllocateCvrSupported_0 @ 0x1C0002AA0 (IsAllocateCvrSupported_0.c)
 *     AllocateCvr_0 @ 0x1C0002AA8 (AllocateCvr_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?InitUIPI@@YAXXZ @ 0x1C0068BE8 (-InitUIPI@@YAXXZ.c)
 *     FastGetProfileDwordW @ 0x1C006AB50 (FastGetProfileDwordW.c)
 *     SharedAlloc @ 0x1C006C120 (SharedAlloc.c)
 *     IsIMMEnabledSystem @ 0x1C006CDE0 (IsIMMEnabledSystem.c)
 *     UserAddAtomEx @ 0x1C006CE00 (UserAddAtomEx.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     UserRtlCreateAtomTable @ 0x1C013C118 (UserRtlCreateAtomTable.c)
 *     HMInitHandleTable @ 0x1C013C138 (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C013C1B8 (InitCreateUserSubsystem.c)
 *     InitQEntryLookaside @ 0x1C013C304 (InitQEntryLookaside.c)
 *     InitSecurity @ 0x1C013C36C (InitSecurity.c)
 *     InitCreateSharedSection @ 0x1C013C56C (InitCreateSharedSection.c)
 */

__int64 Win32UserInitialize()
{
  __int64 result; // rax
  int inited; // ebx
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rcx
  LARGE_INTEGER v8; // rbx
  LARGE_INTEGER v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF
  int *v21; // [rsp+70h] [rbp+18h]

  if ( (int)IsValidatetagWNDLayoutSupported_0() < 0 )
  {
    inited = v19;
  }
  else
  {
    result = ValidatetagWNDLayout_0();
    inited = result;
    if ( (int)result < 0 )
      return result;
  }
  if ( (int)IsInitWPACertificateSupported_0() >= 0 )
    inited = InitWPACertificate_0();
  if ( inited >= 0 )
  {
    result = InitCreateSharedSection();
    if ( (int)result < 0 )
      return result;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v6 = PsGetCurrentThreadWin32Thread(v5);
    if ( v6 )
    {
      v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v7.LowPart) = byte_1C01020C8 - 1;
        Template_xqx(
          v7.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v9.QuadPart,
          v8.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
      if ( v8.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v18) = 1000 * v8.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v9.QuadPart,
          0LL,
          v18,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v4;
    gbValidateHandleForIL = 1;
    if ( !(unsigned int)InitSecurity() )
      goto LABEL_76;
    *(_DWORD *)(ExWindowStationObjectType + 108LL) = 208;
    *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
    *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
    *(_OWORD *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
    *((_DWORD *)ExDesktopObjectType + 27) = 336;
    *((_DWORD *)ExDesktopObjectType + 26) = 0;
    *((_DWORD *)ExDesktopObjectType + 23) = 983551;
    *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
    *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
    *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
    *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
    *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
    *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
    *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 1008;
    *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
    *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
    *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
    gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType, 983043LL);
    v12 = InitQEntryLookaside();
    if ( (int)IsInitSMSLookasideSupported_0() >= 0 )
      v12 |= InitSMSLookaside_0();
    v14 = UserRtlCreateAtomTable(v13, &UserAtomTableHandle) | v12;
    inited = UserRtlCreateAtomTable(v15, &UserLibmgmtAtomTableHandle) | v14;
    if ( inited >= 0 )
    {
      atomUSER32 = UserAddAtomEx((__int64)L"USER32", 1, 2u);
      gatomFirstPinned = atomUSER32;
      if ( !atomUSER32 || !(unsigned int)InitCreateUserSubsystem() )
        goto LABEL_76;
      if ( (int)IsCreateSetupNameArraySupported_0() >= 0 )
        CreateSetupNameArray_0();
      v16 = SharedAlloc(0x1D40u);
      gpsi = v16;
      if ( !v16 )
        goto LABEL_76;
      v16[1012] = 6;
      *((_DWORD *)gpsi + 1013) = 13;
      *((_DWORD *)gpsi + 1038) = 6;
      *((_DWORD *)gpsi + 1039) = 13;
      *((_DWORD *)gpsi + 1015) = 8;
      *((_DWORD *)gpsi + 1016) = 16;
      *((_DWORD *)gpsi + 1826) = 0;
      gpDispInfo = (__int64)SharedAlloc(0xD8u);
      if ( !gpDispInfo )
        goto LABEL_76;
      FastGetProfileDwordW(0LL, 2LL, L"DesktopHeapLogging", 0, &v20, 0);
      if ( v20 )
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
        goto LABEL_76;
      }
      gSharedInfo = (__int64)gpsi;
      qword_1C0102D58 = gpDispInfo;
      FastGetProfileDwordW(0LL, 2LL, L"USERProcessHandleQuota", 10000, &v19, 0);
      gUserProcessHandleQuota = v19;
      FastGetProfileDwordW(0LL, 2LL, L"USERPostMessageLimit", 10000, &v19, 0);
      v17 = v19;
      if ( !v19 )
        v17 = -1;
      gUserPostMessageLimit = v17;
      FastGetProfileDwordW(0LL, 2LL, L"USERNestedWindowLimit", gNestedWindowLimit, &v19, 0);
      if ( (unsigned int)(v19 - 50) <= 0x32 )
        gNestedWindowLimit = v19;
      if ( (int)IsGetguiKeyboardCorrectionCalloutTimeoutSupported_0() >= 0 )
      {
        GetguiKeyboardCorrectionCalloutTimeout_0();
        FastGetProfileDwordW(0LL, 2LL, L"USERKCCTimeout", *v21, v21, 0);
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
      FastGetProfileDwordW(0LL, 53LL, L"ShellWindowManagementBehavior", 127, &gdwShellWindowManagementBehavior, 0);
      if ( (unsigned int)gdwMDAQTimeoutDefenseInDepth < 0x64 )
        gdwMDAQTimeoutDefenseInDepth = 30000;
      *((_DWORD *)gpsi + 555) &= ~0x20u;
      if ( (int)IsInitializeTouchPadSysParamsSupported_0() >= 0 )
        InitializeTouchPadSysParams_0();
      if ( (int)IsInitModuleAllocationsSupported_0() >= 0 )
        InitModuleAllocations_0();
      if ( (int)IsAllocateCvrSupported_0() >= 0 && !(unsigned int)AllocateCvr_0() )
LABEL_76:
        inited = -1073741801;
    }
    UserSessionSwitchLeaveCrit(v11, v10);
  }
  return (unsigned int)inited;
}
