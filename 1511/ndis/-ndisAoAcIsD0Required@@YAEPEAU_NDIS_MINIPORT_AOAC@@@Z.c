/*
 * XREFs of ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00688A4
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C0010C70 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0068778 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00688B8 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0069940 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisAoAcIsD0Required(struct _NDIS_MINIPORT_AOAC *a1)
{
  unsigned __int8 result; // al

  result = 0;
  if ( a1->ActiveRef || a1->StopFlags.Value )
    return 1;
  return result;
}
