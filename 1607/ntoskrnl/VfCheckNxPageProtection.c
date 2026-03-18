/*
 * XREFs of VfCheckNxPageProtection @ 0x14022269C
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x140704210 (VfCheckPageProtection.c)
 */

__int64 VfCheckNxPageProtection()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPageProtection();
  return result;
}
