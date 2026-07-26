/*
 * XREFs of ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0014890
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C00A1E20 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00CF100 (NdisRegisterProtocol.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015624 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisQueryDriverImageName @ 0x1C00A224C (ndisQueryDriverImageName.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A2E68 (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetDirty@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B3594 (-SetDirty@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisRegisterProtocolDriverCommon(struct _NDIS_PROTOCOL_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // al
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  KIRQL v5; // bl
  __int64 v6; // rcx
  Ndis::BindEngine *v7; // rcx

  a1->OpenQueue = 0LL;
  ndisQueryDriverImageName(&a1->Name, &a1->ImageName);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  a1->NextProtocol = ndisProtocolList;
  ndisProtocolList = a1;
  KeReleaseSpinLock(&ndisProtocolListLock, v2);
  ObfReferenceObject(ndisDriverObject);
  NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(&a1->Bind._p->_t, a1, RunAsynchronous);
  if ( (a1->Flags & 0x80000000) != 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v4 = ndisMiniportList;
    v5 = v3;
    while ( v4 )
    {
      if ( ndisMDoesMiniportNeedCoNdisNdProxy(v4) && v4->PnPDeviceState == NdisPnPDeviceStarted )
      {
        if ( ndisReferenceMiniport(v6, 0x37u) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, v5);
          Ndis::BindEngine::BeginPolicyUpdates(&v4->BindEngine);
          Ndis::BindEngine::SetDirty(&v4->BindEngine);
          Ndis::BindEngine::EndPolicyUpdates(v7);
          Ndis::BindEngine::ApplyBindChanges(&v4->BindEngine, RunAsynchronous, 0);
          v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport((__int64)v4);
        }
      }
      v4 = v4->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v5);
  }
}
