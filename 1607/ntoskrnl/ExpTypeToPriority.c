/*
 * XREFs of ExpTypeToPriority @ 0x1400CF05C
 * Callers:
 *     ExQueueWorkItemEx @ 0x1400A6F80 (ExQueueWorkItemEx.c)
 *     ExTryQueueWorkItem @ 0x1400C0F70 (ExTryQueueWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x1400CF014 (ExQueueWorkItemFromIo.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010DC50 (ExTryQueueWorkItemFromIo.c)
 *     ExQueueWorkItemExFromIo @ 0x14022E688 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return (unsigned int)ExpBuiltinPriorities[a1];
}
