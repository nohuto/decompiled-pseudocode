/*
 * XREFs of ndisDereferenceFilter @ 0x1C00532D0
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0054074 (ndisFilterAttachCleanUp.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C00549F0 (ndisStackExpansionFallbackWorker.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceFilterDriver @ 0x1C0014580 (ndisDereferenceFilterDriver.c)
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C0019450 (NdisNblTrackerDeregisterComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00DCA38 (ndisDeinitializeZeroBasedRef.c)
 */

void __fastcall ndisDereferenceFilter(struct _NDIS_FILTER_BLOCK *P, unsigned __int8 a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rsi
  KIRQL v4; // al
  struct _NDIS_FILTER_BLOCK **p_NextGlobalFilter; // rcx
  struct _NDIS_FILTER_BLOCK *v6; // rdx
  KIRQL v7; // r8
  _NDIS_FILTER_BLOCK **i; // rcx
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rcx
  _UNICODE_STRING *FilterFriendlyName; // rcx
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v12; // rax
  Rtl::KString *v13; // rcx

  if ( ndisDereferenceRef(&P->Ref.SpinLock, a2) )
  {
    FilterDriver = P->FilterDriver;
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    p_NextGlobalFilter = &ndisGlobalFilterList;
    if ( ndisGlobalFilterList )
    {
      while ( 1 )
      {
        v6 = *p_NextGlobalFilter;
        if ( *p_NextGlobalFilter == P )
          break;
        p_NextGlobalFilter = &v6->NextGlobalFilter;
        if ( !v6->NextGlobalFilter )
          goto LABEL_7;
      }
      *p_NextGlobalFilter = P->NextGlobalFilter;
    }
LABEL_7:
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
    v7 = KeAcquireSpinLockRaiseToDpc(&FilterDriver->Lock);
    for ( i = &FilterDriver->FilterQueue; *i; i = &(*i)->NextFilter )
    {
      if ( *i == P )
      {
        *i = P->NextFilter;
        break;
      }
    }
    KeReleaseSpinLock(&FilterDriver->Lock, v7);
    Offload = P->Offload;
    if ( Offload )
    {
      ExFreePoolWithTag(Offload, 0);
      P->Offload = 0LL;
    }
    ndisDeinitializeZeroBasedRef(&P->PnPRef);
    NdisNblTrackerDeregisterComponent((__int64)P->NblTracker);
    FilterFriendlyName = P->FilterFriendlyName;
    P->NblTracker = 0LL;
    if ( FilterFriendlyName )
    {
      ExFreePoolWithTag(FilterFriendlyName, 0);
      P->FilterFriendlyName = 0LL;
    }
    IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)P->IterativeDataPathTracker;
    if ( IterativeDataPathTracker )
    {
      ExFreePoolWithTag(IterativeDataPathTracker, 0);
      P->IterativeDataPathTracker = 0LL;
    }
    v12 = ndisVerifierNdisDispatch;
    P->Header.Type = 0;
    if ( v12 && P->VerifierContext )
    {
      ((void (*)(void))v12->NdisFreeVerifierContext)();
      P->VerifierContext = 0LL;
    }
    v13 = P->FilterInstanceName._p;
    if ( v13 )
      ExFreePoolWithTag(v13, 0x7274534Bu);
    ExFreePoolWithTag(P, 0);
    ndisDereferenceFilterDriver(FilterDriver);
  }
}
