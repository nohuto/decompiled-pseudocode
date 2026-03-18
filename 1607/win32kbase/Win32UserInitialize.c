/*
 * XREFs of Win32UserInitialize @ 0x1C01556F4
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     IsValidatetagWNDLayoutSupported_0 @ 0x1C00029D0 (IsValidatetagWNDLayoutSupported_0.c)
 *     ValidatetagWNDLayout_0 @ 0x1C00029D8 (ValidatetagWNDLayout_0.c)
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
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserAddAtomEx @ 0x1C0053CD0 (UserAddAtomEx.c)
 *     IsIMMEnabledSystem @ 0x1C0053D50 (IsIMMEnabledSystem.c)
 *     ?InitUIPI@@YAXXZ @ 0x1C0054038 (-InitUIPI@@YAXXZ.c)
 *     SharedAlloc @ 0x1C00548D0 (SharedAlloc.c)
 *     FastGetProfileDwordW @ 0x1C00550B0 (FastGetProfileDwordW.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     InitSecurity @ 0x1C01551F0 (InitSecurity.c)
 *     InitQEntryLookaside @ 0x1C01553F0 (InitQEntryLookaside.c)
 *     InitCreateSharedSection @ 0x1C0155458 (InitCreateSharedSection.c)
 *     HMInitHandleTable @ 0x1C0155508 (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C0155588 (InitCreateUserSubsystem.c)
 *     UserRtlCreateAtomTable @ 0x1C01556D4 (UserRtlCreateAtomTable.c)
 */

__int64 Win32UserInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // rbx
  LARGE_INTEGER v11; // r8
  int inited; // ebx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rcx
  int v16; // ebx
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-38h]
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF
  int *v24; // [rsp+70h] [rbp+18h]

  if ( (int)IsValidatetagWNDLayoutSupported_0() < 0 || (result = ValidatetagWNDLayout_0(), (int)result >= 0) )
  {
    result = InitCreateSharedSection(v1, v0, v2);
    if ( (int)result >= 0 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v8 = PsGetCurrentThreadWin32Thread(v7);
      if ( v8 )
      {
        v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v9.LowPart) = byte_1C0118B28 - 1;
          Template_xqx(
            v9.QuadPart,
            &AcquiredExclusiveUserCritEvent,
            v11.QuadPart,
            v10.QuadPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v10.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          LODWORD(v21) = 1000 * v10.QuadPart / gliQpcFreq.QuadPart;
          Template_xqx(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritTelemetryEvent,
            v11.QuadPart,
            0LL,
            v21,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v6;
      gbValidateHandleForIL = 1;
      if ( !(unsigned int)InitSecurity() )
        goto LABEL_69;
      *(_DWORD *)(ExWindowStationObjectType + 108LL) = 232;
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
      *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 968;
      *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
      *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
      *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
      gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType);
      inited = InitQEntryLookaside();
      if ( (int)IsInitSMSLookasideSupported_0() >= 0 )
        inited |= InitSMSLookaside_0();
      v14 = UserRtlCreateAtomTable(v13, &UserAtomTableHandle) | inited;
      v16 = UserRtlCreateAtomTable(v15, &UserLibmgmtAtomTableHandle) | v14;
      if ( v16 >= 0 )
      {
        atomUSER32 = UserAddAtomEx();
        gatomFirstPinned = atomUSER32;
        if ( !atomUSER32 || !(unsigned int)InitCreateUserSubsystem() )
          goto LABEL_69;
        if ( (int)IsCreateSetupNameArraySupported_0() >= 0 )
          CreateSetupNameArray_0();
        v17 = (char *)SharedAlloc(0x22B0u);
        gpsi = v17;
        if ( !v17 )
          goto LABEL_69;
        v18 = 3044LL;
        do
        {
          v19 = 28LL;
          do
          {
            *(_DWORD *)&v17[v18] = -1;
            v18 += 4LL;
            v17 = (char *)gpsi;
            --v19;
          }
          while ( v19 );
        }
        while ( v18 < 4836 );
        *((_DWORD *)gpsi + 1360) = 6;
        *((_DWORD *)gpsi + 1361) = 13;
        *((_DWORD *)gpsi + 1386) = 6;
        *((_DWORD *)gpsi + 1387) = 13;
        *((_DWORD *)gpsi + 1363) = 8;
        *((_DWORD *)gpsi + 1364) = 16;
        gpDispInfo = (__int64)SharedAlloc(0xD8u);
        if ( !gpDispInfo )
          goto LABEL_69;
        FastGetProfileDwordW(0LL, 2LL, L"DesktopHeapLogging", 0, &v23, 0);
        if ( v23 )
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
        if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
          *(_DWORD *)gpsi |= 8u;
        else
          *(_DWORD *)gpsi &= ~8u;
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
          goto LABEL_69;
        }
        gSharedInfo = (__int64)gpsi;
        qword_1C011A138 = gpDispInfo;
        FastGetProfileDwordW(0LL, 2LL, L"USERProcessHandleQuota", 10000, &v22, 0);
        gUserProcessHandleQuota = v22;
        FastGetProfileDwordW(0LL, 2LL, L"USERPostMessageLimit", 10000, &v22, 0);
        v20 = v22;
        if ( !v22 )
          v20 = -1;
        gUserPostMessageLimit = v20;
        FastGetProfileDwordW(0LL, 2LL, L"USERNestedWindowLimit", gNestedWindowLimit, &v22, 0);
        if ( (unsigned int)(v22 - 50) <= 0x32 )
          gNestedWindowLimit = v22;
        if ( (int)IsGetguiKeyboardCorrectionCalloutTimeoutSupported_0() >= 0 )
        {
          GetguiKeyboardCorrectionCalloutTimeout_0();
          FastGetProfileDwordW(0LL, 2LL, L"USERKCCTimeout", *v24, v24, 0);
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
LABEL_69:
          v16 = -1073741801;
      }
      UserSessionSwitchLeaveCrit();
      return (unsigned int)v16;
    }
  }
  return result;
}
