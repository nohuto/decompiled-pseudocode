/*
 * XREFs of NdisMSetInterfaceCompartment @ 0x1C0042530
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C000FD90 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0011F48 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

__int64 __fastcall NdisMSetInterfaceCompartment(__int64 a1, const struct _GUID *a2)
{
  unsigned int v4; // edi
  KIRQL v5; // si
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _GUID NetworkGuid; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(a2);
  if ( CompartmentBlockByGuid )
  {
    NetworkGuid = CompartmentBlockByGuid->LoopbackNetwork->NetworkGuid;
    KeReleaseSpinLock(&ndisIfListLock, v5);
    if ( (int)ndisIfUpdateInterfaceIsolationNetworkId(*(struct _NDIS_IF_BLOCK **)(a1 + 4096), &NetworkGuid, 1u) < 0 )
      return (unsigned int)-1073741823;
    return v4;
  }
  else
  {
    KeReleaseSpinLock(&ndisIfListLock, v5);
    return (unsigned int)-1073741823;
  }
}
