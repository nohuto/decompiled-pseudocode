/*
 * XREFs of ndisInitializePerProcessorSlotAllocator @ 0x1C00FC0F4
 * Callers:
 *     NdisDllInitialize @ 0x1C00FC060 (NdisDllInitialize.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0016780 (ndisAllocatePerProcessorPageDescriptor.c)
 */

_LIST_ENTRY *ndisInitializePerProcessorSlotAllocator()
{
  _LIST_ENTRY *result; // rax
  _LIST_ENTRY *Flink; // rcx

  KeInitializeSpinLock(&ndisPerProcessorDescriptorLock);
  qword_1C0083968 = (__int64)&ndisPerProcessorDescriptorList;
  ndisPerProcessorDescriptorList.Flink = &ndisPerProcessorDescriptorList;
  result = (_LIST_ENTRY *)ndisAllocatePerProcessorPageDescriptor();
  if ( result )
  {
    Flink = ndisPerProcessorDescriptorList.Flink;
    result->Flink = ndisPerProcessorDescriptorList.Flink;
    result->Blink = &ndisPerProcessorDescriptorList;
    if ( Flink->Blink != &ndisPerProcessorDescriptorList )
      __fastfail(3u);
    Flink->Blink = result;
    ndisPerProcessorDescriptorList.Flink = result;
  }
  return result;
}
