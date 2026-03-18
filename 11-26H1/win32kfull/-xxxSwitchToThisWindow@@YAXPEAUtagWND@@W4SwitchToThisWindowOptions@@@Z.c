/*
 * XREFs of ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x14029D7A0
 * Callers:
 *     NtUserSwitchToThisWindow @ 0x14027A9A0 (NtUserSwitchToThisWindow.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x14027CE6C (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x14008BAC4 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

char __fastcall xxxSwitchToThisWindow(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = a2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) )
  {
    if ( (v2 & 1) != 0 )
    {
      v6 = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18928) + 128LL);
      if ( v6 )
      {
        v7 = *((_QWORD *)v6 + 5);
        if ( (*(_BYTE *)(v7 + 24) & 8) == 0 && (*(_BYTE *)(v7 + 20) & 0x20) == 0 && _GetNextQueueWindow(v6, 0, 1) )
        {
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v6);
          xxxSetWindowPos(v6, 1LL, 0LL, 0LL, 0, 0, 16403);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        }
      }
    }
  }
  LOBYTE(v8) = xxxSetForegroundWindowWithOptions(a1, 2LL, 0, (v2 & 4) != 0);
  if ( (v2 & 2) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v8 + 31) & 0x20) != 0 )
    {
      LOBYTE(v8) = IsThreadHung(*(const struct tagTHREADINFO **)(a1 + 16), v9);
      if ( !(_BYTE)v8 )
        LOBYTE(v8) = PostEventMessageEx(
                       *(struct tagTHREADINFO **)(a1 + 16),
                       *(struct tagQ **)(*(_QWORD *)(a1 + 16) + 464LL),
                       7u,
                       (struct tagWND *)a1,
                       0x112u,
                       0xF120uLL,
                       0LL,
                       0LL);
    }
  }
  return v8;
}
