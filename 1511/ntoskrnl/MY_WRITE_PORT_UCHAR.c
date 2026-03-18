/*
 * XREFs of MY_WRITE_PORT_UCHAR @ 0x140167050
 * Callers:
 *     CpDoesPortExist @ 0x140221FB8 (CpDoesPortExist.c)
 *     CpEnableFifo @ 0x140222078 (CpEnableFifo.c)
 *     CpInitialize @ 0x140222160 (CpInitialize.c)
 *     CpPutByte @ 0x1402221A8 (CpPutByte.c)
 *     CpSetBaud @ 0x1402222BC (CpSetBaud.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MY_WRITE_PORT_UCHAR(unsigned __int16 a1, unsigned __int8 a2)
{
  unsigned __int8 result; // al

  result = a2;
  __outbyte(a1, a2);
  return result;
}
