/*
 * XREFs of ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402CB460
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 */

void __fastcall xxxSoundSentryTimer(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  struct tagWND *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 21032), 1);
  v6 = W32GetUserSessionState(v5, v4);
  v8 = v6;
  if ( !v3 )
    *(_DWORD *)(v6 + 21048) = 3;
  if ( *(_DWORD *)(v6 + 21048) == 1 )
  {
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v3);
    xxxFlashWindow((__int64)v3, 0LL, 0);
    goto LABEL_12;
  }
  v9 = (unsigned int)(*(_DWORD *)(v6 + 21048) - 2);
  if ( *(_DWORD *)(v6 + 21048) == 2 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(v3) )
    {
      v10 = W32GetUserSessionState(v12, v11) + 21052;
      goto LABEL_7;
    }
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v3);
    xxxRedrawWindow(v3, 0LL, 0LL, 645);
LABEL_12:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v6 + 21048) == 3 )
  {
    v10 = 0LL;
LABEL_7:
    xxxRedrawWindow(0LL, v10, 0LL, 66181);
  }
LABEL_13:
  *(_DWORD *)(v8 + 21048) = 0;
  *(_QWORD *)(W32GetUserSessionState(v7, v9) + 21032) = 0LL;
  v15 = W32GetUserSessionState(v14, v13);
  FindTimer(0LL, *(_QWORD *)(v15 + 21040), 4u, 1, 0LL);
  *(_QWORD *)(W32GetUserSessionState(v17, v16) + 21040) = 0LL;
}
