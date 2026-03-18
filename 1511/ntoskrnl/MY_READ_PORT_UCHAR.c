/*
 * XREFs of MY_READ_PORT_UCHAR @ 0x140167044
 * Callers:
 *     CpDoesPortExist @ 0x140221FB8 (CpDoesPortExist.c)
 *     CpGetByte @ 0x14022208C (CpGetByte.c)
 *     CpPutByte @ 0x1402221A8 (CpPutByte.c)
 *     CpReadLsr @ 0x14022223C (CpReadLsr.c)
 *     CpSetBaud @ 0x1402222BC (CpSetBaud.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MY_READ_PORT_UCHAR(unsigned __int16 a1)
{
  return __inbyte(a1);
}
