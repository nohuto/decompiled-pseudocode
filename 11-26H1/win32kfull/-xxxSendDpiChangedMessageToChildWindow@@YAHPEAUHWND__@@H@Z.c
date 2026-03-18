/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x14021F578
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x14026CBFC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(__int64 a1, int a2)
{
  __int64 v3; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = HMValidateHandleNoSecure(a1, 1);
  v4 = (struct tagWND *)v3;
  if ( !v3 )
    return 0LL;
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_DWORD *)(v5 + 288) & 0xF;
  if ( v6 != 2 && v6 != 3 )
    return 0LL;
  if ( *(_WORD *)(v5 + 286) )
    return 0LL;
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v4);
  xxxSendMessage(v4, 739 - (a2 != 0));
  if ( a2 )
    xxxSetWindowPos(v4, 0LL, 0LL, 0LL, 0, 0, 55);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  return 1LL;
}
