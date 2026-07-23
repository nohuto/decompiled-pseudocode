/*
 * XREFs of InbvPortGetByte @ 0x14023DCE4
 * Callers:
 *     HdlspDispatch @ 0x140722DE0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140723450 (HdlspGetLine.c)
 * Callees:
 *     <none>
 */

bool __fastcall InbvPortGetByte(unsigned int a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return (unsigned __int16)PortGetByte((char *)&Port + 16 * a1, a2, a3, 0LL) == 0;
}
