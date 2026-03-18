/*
 * XREFs of RemoteRedrawScreen @ 0x1C014E7A8
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C009DC30 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 *     RemotePassthruDisable @ 0x1C0202E70 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0202F20 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02030A0 (RemoteShadowStart.c)
 *     NtUserRemoteRedrawScreen @ 0x1C021F360 (NtUserRemoteRedrawScreen.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
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
