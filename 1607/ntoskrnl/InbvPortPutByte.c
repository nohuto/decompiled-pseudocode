/*
 * XREFs of InbvPortPutByte @ 0x14023DECC
 * Callers:
 *     HdlspPutData @ 0x140723BA4 (HdlspPutData.c)
 *     HdlspSendStringAtBaud @ 0x140723F44 (HdlspSendStringAtBaud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvPortPutByte(unsigned int a1)
{
  return PortPutByte((char *)&Port + 16 * a1);
}
