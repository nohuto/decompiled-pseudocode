/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1C0215750
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     FeedbackGetWindowSetting @ 0x1C01D382C (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall NtUserGetWindowFeedbackSetting(
        __int64 a1,
        signed int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  int WindowSetting; // ebx
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+24h] [rbp-54h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-50h]

  v16 = 0;
  EnterSharedCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  if ( v11 )
  {
    if ( a2 && a2 <= 12 && a4 && (a3 & 0xFFFFFFFE) == 0 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + 4 > W32UserProbeAddress || a4 + 4 < a4 )
        *W32UserProbeAddress = 0;
      v13 = *(_DWORD *)a4;
      v16 = v13;
      if ( v13 != 4 )
      {
        ProbeForWrite((volatile void *)a4, 4uLL, 4u);
        *(_DWORD *)a4 = 4;
      }
      if ( Address && v13 < 4 )
      {
        WindowSetting = 0;
        UserSetLastError(122LL);
      }
      else
      {
        v15 = 0;
        WindowSetting = FeedbackGetWindowSetting(v11, a2, a3, &v15);
        if ( Address )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          v10 = v15;
          *Address = v15;
        }
      }
    }
    else
    {
      WindowSetting = 0;
      UserSetLastError(87LL);
    }
  }
  else
  {
    WindowSetting = 0;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return WindowSetting;
}
