/*
 * XREFs of ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D225C
 * Callers:
 *     ndisNdkPcwAddCounter @ 0x1C0060AAC (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0060C00 (ndisNdkPcwEnumerateInstances.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C00D147C (ndisNdkPcwCollectMiniportStats.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00D1658 (ndisNdkPcwRemoveCounter.c)
 *     ?ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D1C6C (-ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00D1FC8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D2060 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

const struct _UNICODE_STRING *__fastcall ndisPcwGetMiniportName(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const struct _UNICODE_STRING *result; // rax

  result = a1->pModifiedInstanceName;
  if ( !result )
    return a1->pAdapterInstanceName;
  return result;
}
