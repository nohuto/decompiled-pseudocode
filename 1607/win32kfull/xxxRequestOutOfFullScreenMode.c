/*
 * XREFs of xxxRequestOutOfFullScreenMode @ 0x1C01E598C
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 */

__int64 xxxRequestOutOfFullScreenMode()
{
  struct tagWND *v0; // rdx
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v5[5]; // [rsp+50h] [rbp-28h] BYREF

  v0 = gspwndFullScreen;
  v1 = 0;
  if ( gspwndFullScreen )
  {
    v5[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v5;
    v5[1] = v0;
    ++*((_DWORD *)v0 + 2);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(gspwndFullScreen, 1030LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v3, v2);
    while ( ghSwitcher )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
    if ( gspwndFullScreen && gbFullScreen == 1 )
      return (unsigned int)-1073741823;
  }
  return v1;
}
