/*
 * XREFs of NdisFDevicePnPEventNotify @ 0x1C0012C90
 * Callers:
 *     ndisFForwardNetDevicePnPEvent @ 0x1C0098330 (ndisFForwardNetDevicePnPEvent.c)
 * Callees:
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0025288 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00548B8 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFDevicePnPEventNotify(NDIS_HANDLE NdisFilterHandle, PNET_DEVICE_PNP_EVENT NetDevicePnPEvent)
{
  KIRQL v4; // bp
  unsigned __int8 *NdisReserved; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v7[7]; // [rsp+48h] [rbp-40h] BYREF

  v7[1] = NdisFilterHandle;
  v7[3] = NetDevicePnPEvent;
  if ( (int)ndisExpandStack(ndisFDevicePnPEventNotifyInternal, v7) < 0 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    NdisReserved = (unsigned __int8 *)NdisFilterHandle + 264;
    *((_DWORD *)NdisFilterHandle + 40) = 2101569;
    if ( *((_QWORD *)NdisFilterHandle + 33) )
    {
      NdisReserved = NetDevicePnPEvent->NdisReserved;
      while ( *(_QWORD *)NetDevicePnPEvent->NdisReserved )
        ;
    }
    *(_QWORD *)NdisReserved = NetDevicePnPEvent;
    *(_QWORD *)NetDevicePnPEvent->NdisReserved = 0LL;
    *(_QWORD *)&NetDevicePnPEvent->NdisReserved[8] = &Event;
    ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    *((_DWORD *)NdisFilterHandle + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v4);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
}
