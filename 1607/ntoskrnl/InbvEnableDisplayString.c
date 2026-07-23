/*
 * XREFs of InbvEnableDisplayString @ 0x1401C3584
 * Callers:
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140323478;
  byte_140323478 = a1;
  return result;
}
