/*
 * XREFs of InbvPortTerminate @ 0x14022256C
 * Callers:
 *     HdlspEnableTerminal @ 0x1406D738C (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvPortTerminate(unsigned int a1)
{
  Port[2 * a1] = 0LL;
  return 1;
}
