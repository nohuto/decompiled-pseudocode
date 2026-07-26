/*
 * XREFs of ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00194B8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisUpdateOperationalStatus @ 0x1C00145CC (ndisUpdateOperationalStatus.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisPostProcessRestartParametersAfterProtocols(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  unsigned int *SupportedOidList; // rcx
  _NDIS_RESTART_ATTRIBUTES *Next; // rcx
  KIRQL v6; // al
  unsigned __int64 *p_Lock; // rcx
  unsigned int PnPFlags; // edx
  _NDIS_RESTART_ATTRIBUTES *v9; // rbx

  if ( a2->Attributes.Oid )
  {
    ndisUpdateOperationalStatus(a1);
    SupportedOidList = a2->General.SupportedOidList;
    if ( SupportedOidList )
    {
      ExFreePoolWithTag(SupportedOidList, 0);
      a2->General.SupportedOidList = 0LL;
    }
    Next = a2->Attributes.Next;
    if ( a2->Attributes.Next )
    {
      do
      {
        v9 = Next->Next;
        ExFreePoolWithTag(Next, 0);
        Next = v9;
      }
      while ( v9 );
    }
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    p_Lock = &a1->Lock;
    a1->MiniportThread = KeGetCurrentThread();
    PnPFlags = a1->PnPFlags;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 3933306;
    a1->LockDbg = 0;
    if ( (PnPFlags & 0x10) != 0 )
    {
      KeReleaseSpinLock(p_Lock, v6);
    }
    else
    {
      KeReleaseSpinLock(p_Lock, v6);
      if ( IoWMIRegistrationControl(a1->DeviceObject, 4u) )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_q(37LL, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, a1);
      }
    }
  }
}
