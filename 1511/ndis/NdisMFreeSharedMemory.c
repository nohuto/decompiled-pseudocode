/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C005B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qLq @ 0x1C00409D8 (WPP_SF_qLq.c)
 *     ndisFreeSharedMemory @ 0x1C00CCF6C (ndisFreeSharedMemory_ea_1C00CCF6C.c)
 */

void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  if ( (unsigned __int8)byte_1C008371C >= 4u )
    WPP_SF_qLq(0x22u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportAdapterHandle, Length);
  if ( KeGetCurrentIrql() >= 2u )
  {
    ndisReferenceMiniportNoCheck((__int64)MiniportAdapterHandle, 0x40u);
    *((NDIS_PHYSICAL_ADDRESS *)VirtualAddress + 8) = PhysicalAddress;
    *((_QWORD *)VirtualAddress + 4) = MiniportAdapterHandle;
    *((_DWORD *)VirtualAddress + 10) = Length;
    *((_BYTE *)VirtualAddress + 44) = Cached;
    *((_QWORD *)VirtualAddress + 6) = VirtualAddress;
    *(_QWORD *)VirtualAddress = 0LL;
    *((_QWORD *)VirtualAddress + 2) = ndisMQueuedFreeSharedHandler;
    *((_QWORD *)VirtualAddress + 3) = VirtualAddress;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)VirtualAddress, CriticalWorkQueue);
  }
  else
  {
    ndisFreeSharedMemory((ULONG_PTR)MiniportAdapterHandle, PhysicalAddress.QuadPart);
  }
  if ( (unsigned __int8)byte_1C008371C >= 4u )
    WPP_SF_qLq(0x23u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportAdapterHandle, Length);
}
