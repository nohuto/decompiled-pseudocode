/*
 * XREFs of NtUserOpenClipboard @ 0x1C00DBD20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _OpenClipboard @ 0x1C00DBE18 (_OpenClipboard.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C0106E3C (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  _QWORD v19[4]; // [rsp+28h] [rbp-20h] BYREF
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v20 = 0;
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
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 836) )
  {
    v14 = gptiCurrent;
    v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 24LL);
    if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent) )
    {
      v16 = *(_QWORD *)(v15 + 80);
      if ( !v16 || *(_QWORD *)(v16 + 16) != v14 )
      {
        v17 = 5;
LABEL_19:
        UserSetLastError(v17);
        goto LABEL_11;
      }
    }
  }
  if ( v7 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v10 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 376LL);
    if ( *(_QWORD *)(v10 + 640) != *(_QWORD *)(CurrentProcessWin32Process + 640) )
    {
      if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v10) + 640) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 376LL);
        if ( *(_QWORD *)(v18 + 640)
          || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v18) + 640) + 32LL) & 4) != 0 )
        {
          UserSetLastError(87);
          v17 = 0;
          goto LABEL_19;
        }
      }
    }
  }
  v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v19;
  v19[1] = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v4 = OpenClipboard(v7, &v20);
  ThreadUnlock1(v12, v11);
  v5 = W32UserProbeAddress;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (_DWORD *)W32UserProbeAddress;
  *a2 = v20;
LABEL_11:
  UserSessionSwitchLeaveCrit(v5, v6);
  return v4;
}
