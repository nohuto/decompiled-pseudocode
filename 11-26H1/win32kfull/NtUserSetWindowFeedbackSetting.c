/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x14000F930
 * Callers:
 *     <none>
 * Callees:
 *     FeedbackSetWindowSetting @ 0x14000FAA4 (FeedbackSetWindowSetting.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     FeedbackClearWindowSetting @ 0x140288980 (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, _DWORD *Address)
{
  int v9; // edi
  unsigned int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // eax
  __int64 v18; // rcx

  v9 = 0;
  v10 = 0;
  EnterCrit(0LL, 0LL);
  v12 = ValidateHwnd(a1);
  if ( !v12 )
    goto LABEL_17;
  if ( !a2 || a2 > 13 || a4 && !Address || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v18 = 87LL;
    goto LABEL_20;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v14 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v14 != *(_QWORD *)(*(_QWORD *)(v12 + 16) + 456LL) )
  {
    UserSetLastError(5LL);
    v18 = 0LL;
LABEL_20:
    UserSetLastError(v18);
    goto LABEL_17;
  }
  if ( Address )
  {
    v15 = 0;
    ProbeForRead(Address, 4uLL, 4u);
    v10 = *Address;
  }
  else
  {
    v15 = 1;
  }
  if ( v15 )
    v16 = FeedbackClearWindowSetting(v12, (unsigned int)a2);
  else
    v16 = FeedbackSetWindowSetting(v12, (unsigned int)a2, v10);
  v9 = v16;
LABEL_17:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
