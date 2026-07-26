/*
 * XREFs of ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001FF1C
 * Callers:
 *     ndisOidPostPacketFilter @ 0x1C0019A80 (ndisOidPostPacketFilter.c)
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001F5D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 */

__int64 __fastcall ndisNsiScheduleIfBlockRodChangeNotification(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v7; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rsi
  KIRQL v11; // bl

  v7 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6977444Eu);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = PoolWithTag;
    PoolWithTag[10] = a1;
    PoolWithTag[1] = ndisNsiQueuedIfBlockRodChangeNotification;
    PoolWithTag[11] = a2;
    *((_DWORD *)PoolWithTag + 24) = a3;
    *((_DWORD *)PoolWithTag + 25) = a4;
    v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 1440), 0xAu);
    ++*(_DWORD *)(a1 + 1304);
    KeReleaseSpinLock(&ndisIfListLock, v11);
    ndisScheduleWorkItemInternal(v10);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
