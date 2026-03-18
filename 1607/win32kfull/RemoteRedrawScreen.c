/*
 * XREFs of RemoteRedrawScreen @ 0x1C0154254
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 *     RemotePassthruDisable @ 0x1C01FA180 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C01FA230 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01FA3B0 (RemoteShadowStart.c)
 *     NtUserRemoteRedrawScreen @ 0x1C0218EB0 (NtUserRemoteRedrawScreen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 */

__int64 RemoteRedrawScreen()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  void *v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r9
  PVOID v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    if ( gspdeskShouldBeForeground )
    {
      gbDesktopLocked = 0;
      v3 = (void *)*((_QWORD *)gspdeskShouldBeForeground + 3);
      if ( (*((_DWORD *)gspdeskShouldBeForeground + 8) & 8) == 0 )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0, v1, v2);
        PushW32ThreadLock((__int64)v3, v15, UserDereferenceObject, v4);
        if ( v3 )
          ObfReferenceObject(v3);
        PushW32ThreadLock((__int64)gspdeskShouldBeForeground, v14, UserDereferenceObject, v5);
        v6 = gspdeskShouldBeForeground;
        if ( gspdeskShouldBeForeground )
        {
          ObfReferenceObject(gspdeskShouldBeForeground);
          v6 = gspdeskShouldBeForeground;
        }
        xxxSwitchDesktop((__int64)v3, (__int64)v6, 2, 0);
        PopAndFreeW32ThreadLock((__int64)v14, v7, v8, v9);
        PopAndFreeW32ThreadLock((__int64)v15, v10, v11, v12);
      }
      LockObjectAssignment(&gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
