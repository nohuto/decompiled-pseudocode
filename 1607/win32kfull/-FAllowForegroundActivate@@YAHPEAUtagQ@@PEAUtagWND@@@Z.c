/*
 * XREFs of ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00AB1B8
 * Callers:
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00AAB58 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsForegroundLocked @ 0x1C00AACD4 (IsForegroundLocked.c)
 *     FRemoveForegroundActivate @ 0x1C00AAF94 (FRemoveForegroundActivate.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C012D2CC (IsImmersiveBandOrShellManaged.c)
 */

__int64 __fastcall FAllowForegroundActivate(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx

  v4 = *(_QWORD *)(gptiCurrent + 376LL);
  v5 = 0;
  if ( !(unsigned int)FRemoveForegroundActivate(gptiCurrent)
    || *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput
    || (struct tagQ *)gpqForeground == a1
    || (unsigned int)IsForegroundLocked()
    || (*((_BYTE *)a2 + 51) & 8) != 0
    || *((_DWORD *)a2 + 76) == 15 )
  {
    return 0LL;
  }
  if ( IAMThreadAccessGranted(gptiCurrent) || *(int *)(v4 + 12) < 0 )
    return 1LL;
  if ( (unsigned int)IsImmersiveBroker(v4)
    && (unsigned int)IsImmersiveBandOrShellManaged(a2)
    && (*((_BYTE *)a2 + 290) & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)IsImmersiveBroker(v4) )
  {
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gpqForeground + 88LL);
      if ( v9 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(v9) )
          return 0LL;
      }
    }
  }
  LOBYTE(v5) = (unsigned int)CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a2, v7, v8) != 0;
  return v5;
}
