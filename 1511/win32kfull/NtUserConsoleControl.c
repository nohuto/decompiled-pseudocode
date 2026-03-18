/*
 * XREFs of NtUserConsoleControl @ 0x1C0073130
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0007BB0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxConsoleControl @ 0x1C0073248 (xxxConsoleControl.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, char *a2, unsigned int a3)
{
  size_t v3; // rbx
  _BYTE *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  _BYTE v11[24]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a3;
  memset(v11, 0, sizeof(v11));
  v6 = v11;
  EnterCrit(0LL, 1LL);
  if ( a1 > 6 )
  {
    v9 = -1073741823;
    UserSetLastStatus(-1073741811, 1);
    goto LABEL_15;
  }
  if ( (unsigned int)v3 > 0x18 )
  {
    v9 = -1073741811;
    goto LABEL_15;
  }
  if ( a2 )
  {
    if ( !(_DWORD)v3 )
    {
LABEL_8:
      memmove(v11, a2, v3);
      goto LABEL_13;
    }
LABEL_5:
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v3] > W32UserProbeAddress || &a2[v3] < a2 )
      *W32UserProbeAddress = 0;
    goto LABEL_8;
  }
  if ( (_DWORD)v3 )
    goto LABEL_5;
  v6 = 0LL;
LABEL_13:
  v9 = xxxConsoleControl(a1, v6, (unsigned int)v3);
  if ( a2 )
  {
    ProbeForWrite(a2, v3, 2u);
    memmove(a2, v6, v3);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
