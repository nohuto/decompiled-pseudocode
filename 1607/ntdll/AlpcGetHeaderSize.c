/*
 * XREFs of AlpcGetHeaderSize @ 0x180076F10
 * Callers:
 *     AlpcInitializeMessageAttribute @ 0x180076E70 (AlpcInitializeMessageAttribute.c)
 *     AlpcGetMessageAttribute @ 0x180076ED0 (AlpcGetMessageAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcGetHeaderSize(int a1)
{
  __int64 result; // rax

  result = 8LL;
  if ( a1 < 0 )
    result = 32LL;
  if ( (a1 & 0x40000000) != 0 )
    result = (unsigned int)(result + 32);
  if ( (a1 & 0x20000000) != 0 )
    result = (unsigned int)(result + 32);
  if ( (a1 & 0x10000000) != 0 )
    result = (unsigned int)(result + 24);
  if ( (a1 & 0x8000000) != 0 )
    result = (unsigned int)(result + 24);
  if ( (a1 & 0x4000000) != 0 )
    result = (unsigned int)(result + 8);
  if ( (a1 & 0x2000000) != 0 )
    return (unsigned int)(result + 8);
  return result;
}
