/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01EB3AC
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01EAEF8 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01EBBAC (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01EBDA4 (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01EC184 (xxxDDETrackWindowDying.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxClientFreeDDEHandle @ 0x1C0214A98 (xxxClientFreeDDEHandle.c)
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
    v2 = *(_DWORD *)(gptiCurrent + 448LL) & 1;
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
