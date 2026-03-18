/*
 * XREFs of VfCheckNxPageProtection @ 0x14025A154
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 */

__int64 VfCheckNxPageProtection()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPageProtection();
  return result;
}
