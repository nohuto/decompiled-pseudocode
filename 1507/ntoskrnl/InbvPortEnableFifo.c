/*
 * XREFs of InbvPortEnableFifo @ 0x140272230
 * Callers:
 *     HdlspEnableTerminal @ 0x14075A430 (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvPortEnableFifo(unsigned int a1)
{
  return PortEnableFifo(Port[2 * a1]);
}
