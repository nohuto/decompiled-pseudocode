/*
 * XREFs of CheckForegroundRight @ 0x1C008D2FC
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     IsDebuggerAttached @ 0x1C008D488 (IsDebuggerAttached.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C008D4BC (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     IsForegroundLocked @ 0x1C008D52C (IsForegroundLocked.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C008D54C (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsNonImmersiveBand @ 0x1C00910EC (IsNonImmersiveBand.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CheckForegroundRight(struct tagWND *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v19; // rcx

  *a2 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_DWORD *)(gptiCurrent + 1072LL) &= ~0x40u;
  if ( *((_DWORD *)a1 + 76) == 15 )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( !IAMThreadAccessGranted(gptiCurrent)
    || (v6 = grpdeskRitInput, *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput) )
  {
    if ( *(int *)(v4 + 12) >= 0 && !(_DWORD)v7 )
    {
      CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
      if ( (unsigned int)IsProcessDwm(CurrentProcess)
        && *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) != *(_WORD *)(gpsi + 884LL) )
      {
        return 1LL;
      }
      if ( !gfDebugForegroundIgnoreDebugPort )
      {
        if ( (unsigned int)IsDebuggerAttached(v4) && (unsigned int)IsNonImmersiveBand(a1, v10, v11, v12) )
          return 1LL;
        if ( gpqForeground )
        {
          v13 = *(_QWORD *)(gpqForeground + 80LL);
          if ( v13 )
          {
            if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 376LL))
              && (unsigned int)IsNonImmersiveBand(a1, v14, v15, v16) )
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
        v17 = glinp[6];
        if ( v17 )
        {
          v19 = *(_QWORD *)(gptiCurrent + 376LL);
          if ( *(_QWORD *)(v17 + 376) == v19 )
          {
            if ( (unsigned int)IsDesktopApp(v19) )
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
