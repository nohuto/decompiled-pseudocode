/*
 * XREFs of ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D368
 * Callers:
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C006CE40 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 */

void __fastcall ndisAoAcPmInitTempRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v2; // al
  KIRQL v3; // bl

  AoAc = a1->AoAc;
  v2 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->TempRefReason = NdisAoAcTempRefPmInit;
  v3 = v2;
  ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
  KeReleaseSpinLock(&AoAc->Lock, v3);
}
