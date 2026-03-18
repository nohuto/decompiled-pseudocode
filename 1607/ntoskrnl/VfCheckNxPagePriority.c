/*
 * XREFs of VfCheckNxPagePriority @ 0x140222684
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x140704170 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
