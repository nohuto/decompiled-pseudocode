/*
 * XREFs of VfCheckNxPoolType @ 0x14020ABF8
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1406B822C (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
