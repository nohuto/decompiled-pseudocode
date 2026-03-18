/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E243C
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01E1F80 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01E2E50 (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01E3234 (xxxDDETrackWindowDying.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxClientFreeDDEHandle @ 0x1C020D6B0 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagFREELIST *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagFREELIST *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = a1;
    v5 = *(_DWORD *)(gptiCurrent + 440LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v4, v12, (__int64)FreeListFree, a4);
      if ( !v5 )
        xxxClientFreeDDEHandle(*((_QWORD *)v4 + 1), *((unsigned int *)v4 + 4));
      PopW32ThreadLock(v12, v6, v7, v8);
      v9 = v4;
      v4 = *(struct tagFREELIST **)v4;
      Win32FreePool(v9, v10, v11);
    }
    while ( v4 );
  }
}
