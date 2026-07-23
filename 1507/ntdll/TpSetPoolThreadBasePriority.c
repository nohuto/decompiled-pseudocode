/*
 * XREFs of TpSetPoolThreadBasePriority @ 0x180079280
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpSetPoolThreadBasePriority(PTP_POOL Pool, ULONG BasePriority)
{
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( !Pool )
    return -1073741811;
  if ( (int)BasePriority >= 15 )
  {
    WorkerFactoryInformation = 16;
  }
  else
  {
    if ( (int)BasePriority <= -15 )
      BasePriority = -16;
    WorkerFactoryInformation = BasePriority;
  }
  return NtSetInformationWorkerFactory(
           *((HANDLE *)Pool + 7),
           WorkerFactoryThreadBasePriority,
           &WorkerFactoryInformation,
           4u);
}
