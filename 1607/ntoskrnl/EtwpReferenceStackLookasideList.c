/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x1406A82E8
 * Callers:
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpUpdateStackTracing @ 0x1406A834C (EtwpUpdateStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

struct _SLIST_ENTRY *EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  struct _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_1403292D0);
  do
  {
    result = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x820uLL, 0x6C777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, result);
    result = (struct _SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_1403292D4);
  }
  while ( (int)result < v0 );
  return result;
}
