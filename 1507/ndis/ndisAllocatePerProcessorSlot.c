/*
 * XREFs of ndisAllocatePerProcessorSlot @ 0x1C000DBCC
 * Callers:
 *     NdisAllocateRWLock @ 0x1C000DB10 (NdisAllocateRWLock.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0019AD0 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocateOpenBlock @ 0x1C00A6788 (ndisAllocateOpenBlock.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C001143C (ndisAllocatePerProcessorPageDescriptor.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C005FF60 (ndisAllocateFreeSlotFromDescriptor.c)
 */

__int64 __fastcall ndisAllocatePerProcessorSlot(unsigned int a1)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rdx
  KIRQL v4; // si
  int v5; // ecx
  __int64 v6; // rcx
  __int64 FreeSlotFromDescriptor; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 PerProcessorPageDescriptor; // rax
  __int64 v12; // r8
  _LIST_ENTRY *v13; // r9
  _LIST_ENTRY *v14; // rax

  if ( (a1 & 0xFE000000) == 0xFE000000 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  Flink = ndisPerProcessorDescriptorList.Flink;
  v4 = v2;
  while ( Flink != &ndisPerProcessorDescriptorList )
  {
    v5 = (int)Flink[1].Flink;
    if ( v5 != -16777217 )
    {
      v6 = v5 & 0x1FFFFFF;
      FreeSlotFromDescriptor = (__int64)&Flink[256] + 8 * v6;
      LODWORD(Flink[1].Flink) = *((_DWORD *)&Flink[1].Flink + v6 + 1);
      *((_DWORD *)&Flink[1].Flink + v6 + 1) = a1;
      if ( FreeSlotFromDescriptor )
        goto LABEL_6;
    }
    Flink = Flink->Flink;
  }
  FreeSlotFromDescriptor = 0LL;
  PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
  if ( PerProcessorPageDescriptor )
  {
    FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(
                               PerProcessorPageDescriptor,
                               a1,
                               v12,
                               PerProcessorPageDescriptor);
    v14 = ndisPerProcessorDescriptorList.Flink;
    v13->Flink = ndisPerProcessorDescriptorList.Flink;
    v13->Blink = &ndisPerProcessorDescriptorList;
    if ( v14->Blink != &ndisPerProcessorDescriptorList )
      __fastfail(3u);
    v14->Blink = v13;
    ndisPerProcessorDescriptorList.Flink = v13;
  }
LABEL_6:
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v4);
  if ( FreeSlotFromDescriptor && ndisMaxNumberOfProcessors )
  {
    v8 = (_QWORD *)FreeSlotFromDescriptor;
    v9 = ndisMaxNumberOfProcessors;
    do
    {
      *v8 = 0LL;
      v8 += 512;
      --v9;
    }
    while ( v9 );
  }
  return FreeSlotFromDescriptor;
}
