/*
 * XREFs of ExpQueueWorkItemNode @ 0x14022E8B8
 * Callers:
 *     ExpQueueWorkItem @ 0x14005F840 (ExpQueueWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     ExpNewThreadNecessary @ 0x1400BED20 (ExpNewThreadNecessary.c)
 */

char __fastcall ExpQueueWorkItemNode(__int64 a1, unsigned int a2, struct _KEVENT *a3, __int64 a4)
{
  __int64 v5; // rbx
  char result; // al

  v5 = *((_QWORD *)&a3[13].Header.WaitListHead.Flink + (int)a4);
  if ( (v5 & 1) != 0 )
    v5 = 0LL;
  KeInsertPriQueue((_DISPATCHER_HEADER *)v5, a1, (_QWORD *)a2, a4, 0);
  result = ExpNewThreadNecessary(v5, *(_DWORD *)(v5 + 712));
  if ( result )
    return KeSetEvent(a3 + 76, 0, 0);
  return result;
}
