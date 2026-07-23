/*
 * XREFs of VfCheckNxPagePriority @ 0x1402224B0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x1407041A0 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
