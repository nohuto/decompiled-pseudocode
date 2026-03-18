/*
 * XREFs of InbvEnableDisplayString @ 0x1401C36A0
 * Callers:
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140323438;
  byte_140323438 = a1;
  return result;
}
