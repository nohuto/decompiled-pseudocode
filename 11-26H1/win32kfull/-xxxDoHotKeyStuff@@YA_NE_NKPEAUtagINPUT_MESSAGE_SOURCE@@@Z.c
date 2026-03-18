/*
 * XREFs of ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68
 * Callers:
 *     EditionDoHotKeys @ 0x1401E3D10 (EditionDoHotKeys.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     HasRawInputForegroundTarget @ 0x14017238C (HasRawInputForegroundTarget.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsSAS@@YA_NEPEAI@Z @ 0x1401E44F8 (-IsSAS@@YA_NEPEAI@Z.c)
 *     zzzDesktopSwitchSideEffects @ 0x1401F1F04 (zzzDesktopSwitchSideEffects.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1401F3534 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?xxxHandleVolumeUpDownKey@@YAXE_N@Z @ 0x1401FFB98 (-xxxHandleVolumeUpDownKey@@YAXE_N@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z @ 0x140203930 (-IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x140203980 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     _CancelMagnificationInputTransform @ 0x14023BFA0 (_CancelMagnificationInputTransform.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x14025720C (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     ?ReportPenKey@@YAXIE@Z @ 0x140259668 (-ReportPenKey@@YAXIE@Z.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x14025F64C (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 *     ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x140269E94 (-ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140279114 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x1402A7964 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 *     Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline @ 0x1402A7C80 (Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline @ 0x1402A7CD8 (Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxActivateDebugger @ 0x1402F0D94 (xxxActivateDebugger.c)
 */

