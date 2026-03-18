/*
 * XREFs of ?GetHighestBitPos@@YAII@Z @ 0x1C008B778
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C008A8B0 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContext @ 0x1C01378F0 (DxgkCreateContext.c)
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
