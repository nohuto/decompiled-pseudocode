/*
 * XREFs of NtUserHandleDelegatedInput @ 0x140094090
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x140094164 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // r9
  int v7; // ebx
  _OWORD v9[4]; // [rsp+28h] [rbp-40h] BYREF

  EnterCrit(0LL, 0LL);
  if ( a2 - 1 > 2 )
  {
    UserSetLastError(87);
    v7 = 0;
  }
  else
  {
    v6 = PtiCurrent(v4);
    if ( (*((_DWORD *)v6 + 340) & 0x2000LL) != 0 )
    {
      if ( a2 == 3 )
      {
        v7 = 1;
      }
      else
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_OWORD *)MmUserProbeAddress;
        v9[0] = *a1;
        v9[1] = a1[1];
        v9[2] = a1[2];
        v7 = _HandleDelegatedInput(v6, a2, v9);
      }
    }
    else
    {
      v7 = 0;
      UserSetLastError(5);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
