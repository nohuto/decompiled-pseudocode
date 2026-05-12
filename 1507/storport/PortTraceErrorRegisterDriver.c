/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C0055C2C
 * Callers:
 *     PortTraceInitTracing @ 0x1C003B1A4 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitRecords @ 0x1C0055C48 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(__int64 a1)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(a1);
}
