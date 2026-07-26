/*
 * XREFs of NdisMAllocateSharedMemoryAsync @ 0x1C005B670
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueWorkItem @ 0x1C000FD5C (ndisQueueWorkItem.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsync(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  _LIST_ENTRY *PoolWithTag; // rdi
  int v9; // ebx
  NDIS_HANDLE v10; // rsi
  NDIS_HANDLE v11; // rcx

  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_qD(0x20u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportAdapterHandle, Length);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x7361444Eu);
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_13;
  }
  if ( *(_BYTE *)MiniportAdapterHandle == 17 )
  {
    v10 = (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 63);
    v11 = MiniportAdapterHandle;
    if ( !v10 || !*((_QWORD *)v10 + 3) )
      goto LABEL_11;
    if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u
       ? *((_QWORD *)v10 + 5) == 0LL
       : *(_QWORD *)(*((_QWORD *)MiniportAdapterHandle + 477) + 240LL) == 0LL )
    {
      goto LABEL_11;
    }
  }
  else if ( *(_BYTE *)MiniportAdapterHandle != 15
         || (v10 = MiniportAdapterHandle,
             v11 = (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 1),
             !*((_QWORD *)MiniportAdapterHandle + 3))
         || !*((_QWORD *)MiniportAdapterHandle + 5) )
  {
LABEL_11:
    v9 = -1073741823;
LABEL_12:
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_13;
  }
  if ( !ndisReferenceMiniport((__int64)v11, 0x3Fu) )
  {
    v9 = -1073741670;
    goto LABEL_12;
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 18);
  PoolWithTag[2].Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  LODWORD(PoolWithTag[2].Blink) = Length;
  BYTE4(PoolWithTag[2].Blink) = Cached;
  PoolWithTag[3].Blink = (_LIST_ENTRY *)Context;
  PoolWithTag->Flink = 0LL;
  PoolWithTag[1].Flink = (_LIST_ENTRY *)ndisMQueuedAllocateSharedHandler;
  PoolWithTag[1].Blink = PoolWithTag;
  ndisQueueWorkItem(PoolWithTag);
  v9 = 259;
LABEL_13:
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_d(0x21u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, v9);
  return v9;
}
