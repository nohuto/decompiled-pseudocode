/*
 * XREFs of ViHookDmaAdapter @ 0x14073E9E0
 * Callers:
 *     VfGetDmaAdapter @ 0x14073BD44 (VfGetDmaAdapter.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ExInterlockedInsertHeadList @ 0x14012292C (ExInterlockedInsertHeadList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ViAllocateContiguousMemory @ 0x14073D098 (ViAllocateContiguousMemory.c)
 *     ViCopyDeviceDescription @ 0x14073DD18 (ViCopyDeviceDescription.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 */

ULONG_PTR __fastcall ViHookDmaAdapter(PVOID Object, __int64 a2, int a3, char a4)
{
  ULONG_PTR AdapterInformationInternal; // rbx
  PVOID PoolWithTag; // rax

  AdapterInformationInternal = ViGetAdapterInformationInternal((__int64)Object, 0);
  if ( !AdapterInformationInternal )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x566C6148u);
    AdapterInformationInternal = (ULONG_PTR)PoolWithTag;
    if ( !PoolWithTag )
      return AdapterInformationInternal;
    memset(PoolWithTag, 0, 0x140uLL);
    *(_DWORD *)(AdapterInformationInternal + 36) = 0;
    *(_QWORD *)(AdapterInformationInternal + 16) = Object;
    ExInterlockedInsertHeadList((PLIST_ENTRY)&ViAdapterList, (PLIST_ENTRY)AdapterInformationInternal, &Lock);
    ObfReferenceObject(Object);
    *(_QWORD *)(AdapterInformationInternal + 72) = 0LL;
    *(_QWORD *)(AdapterInformationInternal + 64) = AdapterInformationInternal + 56;
    *(_QWORD *)(AdapterInformationInternal + 56) = AdapterInformationInternal + 56;
    *(_QWORD *)(AdapterInformationInternal + 96) = 0LL;
    *(_QWORD *)(AdapterInformationInternal + 88) = AdapterInformationInternal + 80;
    *(_QWORD *)(AdapterInformationInternal + 80) = AdapterInformationInternal + 80;
    *(_QWORD *)(AdapterInformationInternal + 120) = 0LL;
    *(_QWORD *)(AdapterInformationInternal + 112) = AdapterInformationInternal + 104;
    *(_QWORD *)(AdapterInformationInternal + 104) = AdapterInformationInternal + 104;
    *(_QWORD *)(AdapterInformationInternal + 144) = 0LL;
    *(_QWORD *)(AdapterInformationInternal + 136) = AdapterInformationInternal + 128;
    *(_QWORD *)(AdapterInformationInternal + 128) = AdapterInformationInternal + 128;
    ViCopyDeviceDescription(AdapterInformationInternal + 192, (int *)a2);
    *(_DWORD *)(AdapterInformationInternal + 152) = a3;
    if ( *(_DWORD *)(a2 + 20) == 1 && *(_DWORD *)(a2 + 16) < 8u || !*(_BYTE *)(a2 + 4) )
      *(_BYTE *)(AdapterInformationInternal + 34) = 1;
    *(_QWORD *)(AdapterInformationInternal + 280) = 0LL;
    if ( *(_BYTE *)(a2 + 4) && *(_BYTE *)(a2 + 5) )
    {
      if ( ViDoubleBufferDma )
        ViAllocateContiguousMemory(AdapterInformationInternal);
    }
    else
    {
      *(_BYTE *)(AdapterInformationInternal + 33) = 1;
    }
    *(_QWORD *)(AdapterInformationInternal + 48) = *((_QWORD *)Object + 1);
    *((_QWORD *)Object + 1) = &ViDmaOperations;
  }
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 36));
  return AdapterInformationInternal;
}
