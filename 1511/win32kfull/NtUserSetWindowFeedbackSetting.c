/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x1C0079150
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     FeedbackSetWindowSetting @ 0x1C00790D8 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01DBDD8 (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, unsigned __int64 a5)
{
  unsigned int v8; // edi
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // eax
  int v15; // ecx

  v8 = 0;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  v12 = ValidateHwnd(a1);
  if ( !v12 )
    goto LABEL_19;
  if ( !a2 || a2 > 12 || a4 && !a5 || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v15 = 87;
    goto LABEL_23;
  }
  if ( PsGetCurrentProcessWin32Process(v11) != *(_QWORD *)(*(_QWORD *)(v12 + 16) + 376LL) )
  {
    UserSetLastError(5);
    v15 = 0;
LABEL_23:
    UserSetLastError(v15);
    goto LABEL_19;
  }
  if ( a5 )
  {
    v9 = 0;
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a5 + 4 > W32UserProbeAddress || a5 + 4 < a5 )
      *W32UserProbeAddress = 0;
  }
  if ( v9 )
    v13 = FeedbackClearWindowSetting(v12, (unsigned int)a2);
  else
    v13 = FeedbackSetWindowSetting(v12);
  v8 = v13;
LABEL_19:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v8;
}
