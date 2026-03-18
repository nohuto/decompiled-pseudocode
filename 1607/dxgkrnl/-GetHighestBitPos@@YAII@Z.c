/*
 * XREFs of ?GetHighestBitPos@@YAII@Z @ 0x1C016B9F4
 * Callers:
 *     DxgkCreateContext @ 0x1C01570A0 (DxgkCreateContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHighestBitPos(unsigned int a1)
{
  __int64 result; // rax

  for ( result = 0LL; ; result = (unsigned int)(result + 1) )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return result;
}
