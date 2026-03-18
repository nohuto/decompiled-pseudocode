/*
 * XREFs of xxxChangeClipboardChain @ 0x1402CF520
 * Callers:
 *     NtUserChangeClipboardChain @ 0x140253800 (NtUserChangeClipboardChain.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxChangeClipboardChain(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  struct tagWINDOWSTATION *v5; // rsi
  __int64 *v6; // r14
  unsigned int v7; // ebx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = CheckClipboardAccess(a1);
  if ( !v5 )
    return 0LL;
  if ( *(struct tagTHREADINFO **)(a1 + 16) != PtiCurrent(v4) )
    return 0LL;
  v6 = (__int64 *)((char *)v5 + 72);
  if ( !*((_QWORD *)v5 + 9) )
    return 0LL;
  if ( a2 && *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 456LL) + 656LL) != v5 )
    a2 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v10, v5);
  if ( a1 == *v6 )
  {
    BugCheckParameter3[0] = (ULONG_PTR)v5 + 72;
    BugCheckParameter3[1] = a2;
    HMAssignmentLock(BugCheckParameter3, 0LL);
    v7 = 1;
  }
  else
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *v6);
    v7 = xxxSendMessage((struct tagWND *)*v6, 0x30Du);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  if ( v10[2] != -1LL )
    PopAndFreeW32ThreadLock((__int64)v10);
  return v7;
}
