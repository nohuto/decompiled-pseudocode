/*
 * XREFs of sub_1401F0638 @ 0x1401F0638
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401EDAB8 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401EEC4C (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401EF7AC (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x1401F04E0 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetPageList @ 0x1401F0584 (HvlpGetPageList.c)
 *     HvlpGetSecurePageList @ 0x1401F064C (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x1401F08F8 (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1401F098C (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_1401F0638(int a1)
{
  void *result; // rax

  result = &HvlpIteratorCrashdump;
  if ( !a1 )
    return &HvlpIteratorHibernate;
  return result;
}
