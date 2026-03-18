/*
 * XREFs of ExpTypeToPriority @ 0x1400D11BC
 * Callers:
 *     ExQueueWorkItemEx @ 0x1400A8A00 (ExQueueWorkItemEx.c)
 *     ExTryQueueWorkItem @ 0x1400C30E0 (ExTryQueueWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x1400D1174 (ExQueueWorkItemFromIo.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010D6EC (ExTryQueueWorkItemFromIo.c)
 *     ExQueueWorkItemExFromIo @ 0x14022E85C (ExQueueWorkItemExFromIo.c)
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
