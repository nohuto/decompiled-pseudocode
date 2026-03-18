/*
 * XREFs of ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C008CE74
 * Callers:
 *     xxxSetFocus @ 0x1C0080BD4 (xxxSetFocus.c)
 *     xxxActivateWindow @ 0x1C008CA64 (xxxActivateWindow.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     IsForegroundLocked @ 0x1C008D52C (IsForegroundLocked.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C008D54C (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     FRemoveForegroundActivate @ 0x1C008E514 (FRemoveForegroundActivate.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00944C8 (IsImmersiveBandOrShellManaged.c)
 */

__int64 __fastcall FAllowForegroundActivate(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // rcx

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
  if ( !IAMThreadAccessGranted(gptiCurrent) && *(int *)(v4 + 12) >= 0 )
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
