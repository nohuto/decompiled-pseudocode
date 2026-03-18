/*
 * XREFs of CheckForegroundRight @ 0x1C00AA97C
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     IsDebuggerAttached @ 0x1C00AAB24 (IsDebuggerAttached.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00AAB58 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00AAC64 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     IsForegroundLocked @ 0x1C00AACD4 (IsForegroundLocked.c)
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CheckForegroundRight(struct tagWND *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // r8d
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v19; // rcx

  *a2 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x40u;
  if ( *((_DWORD *)a1 + 76) == 15 )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( !IAMThreadAccessGranted(gptiCurrent)
    || (v5 = grpdeskRitInput, *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput) )
  {
    if ( *(int *)(v4 + 12) >= 0 && !v6 )
    {
      CurrentProcess = PsGetCurrentProcess(v5);
      if ( (unsigned int)IsProcessDwm(CurrentProcess)
        && *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) != *(_WORD *)(gpsi + 884LL) )
      {
        return 1LL;
      }
      if ( !gfDebugForegroundIgnoreDebugPort )
      {
        if ( (unsigned int)IsDebuggerAttached(v4) && (unsigned int)IsNonImmersiveBand(a1, v8, v9, v10) )
          return 1LL;
        if ( gpqForeground )
        {
          v11 = *(_QWORD *)(gpqForeground + 88LL);
          if ( v11 )
          {
            if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 376LL))
              && (unsigned int)IsNonImmersiveBand(a1, v12, v13, v14) )
            {
              return 1LL;
            }
          }
        }
      }
      if ( gptiCurrent == GetProp((__int64)a1, (unsigned __int16)gatomBrokeredForeground, 1LL) )
        return 1LL;
      if ( v4 == gppiScreenSaver )
        return 1LL;
      if ( !(unsigned int)IsForegroundLocked() )
      {
        v17 = glinp[9];
        if ( v17 )
        {
          v19 = *(_QWORD *)(gptiCurrent + 376LL);
          if ( *(_QWORD *)(v17 + 376) == v19 )
          {
            if ( (unsigned int)IsDesktopApp(v19, v17, v15, v16) )
              return 1LL;
          }
        }
      }
      if ( (unsigned int)CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a1) )
        return CheckLegacyForegroundAccess();
      *a2 = 1;
      return 0LL;
    }
  }
  gppiLockSFW = 0LL;
  return 1LL;
}
