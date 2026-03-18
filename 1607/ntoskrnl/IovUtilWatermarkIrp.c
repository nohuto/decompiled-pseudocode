/*
 * XREFs of IovUtilWatermarkIrp @ 0x1400C6014
 * Callers:
 *     PnpAsynchronousCall @ 0x1403F1BB0 (PnpAsynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1404C8FAC (IopFilterResourceRequirementsCall.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 *     IopEjectDevice @ 0x140649D84 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF00 (VfIrpSendSynchronousIrp.c)
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
