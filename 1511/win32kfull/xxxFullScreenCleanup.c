/*
 * XREFs of xxxFullScreenCleanup @ 0x1C00F6450
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *xxxFullScreenCleanup()
{
  void *result; // rax
  __int64 v1; // rdx
  struct tagWND *v2; // rcx
  struct _LARGE_STRING *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  result = PsGetCurrentThreadId();
  if ( result == ghSwitcher )
  {
    if ( gfGdiEnabled )
    {
      gdwPUDFlags &= ~0x20000000u;
      result = (void *)zzzLockWindowUpdate2(0LL, 1);
    }
    else
    {
      HMAssignmentUnlock(&gspwndFullScreen);
      gbFullScreen = 1;
      v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
      v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v6;
      v6[1] = v1;
      if ( v1 )
        ++*(_DWORD *)(v1 + 8);
      v2 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
      if ( v2 )
        v3 = *(struct _LARGE_STRING **)v2;
      else
        v3 = 0LL;
      xxxSendNotifyMessage(v2, 0x3Au, 2uLL, v3, 1);
      result = (void *)ThreadUnlock1(v5, v4);
    }
    ghSwitcher = 0LL;
    gfRedoFullScreenSwitch = 0;
  }
  return result;
}
