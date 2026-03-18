/*
 * XREFs of IovUtilWatermarkIrp @ 0x14001AE3C
 * Callers:
 *     PnpAsynchronousCall @ 0x1403D2000 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x1403D2C78 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1404F179C (IopFilterResourceRequirementsCall.c)
 *     IopEjectDevice @ 0x14061532C (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x1406BFEA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
