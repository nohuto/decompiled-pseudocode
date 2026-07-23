/*
 * XREFs of HvlpGetPageListIterator @ 0x1401C1E64
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401BF624 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401BFEFC (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401C04FC (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x1401C1D30 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetPageList @ 0x1401C1DA8 (HvlpGetPageList.c)
 *     HvlpGetSecurePageList @ 0x1401C1E78 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x1401C2004 (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1401C2098 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     <none>
 */

void *__fastcall HvlpGetPageListIterator(int a1)
{
  void *result; // rax

  result = &HvlpIteratorCrashdump;
  if ( !a1 )
    return &HvlpIteratorHibernate;
  return result;
}
