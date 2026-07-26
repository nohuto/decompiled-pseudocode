/*
 * XREFs of ?ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D7C5C
 * Callers:
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0067974 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8234 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisPcwAddSinglePhysicalInstance(struct _PCW_BUFFER *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  const UNICODE_STRING *MiniportName; // rax
  ULONG v3; // r8d
  PPCW_BUFFER v4; // r10
  struct _PCW_DATA Data; // [rsp+30h] [rbp-18h] BYREF

  Data.Data = a2->PhysicalPerformanceCounters;
  Data.Size = 32;
  MiniportName = ndisPcwGetMiniportName(a2);
  return PcwAddInstance(v4, MiniportName, v3, 1u, &Data);
}
