/*
 * XREFs of ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0069B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0069414 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006A850 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisAoAcTempRefWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // al
  _NDIS_TMP_REF_REASON TempRefReason; // ecx
  KIRQL v6; // si

  AoAc = a2->AoAc;
  v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  TempRefReason = AoAc->TempRefReason;
  v6 = v4;
  if ( TempRefReason )
  {
    if ( TempRefReason == NdisAoAcTempRefWake )
      ++AoAc->CsSpuriousWakes;
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, 1);
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_qD(0x24u, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, (__int64)a2, AoAc->ActiveRef);
  }
  AoAc->TempDerefInProgress = 0;
  KeReleaseSpinLock(&AoAc->Lock, v6);
  ndisNicQuietCheckRef(a2);
  ndisDereferenceMiniport((__int64)a2, 2u);
}
