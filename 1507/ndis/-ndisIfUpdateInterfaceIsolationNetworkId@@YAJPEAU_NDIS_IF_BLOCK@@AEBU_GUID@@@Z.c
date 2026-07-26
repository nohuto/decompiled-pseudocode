/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z @ 0x1C0010228
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0010024 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     NdisMSetInterfaceCompartment @ 0x1C003D830 (NdisMSetInterfaceCompartment.c)
 * Callees:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z @ 0x1C001A38C (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A7548 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceIsolationNetworkId(struct _NDIS_IF_BLOCK *a1, const struct _GUID *a2)
{
  KIRQL v4; // bl
  int updated; // edi
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  updated = ndisIfUpdateInterfaceIsolationNetworkIdLocked(a1, a2);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( updated < 0 )
    return (unsigned int)updated;
  v7[0] = 0LL;
  v7[1] = &a1->NetworkGuid;
  v7[2] = 16LL;
  ((void (__fastcall *)(struct _NDIS_IF_BLOCK *, _QWORD, _QWORD *, _QWORD))ndisNsiNotifyClientInterfaceChange)(
    a1,
    0LL,
    v7,
    0LL);
  return 0LL;
}
