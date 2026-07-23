/*
 * XREFs of MY_READ_PORT_UCHAR @ 0x140171F74
 * Callers:
 *     CpDoesPortExist @ 0x14023D928 (CpDoesPortExist.c)
 *     CpGetByte @ 0x14023DA00 (CpGetByte.c)
 *     CpPutByte @ 0x14023DB1C (CpPutByte.c)
 *     CpReadLsr @ 0x14023DBB0 (CpReadLsr.c)
 *     CpSetBaud @ 0x14023DC30 (CpSetBaud.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MY_READ_PORT_UCHAR(unsigned __int16 a1)
{
  return __inbyte(a1);
}
