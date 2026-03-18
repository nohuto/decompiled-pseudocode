/*
 * XREFs of InbvPortEnableFifo @ 0x140222358
 * Callers:
 *     HdlspEnableTerminal @ 0x1406D738C (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvPortEnableFifo(unsigned int a1)
{
  return PortEnableFifo(Port[2 * a1]);
}
