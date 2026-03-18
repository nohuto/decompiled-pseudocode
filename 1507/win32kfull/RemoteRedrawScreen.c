/*
 * XREFs of RemoteRedrawScreen @ 0x1C012ED14
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C012D870 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 *     RemotePassthruDisable @ 0x1C0202AD0 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0202B80 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0202D00 (RemoteShadowStart.c)
 *     NtUserRemoteRedrawScreen @ 0x1C021F540 (NtUserRemoteRedrawScreen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 */

__int64 RemoteRedrawScreen()
{
  void *v0; // rbx
  PVOID v1; // rdx
  _QWORD v3[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v4[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    if ( gspdeskShouldBeForeground )
    {
      gbDesktopLocked = 0;
      v0 = (void *)*((_QWORD *)gspdeskShouldBeForeground + 3);
      if ( (*((_DWORD *)gspdeskShouldBeForeground + 8) & 8) == 0 )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        PushW32ThreadLock((__int64)v0, v4, UserDereferenceObject);
        if ( v0 )
          ObfReferenceObject(v0);
        PushW32ThreadLock((__int64)gspdeskShouldBeForeground, v3, UserDereferenceObject);
        v1 = gspdeskShouldBeForeground;
        if ( gspdeskShouldBeForeground )
        {
          ObfReferenceObject(gspdeskShouldBeForeground);
          v1 = gspdeskShouldBeForeground;
        }
        xxxSwitchDesktop((__int64)v0, (__int64)v1, 2);
        PopAndFreeW32ThreadLock((__int64)v3);
        PopAndFreeW32ThreadLock((__int64)v4);
      }
      LockObjectAssignment(&gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
