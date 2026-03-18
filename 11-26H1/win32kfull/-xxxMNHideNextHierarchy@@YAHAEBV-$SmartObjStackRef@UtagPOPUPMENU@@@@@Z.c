/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x14024D374
 * Callers:
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     xxxMNButtonDown @ 0x14024D270 (xxxMNButtonDown.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 a1)
{
  struct tagWND *v2; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(**(_QWORD **)a1 + 24LL) )
    return 0LL;
  v2 = *(struct tagWND **)(**(_QWORD **)a1 + 24LL);
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v2);
  if ( v2 != *(struct tagWND **)(**(_QWORD **)a1 + 56LL) )
    xxxSendMessage(v2, 0x1E4u);
  xxxSendMessage(v2, 0x1E5u);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  return 1LL;
}
