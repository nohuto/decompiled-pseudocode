/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EFB2C
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00D7610 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisCloseRef @ 0x1C00187A0 (ndisCloseRef.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0018E00 (ndisHandleFilterHandlersChange.c)
 *     ndisSetupWmiNode @ 0x1C001A980 (ndisSetupWmiNode.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001D878 (ndisReferenceMiniportByHandle.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisDereferenceFilter @ 0x1C00536C0 (ndisDereferenceFilter.c)
 *     ndisFilterAttachCleanUp @ 0x1C0054464 (ndisFilterAttachCleanUp.c)
 *     ndisReferenceFilterByHandle @ 0x1C00548F4 (ndisReferenceFilterByHandle.c)
 *     WPP_SF_qqZZ @ 0x1C00565FC (WPP_SF_qqZZ.c)
 *     Template_jcqjzzz @ 0x1C006ACA0 (Template_jcqjzzz.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     NdisMSleep @ 0x1C00AAAA0 (NdisMSleep.c)
 *     ndisFInvokeDetach @ 0x1C00C86BC (ndisFInvokeDetach.c)
 *     ndisFNotifyDetach @ 0x1C00C8724 (ndisFNotifyDetach.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00D76E4 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisDetachFilterInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_FILTER_BLOCK *a2)
{
  char v2; // bp
  char v4; // r15
  PVOID v6; // r14
  char *v7; // rbx
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  _NDIS_FILTER_BLOCK *LowerFilter; // rax
  KIRQL v11; // al
  PVOID WnodeEventItem; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x22u, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( ndisReferenceFilterByHandle(a2) )
  {
    v2 = 1;
    if ( ndisReferenceMiniportByHandle(a1, 0) )
    {
      v4 = 1;
      ndisFNotifyDetach((__int64)a2);
      ndisCloseRef(&a2->PnPRef.SpinLock);
      ndisSetupWmiNode(
        (__int64)a1,
        (const void **)a2->FilterFriendlyName,
        a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 4 + a1->BindPaths->Paths[0].Length,
        (__int128 *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL,
        &WnodeEventItem);
      v6 = WnodeEventItem;
      if ( WnodeEventItem )
      {
        v7 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
        memmove(
          v7,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Buffer,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length);
        memmove(
          &v7[a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 2],
          a1->BindPaths->Paths[0].Buffer,
          a1->BindPaths->Paths[0].Length);
        v9 = IoWMIWriteEvent(v6);
        if ( v9 < 0 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_(0x23u, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids);
          if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
            Template_qqq(v8, &FilterRemovalIndicationFailed, &a2->InterfaceGuid, v9, 211, 0);
          ExFreePoolWithTag(v6, 0);
        }
      }
      a2->State = NdisFilterDetaching;
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jcqjzzz(
          (__int64)&a2->Miniport->InterfaceGuid,
          (__int64)a2->FilterInstanceName._p,
          &a2->InterfaceGuid,
          (unsigned __int64)&a2->InterfaceGuid,
          6,
          220,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName._p->Buffer,
          a2->FilterFriendlyName->Buffer);
      ndisFilterWaitForPnPComplete(a2);
      ndisFInvokeDetach((__int64)a2);
      if ( (unsigned __int8)byte_1C0083710 >= 4u )
        WPP_SF_qqZZ(
          0x24u,
          &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids,
          a1,
          a2,
          &a2->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
          a1->pAdapterInstanceName);
      while ( a2->StatusIndicationsQueued )
        NdisMSleep(0x3E8u);
      if ( (a2->Flags & 0x8000) != 0 )
      {
        LowerFilter = a2->LowerFilter;
        if ( LowerFilter )
        {
          a1->MediaType = LowerFilter->MediaType;
          a1->PhysicalMediumType = a2->LowerFilter->PhysicalMediaType;
        }
        else
        {
          a1->MediaType = a1->MiniportMediaType;
          a1->PhysicalMediumType = a1->MiniportPhysicalMediumType;
        }
      }
      v11 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      a2->Flags &= ~0x100u;
      a2->LockThread = 0LL;
      a2->LockDbg = 0;
      LOBYTE(a2->Flags) = 0;
      a2->Flags |= 8u;
      KeReleaseSpinLock(&a2->Lock, v11);
      a2->State = NdisFilterDetached;
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jcqjzzz(
          (__int64)&a2->Miniport->InterfaceGuid,
          (__int64)a2->FilterInstanceName._p,
          &a2->InterfaceGuid,
          (unsigned __int64)&a2->InterfaceGuid,
          0,
          20,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName._p->Buffer,
          a2->FilterFriendlyName->Buffer);
      if ( (a2->Flags & 0x8000) != 0 )
        --a1->MediaChangeFilters;
      ndisFilterAttachCleanUp(a2, (__int64)a1, 1);
      ndisDereferenceMiniport((__int64)a1, 0x26u);
    }
  }
  ndisHandleFilterHandlersChange((__int64)a1);
  if ( v2 )
  {
    a2->Miniport = 0LL;
    ndisDereferenceFilter(a2, 0);
  }
  if ( v4 )
    ndisDereferenceMiniport((__int64)a1, 0x27u);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x25u, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64)a2);
}
