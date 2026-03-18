/*
 * XREFs of VfCheckNxPoolType @ 0x14025A16C
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x140738750 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
