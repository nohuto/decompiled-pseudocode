/*
 * XREFs of HvlpStartPageListIteration @ 0x1401C2078
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401BF624 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401BFEFC (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401C04FC (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1401C1F7C (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x1401C2004 (HvlpSetupPageListIteration.c)
 */

char __fastcall HvlpStartPageListIteration(int a1)
{
  PHYSICAL_ADDRESS *v1; // rax

  v1 = HvlpSetupPageListIteration(a1, 0);
  if ( v1 )
    LOBYTE(v1) = HvlpInvokeGetPageListHypercall((__int64)v1, 0LL);
  return (char)v1;
}
