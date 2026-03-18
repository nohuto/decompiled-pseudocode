/*
 * XREFs of InbvPortGetByte @ 0x140272248
 * Callers:
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x14075A4F4 (HdlspGetLine.c)
 * Callees:
 *     <none>
 */

bool __fastcall InbvPortGetByte(unsigned int a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return (unsigned __int16)PortGetByte(&Port[2 * a1], a2, a3, 0LL) == 0;
}
