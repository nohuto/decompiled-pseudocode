/*
 * XREFs of NtUserGetDesktopID @ 0x1C00F3540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  int v12; // edi
  _QWORD *v14; // rax

  v4 = 0;
  v5 = 0LL;
  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5);
    goto LABEL_10;
  }
  v11 = a1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 2 )
        v5 = grpdeskLogon;
      goto LABEL_6;
    }
    v14 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v14 = (_QWORD *)grpdeskRitInput;
  }
  v5 = (_QWORD *)*v14;
LABEL_6:
  if ( v5 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    *a2 = v5[5];
    v4 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v4;
}
