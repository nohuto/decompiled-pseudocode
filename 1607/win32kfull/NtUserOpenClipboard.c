/*
 * XREFs of NtUserOpenClipboard @ 0x1C00F8EE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _OpenClipboard @ 0x1C00F8FE4 (_OpenClipboard.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011E8E8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // r11
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v21[4]; // [rsp+28h] [rbp-20h] BYREF
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v22 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_11;
  }
  else
  {
    v7 = 0LL;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(v6, v5) + 828) )
  {
    v15 = gptiCurrent;
    v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 24LL);
    if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
    {
      v17 = *(_QWORD *)(v16 + 80);
      if ( !v17 || *(_QWORD *)(v17 + 16) != v15 )
      {
        v18 = 5LL;
LABEL_19:
        UserSetLastError(v18);
        goto LABEL_11;
      }
    }
  }
  if ( v7 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8);
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 376LL);
    if ( *(_QWORD *)(v11 + 632) != *(_QWORD *)(CurrentProcessWin32Process + 632) )
    {
      if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v11, CurrentProcessWin32Process) + 632) )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 376LL);
        if ( *(_QWORD *)(v20 + 632)
          || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v20, v19) + 632) + 32LL) & 4) != 0 )
        {
          UserSetLastError(87LL);
          v18 = 0LL;
          goto LABEL_19;
        }
      }
    }
  }
  v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v21;
  v21[1] = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v4 = OpenClipboard(v7, &v22);
  ThreadUnlock1(v13, v12);
  v6 = W32UserProbeAddress;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (_DWORD *)W32UserProbeAddress;
  *a2 = v22;
LABEL_11:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
