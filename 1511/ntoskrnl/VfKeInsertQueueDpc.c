/*
 * XREFs of VfKeInsertQueueDpc @ 0x1406C6C88
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 */

BOOLEAN __fastcall VfKeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  VfUtilCheckKernelAddress((unsigned __int64)Dpc, 64LL);
  return pXdvKeInsertQueueDpc(Dpc, SystemArgument1, SystemArgument2);
}
