/*
 * XREFs of RemoteDisableScreen @ 0x1C00EC3F0
 * Callers:
 *     xxxRemoteStopScreenUpdates @ 0x1C00EC208 (xxxRemoteStopScreenUpdates.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  unsigned int v6; // ebx
  void *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = gspdeskDisconnect;
  v6 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  if ( a1 == v4 )
  {
    if ( v4 )
      gbDesktopLocked = 1;
  }
  else if ( v4 )
  {
    v7 = (void *)v4[3];
    LockObjectAssignment(&gspdeskShouldBeForeground, a1);
    gbDesktopLocked = 1;
    PushW32ThreadLock((__int64)v7, v18, UserDereferenceObject, v8);
    if ( v7 )
      ObfReferenceObject(v7);
    PushW32ThreadLock((__int64)v4, v17, UserDereferenceObject, v9);
    ObfReferenceObject(v4);
    v6 = xxxSwitchDesktop((__int64)v7, (__int64)v4, 2, 0);
    PopAndFreeW32ThreadLock((__int64)v17, v10, v11, v12);
    PopAndFreeW32ThreadLock((__int64)v18, v13, v14, v15);
  }
  return v6;
}
