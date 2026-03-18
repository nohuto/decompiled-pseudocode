/*
 * XREFs of ?GetHighestBitPos@@YAII@Z @ 0x1C0068E94
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C00678D0 (DxgkCreateContextVirtual.c)
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
