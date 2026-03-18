/*
 * XREFs of HdlspPutData @ 0x14075AD88
 * Callers:
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 * Callees:
 *     InbvPortPutByte @ 0x14027242C (InbvPortPutByte.c)
 */

__int64 __fastcall HdlspPutData(__int64 a1, unsigned __int64 a2)
{
  unsigned int i; // ebx
  __int64 result; // rax

  if ( a2 )
  {
    for ( i = 0; i < a2; result = ++i )
      InbvPortPutByte(*(_DWORD *)(HeadlessGlobals + 56));
  }
  return result;
}
