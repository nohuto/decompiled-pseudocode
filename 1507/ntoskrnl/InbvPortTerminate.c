/*
 * XREFs of InbvPortTerminate @ 0x140272444
 * Callers:
 *     HdlspEnableTerminal @ 0x14075A430 (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvPortTerminate(unsigned int a1)
{
  Port[2 * a1] = 0LL;
  return 1;
}
