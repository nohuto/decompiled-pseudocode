/*
 * XREFs of InbvPortPutByte @ 0x14027242C
 * Callers:
 *     HdlspPutData @ 0x14075AD88 (HdlspPutData.c)
 *     HdlspSendStringAtBaud @ 0x14075B128 (HdlspSendStringAtBaud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvPortPutByte(unsigned int a1)
{
  return PortPutByte(&Port[2 * a1]);
}
