/*
 * XREFs of MY_WRITE_PORT_UCHAR @ 0x140171A80
 * Callers:
 *     CpDoesPortExist @ 0x14023DA44 (CpDoesPortExist.c)
 *     CpEnableFifo @ 0x14023DB04 (CpEnableFifo.c)
 *     CpInitialize @ 0x14023DBF0 (CpInitialize.c)
 *     CpPutByte @ 0x14023DC38 (CpPutByte.c)
 *     CpSetBaud @ 0x14023DD4C (CpSetBaud.c)
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
