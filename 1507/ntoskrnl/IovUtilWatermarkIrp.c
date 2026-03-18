/*
 * XREFs of IovUtilWatermarkIrp @ 0x1400CF684
 * Callers:
 *     IopFilterResourceRequirementsCall @ 0x14045D284 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140461980 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 *     IopEjectDevice @ 0x1406940A4 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x14074169C (VfIrpSendSynchronousIrp.c)
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
