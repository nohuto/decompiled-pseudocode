/*
 * XREFs of InbvEnableDisplayString @ 0x1401B5BB8
 * Callers:
 *     PopShutdownHandler @ 0x1403B2C90 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_1402FDE30;
  byte_1402FDE30 = a1;
  return result;
}
