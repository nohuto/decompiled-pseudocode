/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C005B850
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qLq @ 0x1C003F298 (WPP_SF_qLq.c)
 *     ndisFreeSharedMemory @ 0x1C00D37DC (ndisFreeSharedMemory_ea_1C00D37DC.c)
 */

void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_qLq(0x22u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportAdapterHandle, Length);
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
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_qLq(0x23u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportAdapterHandle, Length);
}
