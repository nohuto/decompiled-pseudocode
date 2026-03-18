/*
 * XREFs of HvlpStartPageListIteration @ 0x1401F096C
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401EDAB8 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401EEC4C (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401EF7AC (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     sub_1401F073C @ 0x1401F073C (sub_1401F073C.c)
 *     HvlpSetupPageListIteration @ 0x1401F08F8 (HvlpSetupPageListIteration.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpStartPageListIteration(int a1)
{
  PHYSICAL_ADDRESS *result; // rax

  result = HvlpSetupPageListIteration(a1, 0);
  if ( result )
    return (PHYSICAL_ADDRESS *)sub_1401F073C((__int64)result, 0LL);
  return result;
}
