/*
 * XREFs of RaidAdjustDeferredQueueDepth @ 0x1C001073C
 * Callers:
 *     RaidInitializeDeferredQueue @ 0x1C00106F0 (RaidInitializeDeferredQueue.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAdjustDeferredQueueDepth(union _SLIST_HEADER *a1)
{
  int v2; // edi
  struct _SLIST_ENTRY *Pool; // rax

  if ( LOWORD(a1->Alignment) >= 0xAu )
    return 0LL;
  v2 = 0;
  while ( 1 )
  {
    Pool = (struct _SLIST_ENTRY *)RaidAllocatePool(
                                    NonPagedPoolNx,
                                    *((unsigned __int16 *)&a1->HeaderX64 + 1),
                                    0x66446152u,
                                    a1[2].Region);
    if ( !Pool )
      break;
    LODWORD(Pool[1].Next) = 134684675;
    ExpInterlockedPushEntrySList(a1 + 5, Pool);
    if ( ++v2 >= 10 - (unsigned int)LOWORD(a1->Alignment) )
    {
      LOWORD(a1->Alignment) += v2;
      return 0LL;
    }
  }
  LOWORD(a1->Alignment) += v2;
  return 3221225495LL;
}
