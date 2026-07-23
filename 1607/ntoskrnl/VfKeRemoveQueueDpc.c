/*
 * XREFs of VfKeRemoveQueueDpc @ 0x140712DA0
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VfKeRemoveQueueDpc(unsigned __int64 a1)
{
  VfUtilCheckKernelAddress(a1, 64LL);
  return pXdvKeRemoveQueueDpc(a1);
}
