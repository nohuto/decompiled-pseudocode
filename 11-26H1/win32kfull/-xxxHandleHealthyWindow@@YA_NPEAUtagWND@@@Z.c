/*
 * XREFs of ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402CAD94
 * Callers:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x140049010 (xxxSetWindowPosAndBand.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401B8BC8 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002367C (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401B8E04 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall xxxHandleHealthyWindow(struct tagWND *a1, __int64 a2)
{
  int v3; // edi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( GetGhostProp(a1, a2) )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)a1);
    v3 = xxxDestroyCorrespondingGhostWindow(a1);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  return v3 != 0;
}
