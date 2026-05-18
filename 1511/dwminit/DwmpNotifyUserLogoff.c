/*
 * XREFs of DwmpNotifyUserLogoff @ 0x1800032F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000159C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003D40 (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x180004674 (DwmpRequestUnloadUserRegKeys.c)
 */

__int64 DwmpNotifyUserLogoff()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    v1 = DwmpRequestUnloadUserRegKeys();
    v0 = v1;
    if ( v1 < 0 )
      DoStackCapture(v1, 0x658u);
  }
  TraceLoggingWriteEtw(8, v0, 0LL);
  ReleaseSRWLockShared(&gDwmStateLock);
  return v0;
}
