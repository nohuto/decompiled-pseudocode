/*
 * XREFs of TpSetPoolStackInformation @ 0x180081440
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x180081320 (TpSetDefaultPoolStackInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl TpSetPoolStackInformation(PTP_POOL Pool, PTP_POOL_STACK_INFORMATION PoolStackInformation)
{
  if ( Pool && PoolStackInformation )
    return NtSetInformationWorkerFactory(
             *((HANDLE *)Pool + 7),
             WorkerFactoryStackInformation,
             PoolStackInformation,
             0x10u);
  else
    return -1073741811;
}
