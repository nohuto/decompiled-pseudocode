/*
 * XREFs of mth_CountLowZeros @ 0x1C00A32E4
 * Callers:
 *     scl_ComputeScaling @ 0x1C00A323C (scl_ComputeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_CountLowZeros(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  while ( (a1 & 1) == 0 )
  {
    a1 >>= 1;
    result = (unsigned int)(result + 1);
  }
  return result;
}
