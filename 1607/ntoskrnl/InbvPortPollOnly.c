/*
 * XREFs of InbvPortPollOnly @ 0x14023DE9C
 * Callers:
 *     HdlspDispatch @ 0x140722DE0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140723450 (HdlspGetLine.c)
 * Callees:
 *     <none>
 */

bool __fastcall InbvPortPollOnly(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(a4) = 1;
  return (unsigned __int16)PortGetByte((char *)&Port + 16 * a1, &v5, 0LL, a4) == 0;
}
