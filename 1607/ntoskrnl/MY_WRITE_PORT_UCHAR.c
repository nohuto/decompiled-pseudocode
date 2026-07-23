/*
 * XREFs of MY_WRITE_PORT_UCHAR @ 0x140171F80
 * Callers:
 *     CpDoesPortExist @ 0x14023D928 (CpDoesPortExist.c)
 *     CpEnableFifo @ 0x14023D9E8 (CpEnableFifo.c)
 *     CpInitialize @ 0x14023DAD4 (CpInitialize.c)
 *     CpPutByte @ 0x14023DB1C (CpPutByte.c)
 *     CpSetBaud @ 0x14023DC30 (CpSetBaud.c)
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
