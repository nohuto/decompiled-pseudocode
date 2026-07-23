/*
 * XREFs of VfCheckNxPoolType @ 0x1402224E0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1407042E0 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
