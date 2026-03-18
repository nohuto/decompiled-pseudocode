/*
 * XREFs of RemoteDisableScreen @ 0x1C012DEBC
 * Callers:
 *     xxxRemoteStopScreenUpdates @ 0x1C012DCD8 (xxxRemoteStopScreenUpdates.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  void *v4; // rsi
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = gspdeskDisconnect;
  v3 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 == v1 )
  {
    if ( v1 )
      gbDesktopLocked = 1;
  }
  else if ( v1 )
  {
    v4 = (void *)v1[3];
    LockObjectAssignment(&gspdeskShouldBeForeground, a1);
    gbDesktopLocked = 1;
    PushW32ThreadLock((__int64)v4, v7, UserDereferenceObject);
    if ( v4 )
      ObfReferenceObject(v4);
    PushW32ThreadLock((__int64)v1, v6, UserDereferenceObject);
    ObfReferenceObject(v1);
    v3 = xxxSwitchDesktop((__int64)v4, (__int64)v1, 2);
    PopAndFreeW32ThreadLock((__int64)v6);
    PopAndFreeW32ThreadLock((__int64)v7);
  }
  return v3;
}
