/*
 * XREFs of xxxFlashEnabledPopup @ 0x1401B1004
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140012F10 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     DWP_GetEnabledPopup @ 0x1401AF13C (DWP_GetEnabledPopup.c)
 *     xxxMessageBeep @ 0x1401B1154 (xxxMessageBeep.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(const struct tagWND *a1, __int64 a2)
{
  struct tagWND *EnabledPopup; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned __int16 *v8; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 20980) & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    v4 = EnabledPopup;
    if ( EnabledPopup )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)EnabledPopup);
      v7 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904) + 4984LL) >> 3;
      v8 = (unsigned __int16 *)UPDWORDPointer(8196LL);
      xxxFlashWindow(v4, (*v8 << 16) | 3u, v7);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  return xxxMessageBeep(0LL);
}
