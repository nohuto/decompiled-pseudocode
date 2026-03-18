/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x140218B1C
 * Callers:
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x140218948 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x140218B1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x140218B1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbp
  unsigned int v7; // r14d
  struct tagMONITOR *v8; // rax
  struct tagWND *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 UserSessionState; // rax
  __m128i *v17; // rcx
  __m128i v18; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v5 = a2;
  v7 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 288) = a2;
  v8 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  UpdateWindowMonitor(a1, v8);
  v9 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( a3 )
  {
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 464LL),
      0x18u,
      0LL,
      0,
      v5,
      0LL,
      0LL);
    GetDispInfo(v11, v10);
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
    GetMonitorRectForDpi(&v18, *(_QWORD *)(v13 + 96), (WindowCompositedDpiContext >> 8) & 0x1FF);
    v14 = (unsigned __int16)(v18.m128i_i16[4] - v18.m128i_i16[0]);
    v15 = v14 | ((unsigned __int16)(v18.m128i_i16[6] - v18.m128i_i16[2]) << 16);
    UserSessionState = W32GetUserSessionState(v14, v15);
    PostMessage((int)a1, 126, *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 6996LL), v15);
    if ( (((unsigned __int16)((unsigned int)v5 >> 8) ^ (unsigned __int16)(v7 >> 8)) & 0x1FF) != 0 )
    {
      PostEventMessageEx(
        *((struct tagTHREADINFO **)a1 + 2),
        *(struct tagQ **)(*((_QWORD *)a1 + 2) + 464LL),
        9u,
        a1,
        0x1Au,
        0x2AuLL,
        -1LL,
        0LL);
      PostEventMessageEx(
        *((struct tagTHREADINFO **)a1 + 2),
        *(struct tagQ **)(*((_QWORD *)a1 + 2) + 464LL),
        9u,
        a1,
        0x1Au,
        0x2EuLL,
        -1LL,
        0LL);
    }
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 240LL) )
    {
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(&v18, (__int64)a1);
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
      v9 = (struct tagWND *)*((_QWORD *)a1 + 14);
      v17 = &v18;
      goto LABEL_7;
    }
  }
  while ( v9 )
  {
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v9);
    xxxForceUpdateWindowTreeDpiAwarenessContext(v9, v5, 0);
    v9 = (struct tagWND *)*((_QWORD *)v9 + 11);
    v17 = (__m128i *)BugCheckParameter3;
LABEL_7:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>(v17->m128i_i64);
  }
}
