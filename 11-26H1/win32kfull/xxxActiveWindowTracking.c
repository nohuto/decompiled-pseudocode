/*
 * XREFs of xxxActiveWindowTracking @ 0x14008DA14
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140012F10 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14008D494 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     IsForegroundLocked @ 0x1401A3D64 (IsForegroundLocked.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401B7DA0 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     GetActiveTrackPwnd @ 0x140296108 (GetActiveTrackPwnd.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x14029D8E8 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 ActiveTrackPwnd; // rax
  struct tagWND *v8; // rdi
  int v9; // esi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  BugCheckParameter3[0] = -1LL;
  v2 = 0;
  BugCheckParameter3[1] = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL);
  v5 = *(_DWORD *)(v4 + 436);
  if ( (v5 & 0x200000) != 0 )
  {
    *(_DWORD *)(v4 + 436) = v5 & 0xFFDFFFFF;
    if ( !(unsigned int)IsForegroundLocked(v4, a2) )
    {
      ActiveTrackPwnd = GetActiveTrackPwnd(a1);
      v8 = (struct tagWND *)ActiveTrackPwnd;
      if ( ActiveTrackPwnd )
      {
        if ( a1 != ActiveTrackPwnd )
          Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, ActiveTrackPwnd);
        v9 = xxxSendMessage(v8, 0x21u);
        if ( v9 == 1 || v9 == 2 )
        {
          v2 = 1;
          if ( xxxTrackingActivateWindow(v8) )
          {
            if ( v9 == 2 )
              v9 = 1;
            v2 = v9;
          }
        }
        else if ( v9 == 4 )
        {
          v2 = 1;
        }
      }
    }
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  return v2;
}
