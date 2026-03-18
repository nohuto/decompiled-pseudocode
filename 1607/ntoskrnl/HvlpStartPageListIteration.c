/*
 * XREFs of HvlpStartPageListIteration @ 0x1401C2194
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401BF740 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401C0018 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401C0618 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1401C2098 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x1401C2120 (HvlpSetupPageListIteration.c)
 */

char __fastcall HvlpStartPageListIteration(int a1)
{
  PHYSICAL_ADDRESS *v1; // rax

  v1 = HvlpSetupPageListIteration(a1, 0);
  if ( v1 )
    LOBYTE(v1) = HvlpInvokeGetPageListHypercall((__int64)v1, 0LL);
  return (char)v1;
}
