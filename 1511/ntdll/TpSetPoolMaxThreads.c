/*
 * XREFs of TpSetPoolMaxThreads @ 0x180004B00
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180004A10 (LdrpEnableParallelLoading.c)
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800F5080 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     TppETWPoolThreadMax @ 0x180003818 (TppETWPoolThreadMax.c)
 *     NtSetInformationWorkerFactory @ 0x1800A8170 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpSetPoolMaxThreads(PTP_POOL Pool, ULONG MaxThreads)
{
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MaxThreads;
  if ( !Pool || (MaxThreads & 0x80000000) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    NtSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMaximum, &WorkerFactoryInformation, 4u);
    if ( MEMORY[0x7FFE0386] )
      TppETWPoolThreadMax((__int64)Pool, WorkerFactoryInformation);
  }
}
