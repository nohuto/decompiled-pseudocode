/*
 * XREFs of ?GetBitCount@@YAII@Z @ 0x1C0068E84
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C00678D0 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContext @ 0x1C00689F0 (DxgkCreateContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitCount(int a1)
{
  __int64 result; // rax

  for ( result = 0LL; a1; a1 &= a1 - 1 )
    result = (unsigned int)(result + 1);
  return result;
}
