/*
 * XREFs of ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0023CB8
 * Callers:
 *     ndisGetPerformanceCounters @ 0x1C00D137C (ndisGetPerformanceCounters.c)
 *     ndisSetPerfTrackParameters @ 0x1C00D1660 (ndisSetPerfTrackParameters.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D85D8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8960 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PCW_PER_CPU_DATA_BLOCK *__fastcall ndisPcwGetPerCpuDataForProcessor(
        struct _NDIS_PCW_DATA_BLOCK *a1,
        int a2)
{
  return (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)((char *)a1 + ndisPcwPerCpuDataStride * a2 + ndisPcwOffsetToPerCpuData);
}
