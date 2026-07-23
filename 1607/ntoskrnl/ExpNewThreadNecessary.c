/*
 * XREFs of ExpNewThreadNecessary @ 0x1400BED20
 * Callers:
 *     ExTryQueueWorkItem @ 0x1400C0F70 (ExTryQueueWorkItem.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010DC50 (ExTryQueueWorkItemFromIo.c)
 *     ExpQueueWorkItemNode @ 0x14022E8B8 (ExpQueueWorkItemNode.c)
 *     ExpWorkerThreadBalanceManager @ 0x140566648 (ExpWorkerThreadBalanceManager.c)
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
