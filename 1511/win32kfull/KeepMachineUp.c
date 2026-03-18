/*
 * XREFs of KeepMachineUp @ 0x1C00847A4
 * Callers:
 *     UpdateInputGlobalsEx @ 0x1C0084630 (UpdateInputGlobalsEx.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1C010B090 (SetTimerCoalescingTolerance.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

char KeepMachineUp()
{
  _DWORD *v0; // rcx
  char result; // al
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h]

  v0 = (_DWORD *)gPowerTransitionsState;
  result = gProtocolType;
  if ( *((_DWORD *)&gPowerTransitionsState + 1) && !gProtocolType )
    return PoSetUserPresent(4LL);
  if ( *((_DWORD *)&gPowerTransitionsState + 3) && !gProtocolType )
  {
    result = PoSetUserPresent(4LL);
    v0 = (_DWORD *)gPowerTransitionsState;
    *((_DWORD *)&gPowerTransitionsState + 3) = 0;
  }
  if ( *v0 && (result = gPowerDisplayState, *((_DWORD *)&gPowerDisplayState + 9) != 2)
    || v0[2]
    || (result = gfSwitchInProgress, gfSwitchInProgress) )
  {
    if ( !gdwRITdemonLockState )
      goto LABEL_6;
    result = SetTimerCoalescingTolerance(0LL);
  }
  else
  {
    v2 = 4;
    v3 = 4LL;
    result = QueuePowerRequest(&v2, 0LL);
  }
  v0 = (_DWORD *)gPowerTransitionsState;
LABEL_6:
  if ( v0[2] )
  {
    result = *gpbIgnoreSleepInput;
    if ( !*gpbIgnoreSleepInput )
      return SetPendingInput(4LL);
  }
  return result;
}
