/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01EB8CC
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01EB418 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01EC0CC (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01EC2C4 (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01EC6A8 (xxxDDETrackWindowDying.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxClientFreeDDEHandle @ 0x1C0214940 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  __int64 v2; // rdi
  struct tagFREELIST *v3; // rcx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = *(_DWORD *)(gptiCurrent + 440LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v1, v4, (__int64)FreeListFree);
      if ( !v2 )
        xxxClientFreeDDEHandle(*((_QWORD *)v1 + 1), *((unsigned int *)v1 + 4));
      PopW32ThreadLock(v4);
      v3 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v3);
    }
    while ( v1 );
  }
}
