/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C01EFB80
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 * Callees:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00393F0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 */

__int64 xxxDeferredDesktopRotation()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdi
  _QWORD v4[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+38h] [rbp-20h] BYREF

  v0 = *(_QWORD **)(gptiCurrent + 416LL);
  v1 = v0[1];
  if ( v1 && (*(_DWORD *)(v1 + 260) & 2) != 0 )
  {
    v2 = v0[38];
    v0[38] = 0LL;
    *(_DWORD *)(v1 + 260) &= ~2u;
    if ( v2 )
      PushW32ThreadLock(v2, v5, (__int64)Win32FreePool);
    PushW32ThreadLock((__int64)v0, v4, (__int64)UserDereferenceObject);
    ObfReferenceObject(v0);
    xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v0, v2, *(_WORD *)(gpsi + 7284LL), 1u);
    PopAndFreeW32ThreadLock((__int64)v4);
    if ( v2 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v5);
  }
  return 0LL;
}
