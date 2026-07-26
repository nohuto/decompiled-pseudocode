/*
 * XREFs of ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006E760
 * Callers:
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C12C (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C00098EC (ndisIfReferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0009E74 (ndisIfDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0014670 (ndisIfFindInterfaceByNetLuid.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceMiniportByNetLuid(union _NET_LUID_LH a1, unsigned __int8 a2)
{
  KIRQL v3; // di
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx

  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)a1.Value);
  v5 = (__int64)InterfaceByNetLuid;
  if ( InterfaceByNetLuid )
  {
    v6 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid, 1u);
    v8 = v6;
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 124) & 0x1080110) == 0 && *(_DWORD *)(v6 + 1520) == 1 && ndisReferenceMiniport(v6, a2) )
      {
        ndisIfDereferenceMiniport(v5, v7, 1u);
        KeReleaseSpinLock(&ndisIfListLock, v3);
        return (struct _NDIS_MINIPORT_BLOCK *)v8;
      }
      ndisIfDereferenceMiniport(v5, v7, 1u);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v3);
  return 0LL;
}
