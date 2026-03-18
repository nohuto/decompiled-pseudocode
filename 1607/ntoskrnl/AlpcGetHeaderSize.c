/*
 * XREFs of AlpcGetHeaderSize @ 0x14000A018
 * Callers:
 *     AlpcGetMessageAttribute @ 0x140009EB4 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140009FC0 (AlpcInitializeMessageAttribute.c)
 *     AlpcpInitializeCompletionList @ 0x1404DDB10 (AlpcpInitializeCompletionList.c)
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
