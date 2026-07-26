/*
 * XREFs of ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0069C60
 * Callers:
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0004BA0 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C00056B0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0005764 (ndisIfReferenceMiniport.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001EE0C (ndisIfFindInterfaceByNetLuid.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceMiniportByNetLuid(union _NET_LUID_LH a1, enum _NDIS_MP_REFTAG a2)
{
  KIRQL v2; // di
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)a1.Value);
  v4 = (__int64)InterfaceByNetLuid;
  if ( InterfaceByNetLuid )
  {
    v5 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid);
    v7 = v5;
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 124) & 0x1080110) == 0 && *(_DWORD *)(v5 + 1520) == 1 && ndisReferenceMiniport(v5) )
      {
        ndisIfDereferenceMiniport(v4, v6, 1u);
        KeReleaseSpinLock(&ndisIfListLock, v2);
        return (struct _NDIS_MINIPORT_BLOCK *)v7;
      }
      ndisIfDereferenceMiniport(v4, v6, 1u);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v2);
  return 0LL;
}
