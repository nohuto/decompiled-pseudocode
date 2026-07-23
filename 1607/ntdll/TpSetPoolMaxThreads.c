/*
 * XREFs of TpSetPoolMaxThreads @ 0x180072D50
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18003EF8C (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x180072C54 (LdrpEnableParallelLoading.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800FE070 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     TppETWPoolThreadMax @ 0x18000310C (TppETWPoolThreadMax.c)
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpSetPoolMaxThreads(PTP_POOL Pool, ULONG MaxThreads)
{
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MaxThreads;
  if ( !Pool || (MaxThreads & 0x80000000) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter(Pool);
  }
  else
  {
    NtSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMaximum, &WorkerFactoryInformation, 4u);
    if ( MEMORY[0x7FFE0386] )
      TppETWPoolThreadMax((__int64)Pool, WorkerFactoryInformation);
  }
}
