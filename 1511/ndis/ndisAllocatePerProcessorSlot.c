/*
 * XREFs of ndisAllocatePerProcessorSlot @ 0x1C001013C
 * Callers:
 *     NdisAllocateRWLock @ 0x1C0010080 (NdisAllocateRWLock.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001B800 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocateOpenBlock @ 0x1C00A0064 (ndisAllocateOpenBlock.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C00101FC (ndisAllocateFreeSlotFromDescriptor.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0016780 (ndisAllocatePerProcessorPageDescriptor.c)
 */

__int64 __fastcall ndisAllocatePerProcessorSlot(unsigned int a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // r9
  KIRQL v4; // si
  __int64 FreeSlotFromDescriptor; // rbx
  struct _LIST_ENTRY **v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 PerProcessorPageDescriptor; // rax
  _LIST_ENTRY *v11; // r9
  _LIST_ENTRY *v12; // rax

  if ( (a1 & 0xFE000000) == 0xFE000000 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  Flink = ndisPerProcessorDescriptorList.Flink;
  v4 = v2;
  while ( Flink != &ndisPerProcessorDescriptorList )
  {
    FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(Flink, a1);
    if ( FreeSlotFromDescriptor )
      goto LABEL_5;
    Flink = *v6;
  }
  FreeSlotFromDescriptor = 0LL;
LABEL_5:
  if ( !FreeSlotFromDescriptor )
  {
    PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
    if ( PerProcessorPageDescriptor )
    {
      FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, a1);
      v12 = ndisPerProcessorDescriptorList.Flink;
      v11->Flink = ndisPerProcessorDescriptorList.Flink;
      v11->Blink = &ndisPerProcessorDescriptorList;
      if ( v12->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      v12->Blink = v11;
      ndisPerProcessorDescriptorList.Flink = v11;
    }
  }
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v4);
  if ( FreeSlotFromDescriptor && ndisMaxNumberOfProcessors )
  {
    v7 = (_QWORD *)FreeSlotFromDescriptor;
    v8 = ndisMaxNumberOfProcessors;
    do
    {
      *v7 = 0LL;
      v7 += 512;
      --v8;
    }
    while ( v8 );
  }
  return FreeSlotFromDescriptor;
}
