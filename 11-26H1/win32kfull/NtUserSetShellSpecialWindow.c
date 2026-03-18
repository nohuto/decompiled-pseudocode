/*
 * XREFs of NtUserSetShellSpecialWindow @ 0x1402BDD00
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x140296D60 (-SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WIN.c)
 *     ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x1402AE210 (-NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z.c)
 */

__int64 __fastcall NtUserSetShellSpecialWindow(HWND a1, int a2)
{
  __int64 v4; // rdi
  const struct tagTHREADINFO *v6; // rbx
  const struct tagWND *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rcx
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = (const struct tagTHREADINFO *)EnterCrit(0LL, 0LL);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
    v7 = 0LL;
    if ( a2 )
    {
      if ( a2 != 1
        || a1
        && ((v8 = ValidateHwndStrict(a1), (v7 = (const struct tagWND *)v8) == 0LL)
         || *(_QWORD *)(*(_QWORD *)(v8 + 16) + 456LL) != *((_QWORD *)v6 + 57)
         || !IsTopLevelWindow(v8)
         || (v9 = *((_QWORD *)v7 + 5), (*(_BYTE *)(v9 + 233) & 0x40) == 0)
         || (*(_BYTE *)(v9 + 27) & 8) != 0) )
      {
LABEL_22:
        v13 = 87;
        goto LABEL_16;
      }
    }
    else
    {
      LOBYTE(v10) = IAMThreadAccessGranted(v6);
      if ( !v10 )
      {
        v13 = 5;
LABEL_16:
        UserSetLastError(v13);
LABEL_25:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
        UserSessionSwitchLeaveCrit(v16);
        return v4;
      }
      if ( a1 )
      {
        v14 = ValidateHwndStrict(a1);
        v7 = (const struct tagWND *)v14;
        if ( !v14 )
          goto LABEL_22;
        v15 = *(_WORD *)(*(_QWORD *)(v14 + 40) + 42LL) & 0x2FFF;
        if ( v15 == 669 || v15 == 671 || !IsTopLevelWindow(v14) )
          goto LABEL_22;
      }
      else
      {
        *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18936) = 0LL;
      }
    }
    ShellWindowManagement::SetShellSpecialWindow(*((_QWORD *)v6 + 61), v7, a2);
    v4 = 1LL;
    goto LABEL_25;
  }
  if ( a2 )
  {
    UserSetLastError(5023);
    return 0LL;
  }
  else
  {
    LOBYTE(v4) = a1 != 0LL;
    return NtUserSetFallbackForeground(a1, v4);
  }
}
