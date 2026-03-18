/*
 * XREFs of NtUserGetDesktopID @ 0x1C0119020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, _QWORD *a2)
{
  int v4; // ebx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  int v11; // edi
  _QWORD *v13; // rax

  v4 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v6);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL);
    goto LABEL_10;
  }
  v10 = a1 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 2 )
        v5 = grpdeskLogon;
      goto LABEL_6;
    }
    v13 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v13 = (_QWORD *)grpdeskRitInput;
  }
  v5 = (_QWORD *)*v13;
LABEL_6:
  if ( v5 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    *a2 = v5[5];
    v4 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v4;
}
