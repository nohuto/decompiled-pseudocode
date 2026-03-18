/*
 * XREFs of CheckForegroundRight @ 0x1C0045328
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00454B4 (IsDebuggerAttached.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00454E8 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00455E8 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     IsForegroundLocked @ 0x1C0045658 (IsForegroundLocked.c)
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CheckForegroundRight(struct tagWND *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  int v5; // r8d
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v14; // rcx

  *a2 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 384LL);
  *(_DWORD *)(gptiCurrent + 1080LL) &= ~0x40u;
  if ( *((_DWORD *)a1 + 76) == 15 )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( (!(unsigned int)IAMThreadAccessGranted(gptiCurrent) || *(_QWORD *)(gptiCurrent + 416LL) != grpdeskRitInput)
    && *(int *)(v4 + 12) >= 0
    && !v5 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( (unsigned int)IsProcessDwm(CurrentProcess)
      && *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) != *(_WORD *)(gpsi + 884LL) )
    {
      return 1LL;
    }
    if ( !gfDebugForegroundIgnoreDebugPort )
    {
      if ( (unsigned int)IsDebuggerAttached(v4) && (unsigned int)IsNonImmersiveBand(a1, v7, v8) )
        return 1LL;
      if ( gpqForeground )
      {
        v9 = *(_QWORD *)(gpqForeground + 80LL);
        if ( v9 )
        {
          if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 384LL))
            && (unsigned int)IsNonImmersiveBand(a1, v10, v11) )
          {
            return 1LL;
          }
        }
      }
    }
    if ( gptiCurrent == GetProp(a1, (unsigned __int16)gatomBrokeredForeground, 1LL) )
      return 1LL;
    if ( v4 == gppiScreenSaver )
      return 1LL;
    if ( !(unsigned int)IsForegroundLocked() )
    {
      v12 = glinp[9];
      if ( v12 )
      {
        v14 = *(_QWORD *)(gptiCurrent + 384LL);
        if ( *(_QWORD *)(v12 + 384) == v14 )
        {
          if ( (unsigned int)IsDesktopApp(v14, v12) )
            return 1LL;
        }
      }
    }
    if ( (unsigned int)CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a1) )
      return CheckLegacyForegroundAccess();
    *a2 = 1;
    return 0LL;
  }
  gppiLockSFW = 0LL;
  return 1LL;
}
