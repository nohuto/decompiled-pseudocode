/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x1C00A7670
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     FeedbackSetWindowSetting @ 0x1C00A77A4 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01D37D8 (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, unsigned __int64 a5)
{
  int v8; // edi
  unsigned int v9; // r15d
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  int v14; // eax
  __int64 v16; // rcx

  v8 = 0;
  v9 = 0;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  v13 = ValidateHwnd(a1);
  if ( !v13 )
    goto LABEL_19;
  if ( !a2 || a2 > 12 || a4 && !a5 || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v16 = 87LL;
    goto LABEL_23;
  }
  if ( PsGetCurrentProcessWin32Process(v12, v11) != *(_QWORD *)(*(_QWORD *)(v13 + 16) + 376LL) )
  {
    UserSetLastError(5LL);
    v16 = 0LL;
LABEL_23:
    UserSetLastError(v16);
    goto LABEL_19;
  }
  if ( a5 )
  {
    v10 = 0;
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a5 + 4 > W32UserProbeAddress || a5 + 4 < a5 )
      *W32UserProbeAddress = 0;
    v9 = *(_DWORD *)a5;
  }
  if ( v10 )
    v14 = FeedbackClearWindowSetting(v13, (unsigned int)a2);
  else
    v14 = FeedbackSetWindowSetting(v13, (unsigned int)a2, v9);
  v8 = v14;
LABEL_19:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v8;
}
