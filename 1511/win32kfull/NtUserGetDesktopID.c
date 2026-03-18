/*
 * XREFs of NtUserGetDesktopID @ 0x1C00F8BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  int v14; // edi
  _QWORD *v16; // rax

  v4 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5);
    goto LABEL_10;
  }
  v13 = a1 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 2 )
        v5 = grpdeskLogon;
      goto LABEL_6;
    }
    v16 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v16 = (_QWORD *)grpdeskRitInput;
  }
  v5 = (_QWORD *)*v16;
LABEL_6:
  if ( v5 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    *a2 = v5[5];
    v4 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v4;
}
