/*
 * XREFs of ExpNewThreadNecessary @ 0x1401007CC
 * Callers:
 *     ExTryQueueWorkItem @ 0x140100504 (ExTryQueueWorkItem.c)
 *     ExpQueueWorkItemNode @ 0x14010075C (ExpQueueWorkItemNode.c)
 *     ExpWorkerThreadBalanceManager @ 0x140536444 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpNewThreadNecessary(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 704);
  return v2 < (2 * *(_DWORD *)(a1 + 708)) >> 1
      || v2 < a2 && *(_QWORD *)(a1 + 8) == a1 + 8 && (*(_DWORD *)(a1 + 4) || *(int *)(a1 + 708) < 0);
}
