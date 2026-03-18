/*
 * XREFs of ExpQueueWorkItemNode @ 0x14010075C
 * Callers:
 *     ExpQueueWorkItem @ 0x140100684 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExpNewThreadNecessary @ 0x1401007CC (ExpNewThreadNecessary.c)
 *     KeInsertPriQueue @ 0x1401015B0 (KeInsertPriQueue.c)
 */

LONG __fastcall ExpQueueWorkItemNode(int a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  LONG result; // eax

  v5 = *(_QWORD *)(a3 + 8LL * a4 + 256);
  if ( (v5 & 1) != 0 )
    v5 = 0LL;
  KeInsertPriQueue(v5, a1, a2, a4, 0);
  result = ExpNewThreadNecessary(v5, *(unsigned int *)(v5 + 712));
  if ( (_BYTE)result )
    return KeSetEvent((PRKEVENT)(a3 + 1040), 0, 0);
  return result;
}
