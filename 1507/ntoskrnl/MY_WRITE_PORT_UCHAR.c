/*
 * XREFs of MY_WRITE_PORT_UCHAR @ 0x140195F40
 * Callers:
 *     CpDoesPortExist @ 0x140271E90 (CpDoesPortExist.c)
 *     CpEnableFifo @ 0x140271F50 (CpEnableFifo.c)
 *     CpInitialize @ 0x140272038 (CpInitialize.c)
 *     CpPutByte @ 0x140272080 (CpPutByte.c)
 *     CpSetBaud @ 0x140272194 (CpSetBaud.c)
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
