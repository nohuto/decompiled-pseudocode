/*
 * XREFs of InbvEnableDisplayString @ 0x1401F0ACC
 * Callers:
 *     PopShutdownHandler @ 0x140403F30 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_14034E2C8;
  byte_14034E2C8 = a1;
  return result;
}
