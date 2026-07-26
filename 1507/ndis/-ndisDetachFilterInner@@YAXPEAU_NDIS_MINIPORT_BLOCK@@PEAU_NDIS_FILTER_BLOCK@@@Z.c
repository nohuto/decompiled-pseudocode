/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00DDCC0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0017988 (ndisHandleFilterHandlersChange.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0018C80 (ndisReferenceMiniportByHandle.c)
 *     ndisSetupWmiNode @ 0x1C001A53C (ndisSetupWmiNode.c)
 *     ndisCloseRef @ 0x1C0020064 (ndisCloseRef.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C003D994 (Template_qqq.c)
 *     ndisDereferenceFilter @ 0x1C00532D0 (ndisDereferenceFilter.c)
 *     ndisFilterAttachCleanUp @ 0x1C0054074 (ndisFilterAttachCleanUp.c)
 *     ndisReferenceFilterByHandle @ 0x1C005480C (ndisReferenceFilterByHandle.c)
 *     WPP_SF_qqZZ @ 0x1C005676C (WPP_SF_qqZZ.c)
 *     Template_jcqjzzz @ 0x1C006BBA0 (Template_jcqjzzz.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 *     ndisFInvokeDetach @ 0x1C00CF2AC (ndisFInvokeDetach.c)
 *     ndisFNotifyDetach @ 0x1C00CF314 (ndisFNotifyDetach.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00DDD94 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
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
    if ( ndisReferenceMiniportByHandle(a1, 0, 39) )
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
      if ( (unsigned __int8)byte_1C0085310 >= 4u )
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