char __fastcall xxxDoHotKeyStuff(__int64 a1, _BOOL8 a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  char v4; // bl
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  int v7; // ebp
  bool v8; // r14
  __int64 UserSessionState; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // si
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  bool v26; // r13
  struct tagHOTKEY *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  TooltipDismiss *v32; // rcx
  __int16 v33; // ax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  bool v39; // di
  int v40; // edx
  int v41; // r8d
  __int64 v42; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  int v45; // ebp
  __int64 v46; // rax
  __int64 v47; // rdx
  struct tagHOTKEY *v48; // rax
  __int64 v49; // rcx
  bool v50; // zf
  bool v51; // zf
  __int64 v52; // rdx
  int v53; // eax
  int v54; // [rsp+28h] [rbp-80h]
  __int16 v55; // [rsp+30h] [rbp-78h]
  __int128 v56; // [rsp+48h] [rbp-60h] BYREF
  __int64 v57; // [rsp+58h] [rbp-50h]
  unsigned int v58; // [rsp+B0h] [rbp+8h]
  bool v59; // [rsp+B8h] [rbp+10h]

  v59 = a2;
  v4 = 0;
  v5 = (unsigned __int8)a1;
  v58 = 0;
  v6 = 0;
  v7 = a3;
  v8 = a2;
  LOBYTE(v56) = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  *((_QWORD *)&v56 + 1) = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v56, v10);
  v12 = 1;
  switch ( v5 )
  {
    case 0x10u:
      v6 = 4;
      break;
    case 0x11u:
      v6 = 2;
      break;
    case 0x12u:
      v6 = 1;
      break;
    default:
      if ( v5 - 91 < 2 )
        v6 = 8;
      else
        *(_DWORD *)(UserSessionState + 14036) = 0;
      break;
  }
  v13 = *(unsigned int *)(UserSessionState + 14032);
  if ( v8 )
  {
    *(_DWORD *)(UserSessionState + 14032) = v13 & ~v6;
    if ( v6 )
    {
      v58 = *(_DWORD *)(UserSessionState + 14036);
      *(_DWORD *)(UserSessionState + 14036) = 0;
    }
    else if ( (unsigned int)Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline() )
    {
      ResetWindowKeyProcessing(0LL);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v13, v11) + 13992) )
      *(_QWORD *)(W32GetUserSessionState(v15, v14) + 13992) = 0LL;
  }
  else
  {
    v16 = v6 | v13;
    *(_DWORD *)(UserSessionState + 14032) = v16;
    if ( v6 )
      *(_DWORD *)(UserSessionState + 14036) = v16;
    if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v18, v17) + 66084) || *(_DWORD *)(UserSessionState + 14036) != 8 )
      {
        if ( (unsigned int)Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline() )
        {
          ResetWindowKeyProcessing(0LL);
        }
        else
        {
          v24 = *(_DWORD *)(UserSessionState + 14040);
          if ( v24 )
          {
            if ( v24 == 1 )
            {
              v25 = W32GetUserSessionState(v23, v22);
              UpdateWindowKeyWindowCloak(*(_QWORD *)(v25 + 19176), 0LL);
            }
            *(_DWORD *)(UserSessionState + 14040) = 0;
          }
        }
      }
      else if ( !*(_DWORD *)(UserSessionState + 14040) )
      {
        v21 = W32GetUserSessionState(v20, v19);
        if ( (unsigned __int8)UpdateWindowKeyWindowCloak(*(_QWORD *)(v21 + 19176), 1LL) )
          *(_DWORD *)(UserSessionState + 14040) = 1;
      }
    }
  }
  v26 = IsSAS(v5, (unsigned int *)(UserSessionState + 14032));
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v56);
  xxxHandleVolumeUpDownKey(v5, v8);
  if ( !v26 && (*(_BYTE *)(UserSessionState + 14696) & 1) != 0 )
    return 0;
  if ( !v58 || !v8 )
  {
    v27 = IsHotKey(*(_DWORD *)(UserSessionState + 14032), v5);
    if ( v27 && v26 )
      goto LABEL_85;
    if ( *(_DWORD *)(UserSessionState + 14032) != *(_DWORD *)(UserSessionState + 14000) )
    {
      v48 = IsUninterceptable(v5);
      if ( v48 )
      {
        v27 = v48;
        goto LABEL_85;
      }
    }
LABEL_99:
    if ( !v27 )
      goto LABEL_39;
    goto LABEL_85;
  }
  v27 = IsHotKey(v58, 0);
  if ( !(unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_99;
  v30 = *(_DWORD *)(UserSessionState + 14040);
  if ( v27 )
  {
    if ( v30 )
    {
      if ( *((_DWORD *)v27 + 10) == -7 )
      {
LABEL_72:
        IsEnabledDeviceUsageNoInline = Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline();
        v45 = *(_DWORD *)(UserSessionState + 14040);
        if ( IsEnabledDeviceUsageNoInline )
        {
          ResetWindowKeyProcessing(0LL);
          if ( v45 == 2 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v12 = 0;
            }
            v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v12 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return 0;
            v42 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v28) + 69152);
            v55 = 13;
            goto LABEL_66;
          }
        }
        else
        {
          *(_DWORD *)(UserSessionState + 14040) = 0;
          if ( v45 == 2 )
            return 0;
          if ( v45 == 1 )
          {
            v46 = W32GetUserSessionState(v29, v28);
            UpdateWindowKeyWindowCloak(*(_QWORD *)(v46 + 19176), 0LL);
          }
        }
        v7 = a3;
LABEL_85:
        if ( !*(_DWORD *)(W32GetUserSessionState(v29, v28) + 66084)
          || _bittest16((const signed __int16 *)v27 + 17, 0xDu) )
        {
          goto LABEL_39;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v12 = 0;
        }
        v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v12 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v42 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v47) + 69152);
        v55 = 14;
LABEL_66:
        LOBYTE(v41) = v39;
        LOBYTE(v40) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v40,
          v41,
          v42,
          4,
          6,
          v55,
          (__int64)&WPP_e7b0edddbde9378c4e0e63fd92a79a5b_Traceguids);
        return 0;
      }
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2193LL);
    }
    if ( *((_DWORD *)v27 + 10) != -7 )
      goto LABEL_85;
    goto LABEL_72;
  }
  if ( v30 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2188LL);
