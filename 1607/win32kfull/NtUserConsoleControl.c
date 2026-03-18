/*
 * XREFs of NtUserConsoleControl @ 0x1C009A870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     xxxConsoleControl @ 0x1C009A9BC (xxxConsoleControl.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     _W32ExceptionHandler @ 0x1C01BF6B8 (_W32ExceptionHandler.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, char *a2, unsigned int a3)
{
  size_t v3; // rbx
  _BYTE *v6; // r14
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v11[24]; // [rsp+38h] [rbp-40h] BYREF

  v3 = a3;
  memset(v11, 0, sizeof(v11));
  v6 = v11;
  v7 = -1073741823;
  EnterCrit(0LL, 1LL);
  if ( a1 <= 6 )
  {
    if ( (unsigned int)v3 <= 0x18 )
    {
      if ( a2 && (_DWORD)v3 )
      {
        if ( ((unsigned __int8)a2 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a2[v3] > W32UserProbeAddress || &a2[v3] < a2 )
          *W32UserProbeAddress = 0;
        memmove(v11, a2, v3);
      }
      else
      {
        if ( a1 )
        {
          v7 = -1073741811;
          goto LABEL_19;
        }
        v6 = 0LL;
      }
      v7 = xxxConsoleControl(a1, v6, (unsigned int)v3);
      if ( a2 )
      {
        ProbeForWrite(a2, v3, 2u);
        memmove(a2, v6, v3);
      }
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    UserSetLastStatus(-1073741811, 1);
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
