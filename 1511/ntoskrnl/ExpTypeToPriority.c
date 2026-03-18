/*
 * XREFs of ExpTypeToPriority @ 0x140101B8C
 * Callers:
 *     ExTryQueueWorkItem @ 0x140100504 (ExTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x140100640 (ExQueueWorkItemEx.c)
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
