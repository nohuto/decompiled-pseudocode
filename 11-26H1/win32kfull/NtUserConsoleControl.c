/*
 * XREFs of NtUserConsoleControl @ 0x14025F390
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxConsoleControl @ 0x140278BE4 (xxxConsoleControl.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, void *a2, unsigned int a3)
{
  size_t v3; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edi
  size_t v8; // rsi
  __int128 Src; // [rsp+38h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]

  v3 = a3;
  Src = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 <= 6 )
  {
    if ( (unsigned int)v3 <= 0x18 )
    {
      if ( a2 && (_DWORD)v3 )
      {
        if ( ((unsigned __int8)a2 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = v3;
        RtlCopyFromUser(&Src, a2, v3);
        v7 = xxxConsoleControl(a1, &Src, (unsigned int)v3);
        RtlCopyToUser(a2, &Src, v8);
      }
      else
      {
        v7 = -1073741811;
      }
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = -1073741823;
    UserSetLastStatus(-1073741811, 1);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
