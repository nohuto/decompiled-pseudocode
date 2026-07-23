/*
 * XREFs of VfKeInsertQueueDpc @ 0x140712CD8
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VfKeInsertQueueDpc(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  VfUtilCheckKernelAddress(a1, 64LL);
  return pXdvKeInsertQueueDpc(a1, a2, a3);
}
