/*
 * XREFs of ?DereferenceStaticOneShot@SchedulerBase@details@Concurrency@@SAJXZ @ 0x180007520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 Concurrency::details::SchedulerBase::DereferenceStaticOneShot(void)
{
  return (unsigned int)_InterlockedDecrement(&dword_18003AC88);
}
