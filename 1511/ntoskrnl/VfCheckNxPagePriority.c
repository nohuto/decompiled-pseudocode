/*
 * XREFs of VfCheckNxPagePriority @ 0x14020ABC8
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x1406B80EC (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
