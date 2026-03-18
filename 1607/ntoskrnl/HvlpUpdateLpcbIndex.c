/*
 * XREFs of HvlpUpdateLpcbIndex @ 0x1401BC8D8
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139734 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpSetLogicalProcessorProperty @ 0x1401BC4BC (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlpUpdateLpcbIndex(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // ecx
  _OWORD v6[204]; // [rsp+20h] [rbp-CC8h] BYREF

  result = 0LL;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 != a2 )
  {
    LODWORD(v6[0]) = a2;
    result = HvlpSetLogicalProcessorProperty(v4, 6, v6);
    if ( (int)result >= 0 )
      *(_DWORD *)(a1 + 4) = a2;
  }
  return result;
}
