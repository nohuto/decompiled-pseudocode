/*
 * XREFs of MY_READ_PORT_UCHAR @ 0x140171A74
 * Callers:
 *     CpDoesPortExist @ 0x14023DA44 (CpDoesPortExist.c)
 *     CpGetByte @ 0x14023DB1C (CpGetByte.c)
 *     CpPutByte @ 0x14023DC38 (CpPutByte.c)
 *     CpReadLsr @ 0x14023DCCC (CpReadLsr.c)
 *     CpSetBaud @ 0x14023DD4C (CpSetBaud.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MY_READ_PORT_UCHAR(unsigned __int16 a1)
{
  return __inbyte(a1);
}
