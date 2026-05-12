/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C0060F90
 * Callers:
 *     PortTraceInitTracing @ 0x1C00449EC (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitRecords @ 0x1C0060FAC (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(__int64 a1)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(a1);
}
