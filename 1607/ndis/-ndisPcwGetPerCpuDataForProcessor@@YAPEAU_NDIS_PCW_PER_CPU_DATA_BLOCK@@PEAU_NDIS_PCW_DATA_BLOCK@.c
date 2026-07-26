/*
 * XREFs of ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0027768
 * Callers:
 *     ndisGetPerformanceCounters @ 0x1C00D0100 (ndisGetPerformanceCounters.c)
 *     ndisSetPerfTrackParameters @ 0x1C00D03E4 (ndisSetPerfTrackParameters.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D7CC8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8038 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PCW_PER_CPU_DATA_BLOCK *__fastcall ndisPcwGetPerCpuDataForProcessor(
        struct _NDIS_PCW_DATA_BLOCK *a1,
        int a2)
{
  return (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)((char *)a1 + ndisPcwPerCpuDataStride * a2 + ndisPcwOffsetToPerCpuData);
}
