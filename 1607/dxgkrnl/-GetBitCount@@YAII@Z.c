/*
 * XREFs of ?GetBitCount@@YAII@Z @ 0x1C0093FC4
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C0093FE0 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContext @ 0x1C01570A0 (DxgkCreateContext.c)
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
