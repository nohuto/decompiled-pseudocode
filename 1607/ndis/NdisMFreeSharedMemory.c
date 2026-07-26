/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C005F400
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qLq @ 0x1C004EBD8 (WPP_SF_qLq.c)
 *     ndisFreeSharedMemory @ 0x1C00D2C9C (ndisFreeSharedMemory_ea_1C00D2C9C.c)
 */

void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_qLq(0x22u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)MiniportAdapterHandle, Length);
  if ( KeGetCurrentIrql() )
  {
    ndisReferenceMiniportNoCheck((__int64)MiniportAdapterHandle, 0x42u);
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
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_qLq(0x23u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)MiniportAdapterHandle, Length);
}
