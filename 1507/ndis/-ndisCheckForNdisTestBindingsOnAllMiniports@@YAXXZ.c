/*
 * XREFs of ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055C68
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1C00D01B0 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C000F414 (ndisDereferenceDriver.c)
 *     ndisReferenceRef @ 0x1C001900C (ndisReferenceRef.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ndisIsMiniportReady @ 0x1C004A0C8 (ndisIsMiniportReady.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 */

void ndisCheckForNdisTestBindingsOnAllMiniports(void)
{
  KIRQL v0; // al
  struct _NDIS_M_DRIVER_BLOCK *v1; // rdi
  KIRQL v2; // bl
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v4; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v6; // si
  enum Ndis::ReadBindingsOptions::Flags v7; // r8d
  KIRQL v8; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v1 = ndisMiniDriverList;
  v2 = v0;
  if ( ndisMiniDriverList )
  {
    do
    {
      NextDriver = v1->NextDriver;
      if ( ndisReferenceRef(&v1->Ref.SpinLock, 9u) )
      {
        KeReleaseSpinLock(&ndisMiniDriverListLock, v2);
        v4 = KeAcquireSpinLockRaiseToDpc(&v1->Ref.SpinLock);
        MiniportQueue = v1->MiniportQueue;
        v6 = v4;
        while ( MiniportQueue )
        {
          if ( ndisIsMiniportReady(MiniportQueue) && ndisReferenceMiniport((__int64)MiniportQueue, 0x33u) )
          {
            KeReleaseSpinLock(&v1->Ref.SpinLock, v6);
            Ndis::BindRegistry::Reload((Ndis::BindRegistry *)MiniportQueue, (struct _NDIS_MINIPORT_BLOCK *)1, v7);
            v6 = KeAcquireSpinLockRaiseToDpc(&v1->Ref.SpinLock);
            ndisDereferenceMiniport((__int64)MiniportQueue, 0x33u);
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        KeReleaseSpinLock(&v1->Ref.SpinLock, v6);
        v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        NextDriver = v1->NextDriver;
        v2 = v8;
        ndisDereferenceDriver((__int64)v1, 1);
      }
      v1 = NextDriver;
    }
    while ( NextDriver );
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v2);
}
