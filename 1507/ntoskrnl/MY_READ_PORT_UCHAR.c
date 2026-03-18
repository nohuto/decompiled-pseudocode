/*
 * XREFs of MY_READ_PORT_UCHAR @ 0x140195F34
 * Callers:
 *     CpDoesPortExist @ 0x140271E90 (CpDoesPortExist.c)
 *     CpGetByte @ 0x140271F64 (CpGetByte.c)
 *     CpPutByte @ 0x140272080 (CpPutByte.c)
 *     CpReadLsr @ 0x140272114 (CpReadLsr.c)
 *     CpSetBaud @ 0x140272194 (CpSetBaud.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MY_READ_PORT_UCHAR(unsigned __int16 a1)
{
  return __inbyte(a1);
}
