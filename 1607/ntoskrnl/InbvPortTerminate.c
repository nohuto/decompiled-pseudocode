/*
 * XREFs of InbvPortTerminate @ 0x14023DEE4
 * Callers:
 *     HdlspEnableTerminal @ 0x14072338C (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvPortTerminate(unsigned int a1)
{
  Port[2 * a1] = 0LL;
  return 1;
}
