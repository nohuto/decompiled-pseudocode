/*
 * XREFs of NtUserfnGETWINDOWDATA @ 0x1402C1170
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z @ 0x140225C28 (-GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     RtlWriteUCharToUser @ 0x1403E22DC (RtlWriteUCharToUser.c)
 */

__int64 __fastcall NtUserfnGETWINDOWDATA(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 WindowData; // rbx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // r14
  __int64 v17; // rax
  const struct tagUIPI_INFO *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax

  WindowData = 0LL;
  v12 = PtiCurrent((__int64)a1);
  if ( a6 == 689 && a4 < 3 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v15 = v14 & CurrentProcessWin32Process;
    }
    v16 = (*(_DWORD *)(v15 + 12) & 0x80) != 0;
    v17 = PsGetCurrentProcessWin32Process(v14);
    v18 = (const struct tagUIPI_INFO *)v17;
    if ( v17 )
      v18 = (const struct tagUIPI_INFO *)(-(__int64)(*(_QWORD *)v17 != 0LL) & v17);
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
    if ( (const struct tagUIPI_INFO *)v19 == v18 )
    {
      LOBYTE(v19) = 1;
      RtlWriteUCharToUser(a5, v19);
    }
    else
    {
      v20 = *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 42LL);
      if ( (v20 & 0xFFFF2FFF) != 0 )
      {
        UserSessionState = W32GetUserSessionState(v20, v19);
        WindowData = (*(__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, __int64, __int64))(UserSessionState + 71088))(
                       a1,
                       a2,
                       a3,
                       a4,
                       a5);
        if ( a4 == 2 )
        {
          v23 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
          if ( (*(_DWORD *)(v23 + 12) & 0x80u) != 0 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 1) == 0 || a3 )
              v24 = a3 + 4;
            else
              v24 = 17LL;
            v25 = W32GetUserSessionState(v23, v22);
            return ((*(__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, __int64, __int64))(v25 + 71088))(
                      a1,
                      a2,
                      v24,
                      2LL,
                      a5) << 32) | WindowData;
          }
        }
      }
      else if ( UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)(*((_QWORD *)v12 + 57) + 864LL),
                  (const struct tagUIPI_INFO *)(v19 + 864),
                  v18) )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 456LL));
        WindowData = GetWindowData(a1, a4, a3, v16);
        KeDetachProcess();
      }
    }
  }
  return WindowData;
}
