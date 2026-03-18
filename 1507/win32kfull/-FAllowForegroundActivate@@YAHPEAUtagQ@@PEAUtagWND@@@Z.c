/*
 * XREFs of ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C0044BF8
 * Callers:
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 * Callees:
 *     FRemoveForegroundActivate @ 0x1C0044FE4 (FRemoveForegroundActivate.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00454E8 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsForegroundLocked @ 0x1C0045658 (IsForegroundLocked.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00FFE6C (IsImmersiveBandOrShellManaged.c)
 */

__int64 __fastcall FAllowForegroundActivate(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // rcx

  v4 = *(_QWORD *)(gptiCurrent + 384LL);
  v5 = 0;
  if ( !(unsigned int)FRemoveForegroundActivate(gptiCurrent)
    || *(_QWORD *)(gptiCurrent + 416LL) != grpdeskRitInput
    || (struct tagQ *)gpqForeground == a1
    || (unsigned int)IsForegroundLocked()
    || (*((_BYTE *)a2 + 51) & 8) != 0
    || *((_DWORD *)a2 + 76) == 15 )
  {
    return 0LL;
  }
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) && *(int *)(v4 + 12) >= 0 )
  {
    if ( (!(unsigned int)IsImmersiveBroker(v4)
       || !(unsigned int)IsImmersiveBandOrShellManaged(a2)
       || (*((_BYTE *)a2 + 290) & 0x20) != 0)
      && (!(unsigned int)IsImmersiveBroker(v4)
       || !gpqForeground
       || (v7 = *(_QWORD *)(gpqForeground + 80LL)) == 0
       || !(unsigned int)IsImmersiveBandOrShellManaged(v7)) )
    {
      LOBYTE(v5) = (unsigned int)CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a2) != 0;
      return v5;
    }
    return 0LL;
  }
  return 1LL;
}
