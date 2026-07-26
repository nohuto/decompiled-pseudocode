/*
 * XREFs of ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C006D2F4
 * Callers:
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C006E224 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     NdisReleaseNicActive @ 0x1C006EF20 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C006CE40 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C006D2E0 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

unsigned __int8 __fastcall ndisAoAcIsTempRefNeededAfterDeref(struct _NDIS_MINIPORT_AOAC *a1)
{
  __int64 v1; // rcx

  if ( ndisAoAcIsD0Required(a1) )
    return 0;
  *(_DWORD *)(v1 + 56) = 4;
  ndisAoAcActiveRefIncrement((struct _NDIS_MINIPORT_AOAC *)v1, NdisPMComponentUnspecified);
  return 1;
}
