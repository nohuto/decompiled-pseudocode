/*
 * XREFs of InbvPortPutByte @ 0x140222554
 * Callers:
 *     HdlspPutData @ 0x1406D7BA4 (HdlspPutData.c)
 *     HdlspSendStringAtBaud @ 0x1406D7F44 (HdlspSendStringAtBaud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvPortPutByte(unsigned int a1)
{
  return PortPutByte(&Port[2 * a1]);
}
