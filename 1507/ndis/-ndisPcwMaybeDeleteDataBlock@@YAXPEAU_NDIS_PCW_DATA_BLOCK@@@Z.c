/*
 * XREFs of ?ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z @ 0x1C00D8C64
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D85D8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00D8C80 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00D8DF4 (-ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwMaybeDeleteDataBlock(struct _NDIS_PCW_DATA_BLOCK *a1)
{
  if ( !a1->ReferenceCount )
    ExFreePoolWithTag(a1, 0);
}
