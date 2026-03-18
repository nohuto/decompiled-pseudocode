/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1402CD650
 * Callers:
 *     xxxDDETrackPostHook @ 0x14026E294 (xxxDDETrackPostHook.c)
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402CD114 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientFreeDDEHandle @ 0x1402D81A4 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  __int64 v2; // rcx
  signed __int32 v3; // edi
  struct tagTHREADINFO *v4; // rax
  struct tagFREELIST *v5; // rcx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent((__int64)a1) + 130, 0, 0) & 1;
    do
    {
      v4 = PtiCurrent(v2);
      v8[0] = *((_QWORD *)v4 + 47);
      *((_QWORD *)v4 + 47) = v8;
      v8[2] = FreeListFree;
      v8[1] = v1;
      if ( !v3 )
        xxxClientFreeDDEHandle(*((_QWORD *)v1 + 1), *((unsigned int *)v1 + 4));
      v5 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v5);
      v7 = PtiCurrent(v6);
      v2 = v8[0];
      *((_QWORD *)v7 + 47) = v8[0];
    }
    while ( v1 );
  }
}
