/*
 * XREFs of VfKeRemoveQueueDpc @ 0x1406C6D50
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 */

BOOLEAN __fastcall VfKeRemoveQueueDpc(PRKDPC Dpc)
{
  VfUtilCheckKernelAddress((unsigned __int64)Dpc, 64LL);
  return pXdvKeRemoveQueueDpc(Dpc);
}
