/*
 * XREFs of HvlpStartPageListIteration @ 0x1401B56BC
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401B2DB4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401B42A8 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401B48AC (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     sub_1401B55C0 @ 0x1401B55C0 (sub_1401B55C0.c)
 *     HvlpSetupPageListIteration @ 0x1401B5648 (HvlpSetupPageListIteration.c)
 */

char __fastcall HvlpStartPageListIteration(int a1)
{
  PHYSICAL_ADDRESS *v1; // rax

  v1 = HvlpSetupPageListIteration(a1, 0);
  if ( v1 )
    LOBYTE(v1) = sub_1401B55C0((__int64)v1, 0LL);
  return (char)v1;
}
