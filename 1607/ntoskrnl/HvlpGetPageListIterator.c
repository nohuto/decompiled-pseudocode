/*
 * XREFs of HvlpGetPageListIterator @ 0x1401C1F80
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401BF740 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401C0018 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401C0618 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x1401C1E4C (HvlpEndSecurePageListIteration.c)
 *     HvlpGetPageList @ 0x1401C1EC4 (HvlpGetPageList.c)
 *     HvlpGetSecurePageList @ 0x1401C1F94 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x1401C2120 (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1401C21B4 (HvlpStartSecurePageListIteration.c)
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