LABEL_39:
  WindowArrangementSequence::TestSequence(
    v27,
    (const struct tagHOTKEY *const)v5,
    v6,
    *(_DWORD *)(UserSessionState + 14032),
    !v59,
    v54);
  if ( v58 == 2 && v59 || *(_DWORD *)(UserSessionState + 14032) == 6 && (_BYTE)v5 == 121 && !v59 )
    TooltipDismiss::DismissTooltips(v32);
  if ( !v27 )
    return 0;
  v33 = *((_WORD *)v27 + 17);
  if ( v33 < 0 && !v26 && a4 && *((_DWORD *)a4 + 1) != 4 )
    return 0;
  v57 = 0LL;
  v34 = 34816LL;
  v56 = 0LL;
  if ( (v33 & 0x8800) == 0 )
  {
    if ( (unsigned int)HasRawInputForegroundTarget(&v56, v31) )
    {
      v34 = *(_QWORD *)(*((_QWORD *)&v56 + 1) + 456LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v34 + 824) + 100LL) & 0x200) != 0 )
        return 0;
    }
  }
  v35 = *((_DWORD *)v27 + 10);
  if ( v35 != -7 )
  {
    if ( (unsigned int)(v35 + 6) <= 1 )
    {
      if ( !v59 )
        return (unsigned int)xxxActivateDebugger(*((unsigned __int16 *)v27 + 16)) != 0;
      return v4;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v34, v31) + 19176) + 40LL) + 32LL) & 1) != 0 )
    {
      v37 = *(_QWORD *)v27;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)v27 + 520LL), 0, 0) & 4) == 0
        || !_bittest16((const signed __int16 *)v27 + 17, 0xDu) )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v37, v36) + 66084) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v12 = 0;
          }
          v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v12 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 0;
          v42 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v38) + 69152);
          v55 = 15;
          goto LABEL_66;
        }
      }
    }
    if ( !v58 && v59 )
      return 0;
    if ( v26 || (_BYTE)v5 == 27 && *(_DWORD *)(UserSessionState + 14032) == 2 )
    {
      zzzDesktopSwitchSideEffects();
      if ( *(_QWORD *)(*((_QWORD *)PtiCurrent(v49) + 61) + 224LL) )
        CancelMagnificationInputTransform();
      CancelCapturedMipOverride();
    }
    if ( !v7 )
      goto LABEL_128;
    switch ( (_BYTE)v5 )
    {
      case 9:
        v50 = (v7 & 1) == 0;
        break;
      case 0xD:
        v50 = (v7 & 8) == 0;
        break;
      case 0x1B:
        if ( (v7 & 2) != 0 && (*(_DWORD *)(UserSessionState + 14032) & 3) == 1 )
          return 0;
        if ( (v7 & 0x40) != 0 )
        {
          v51 = (*(_DWORD *)(UserSessionState + 14032) & 3) == 2;
          goto LABEL_127;
        }
LABEL_128:
        if ( IsPenQuickLaunchAndShouldBeDisabled(*(_DWORD *)(UserSessionState + 14032), v5) )
          return 0;
        goto LABEL_129;
      case 0x20:
        v50 = (v7 & 4) == 0;
        break;
      case 0x2C:
        if ( (v7 & 0x20) != 0 && (*(_DWORD *)(UserSessionState + 14032) & 3) == 0 )
          return 0;
        v50 = (v7 & 0x10) == 0;
        break;
      default:
        goto LABEL_128;
    }
    if ( !v50 )
    {
      v51 = (*(_DWORD *)(UserSessionState + 14032) & 3) == 1;
LABEL_127:
      if ( v51 )
        return 0;
      goto LABEL_128;
    }
    goto LABEL_128;
  }
LABEL_129:
  ReportPenKey(*(_DWORD *)(UserSessionState + 14032), v5);
  LOBYTE(v52) = v59;
  v53 = xxxReportHotKey(v27, v52, a4) - 1;
  if ( !v53 )
    return 0;
  return v53 == 1 || v58 == 0;
}
