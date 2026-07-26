/*
 * XREFs of ndisIfReferenceMiniport @ 0x1C0005764
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003C8D8 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003D128 (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003D550 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003D8B0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C003FCD8 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0069C60 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C0094AE0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 */

__int64 __fastcall ndisIfReferenceMiniport(__int64 a1)
{
  __int64 v2; // rdi
  KIRQL v3; // si

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a1 + 1403) )
  {
    v2 = *(_QWORD *)(a1 + 1416);
    ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 1448));
    ++*(_DWORD *)(a1 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v3);
  return v2;
}
