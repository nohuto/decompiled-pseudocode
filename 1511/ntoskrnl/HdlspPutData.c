/*
 * XREFs of HdlspPutData @ 0x1406D7BA4
 * Callers:
 *     HdlspDispatch @ 0x1406D6DE0 (HdlspDispatch.c)
 * Callees:
 *     InbvPortPutByte @ 0x140222554 (InbvPortPutByte.c)
 */

__int64 __fastcall HdlspPutData(__int64 a1, unsigned __int64 a2)
{
  unsigned int i; // ebx
  __int64 result; // rax

  if ( a2 )
  {
    for ( i = 0; i < a2; result = ++i )
      InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14));
  }
  return result;
}
