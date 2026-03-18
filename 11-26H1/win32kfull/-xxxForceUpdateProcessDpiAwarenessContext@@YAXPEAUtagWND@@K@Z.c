/*
 * XREFs of ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x140218948
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x140218B1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x140218E4C (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 */

void __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // rdi
  int v5; // edx
  unsigned int *v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  struct tagBWL *v9; // r14
  __int64 v10; // rdx
  __int64 *i; // rsi
  struct tagWND *v12; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  _QWORD v16[3]; // [rsp+48h] [rbp-20h] BYREF

  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
    TraceChildWindowDpiTelemetry(a1, *((_QWORD *)a1 + 13), 2LL);
    v5 = *(_DWORD *)(v4 + 1056);
    v6 = (unsigned int *)(v4 + 268);
    if ( !v5 )
      *(_DWORD *)(v4 + 1060) = *v6;
    *(_DWORD *)(v4 + 1064) = *v6;
    *(_DWORD *)(v4 + 1056) = v5 + 1;
    *v6 = a2;
    if ( (a2 & 0xF) == 1 )
      *(_WORD *)(v4 + 272) = (a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness(0LL);
    v7 = *(_QWORD **)(v4 + 656);
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v14, v7);
    xxxForceUpdateWindowTreeDpiAwarenessContext(a1, a2, 1);
    if ( v7 )
      v8 = (_QWORD *)v7[2];
    else
      v8 = 0LL;
    while ( v8 )
    {
      v9 = BuildHwndList(*(struct tagWND **)(v8[1] + 24LL), 1LL, 0LL, 1);
      if ( v9 )
      {
        Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v16, v8);
        for ( i = (__int64 *)((char *)v9 + 32); *i != 1; ++i )
        {
          v12 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
          if ( v12 && *(_QWORD *)(*((_QWORD *)v12 + 2) + 456LL) == v4 )
            xxxForceUpdateWindowTreeDpiAwarenessContext(v12, a2, 1);
        }
        FreeHwndList(v9, v10);
        v8 = (_QWORD *)v8[4];
        if ( v16[2] != -1LL )
          PopAndFreeW32ThreadLock((__int64)v16);
      }
    }
    if ( v15 != -1 )
    {
      PopAndFreeW32ThreadLock((__int64)v14);
      v15 = -1LL;
    }
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
}
