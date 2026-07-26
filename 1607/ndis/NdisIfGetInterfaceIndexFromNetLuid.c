/*
 * XREFs of NdisIfGetInterfaceIndexFromNetLuid @ 0x1C0042430
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0014670 (ndisIfFindInterfaceByNetLuid.c)
 */

NDIS_STATUS __stdcall NdisIfGetInterfaceIndexFromNetLuid(NET_LUID NetLuid, PNET_IFINDEX pIfIndex)
{
  NDIS_STATUS v3; // ebx
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  KIRQL v5; // r8

  *pIfIndex = 0;
  v3 = -1071448021;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)NetLuid.Value);
  if ( InterfaceByNetLuid )
  {
    v3 = 0;
    *pIfIndex = HIDWORD(InterfaceByNetLuid->Flink);
  }
  KeReleaseSpinLock(&ndisIfListLock, v5);
  return v3;
}
