/*
 * XREFs of SmSetThreadPagePriority @ 0x1400DB534
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14014325C (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 */

__int64 __fastcall SmSetThreadPagePriority(struct _KTHREAD **a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v4; // ebx
  signed __int32 v5; // eax
  int v6; // edx
  unsigned __int32 v7; // ebx
  int v9; // eax

  CurrentThread = *a1;
  if ( !*a1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  v4 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v9 = 2;
    if ( v4 < 2 )
      v9 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
    v4 = v9;
  }
  if ( v4 != a2 )
  {
    v5 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
    v6 = a2 << 12;
    do
    {
      v7 = v5;
      v5 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3,
             v6 | v5 & 0xFFFF8FFF,
             v5);
    }
    while ( v5 != v7 );
    v4 = (v7 >> 12) & 7;
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
      EtwTracePriority((_DWORD)CurrentThread, 1331, v4, a2, 0LL);
  }
  return v4;
}
