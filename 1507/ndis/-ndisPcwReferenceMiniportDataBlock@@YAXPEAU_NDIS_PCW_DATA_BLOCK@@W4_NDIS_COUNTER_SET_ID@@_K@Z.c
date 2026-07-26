/*
 * XREFs of ?ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z @ 0x1C00D8DE8
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0064C3C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPcwReferenceMiniportDataBlock(__int64 a1, __int64 a2, __int64 a3)
{
  return ndisPcwUpdateMiniportDataBlock(a1, a2, a3);
}
