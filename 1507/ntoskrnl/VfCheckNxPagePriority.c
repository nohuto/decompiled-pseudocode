/*
 * XREFs of VfCheckNxPagePriority @ 0x14025A13C
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x140738610 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
