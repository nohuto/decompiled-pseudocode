/*
 * XREFs of sub_1401B54A4 @ 0x1401B54A4
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401B2DB4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401B42A8 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401B48AC (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x1401B534C (HvlpEndSecurePageListIteration.c)
 *     HvlpGetPageList @ 0x1401B53F0 (HvlpGetPageList.c)
 *     HvlpGetSecurePageList @ 0x1401B54B8 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x1401B5648 (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1401B56DC (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_1401B54A4(int a1)
{
  void *result; // rax

  result = &HvlpIteratorCrashdump;
  if ( !a1 )
    return &HvlpIteratorHibernate;
  return result;
}
