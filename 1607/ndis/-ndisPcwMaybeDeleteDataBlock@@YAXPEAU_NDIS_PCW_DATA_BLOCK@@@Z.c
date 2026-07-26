/*
 * XREFs of ?ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z @ 0x1C00D833C
 * Callers:
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C009CC98 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AD04C (ndisMDeleteMiniportBlockOnRemove.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D7CC8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00D843C (-ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwMaybeDeleteDataBlock(struct _NDIS_PCW_DATA_BLOCK *a1)
{
  if ( !a1->ReferenceCount )
    ExFreePoolWithTag(a1, 0);
}
