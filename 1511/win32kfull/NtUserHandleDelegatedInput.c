/*
 * XREFs of NtUserHandleDelegatedInput @ 0x1C021C750
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0105CC8 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _OWORD v8[4]; // [rsp+28h] [rbp-40h] BYREF

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( a2 - 1 <= 2 )
  {
    if ( (*(_DWORD *)(gptiCurrent + 1072LL) & 0x2000) != 0 )
    {
      if ( a2 != 3 )
      {
        if ( (unsigned __int64)a1 >= W32UserProbeAddress )
          a1 = (_OWORD *)W32UserProbeAddress;
        v8[0] = *a1;
        v8[1] = a1[1];
        v8[2] = a1[2];
        v4 = _HandleDelegatedInput(gptiCurrent, a2, (struct tagMSG *)v8);
      }
    }
    else
    {
      v4 = 0;
      UserSetLastError(5);
    }
  }
  else
  {
    UserSetLastError(87);
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
