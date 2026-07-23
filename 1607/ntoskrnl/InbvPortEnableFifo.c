/*
 * XREFs of InbvPortEnableFifo @ 0x14023DCCC
 * Callers:
 *     HdlspEnableTerminal @ 0x14072338C (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvPortEnableFifo(unsigned int a1)
{
  return PortEnableFifo((char *)&Port + 16 * a1);
}
