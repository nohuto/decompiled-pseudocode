/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x1406E9954
 * Callers:
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpUpdateStackTracing @ 0x1406E99B8 (EtwpUpdateStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_1403565B0);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x820uLL, 0x6C777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_1403565B4);
  }
  while ( (int)result < v0 );
  return result;
}
