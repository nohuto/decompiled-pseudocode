/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C0059AF0
 * Callers:
 *     PortTraceInitTracing @ 0x1C003DB74 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitRecords @ 0x1C0059B0C (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(__int64 a1)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(a1);
}
