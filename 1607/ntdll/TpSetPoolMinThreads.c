/*
 * XREFs of TpSetPoolMinThreads @ 0x1800877A0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18003EF8C (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMin @ 0x1800FE758 (TppETWPoolThreadMin.c)
 */

NTSTATUS __cdecl TpSetPoolMinThreads(PTP_POOL Pool, ULONG MinThreads)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // edi
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MinThreads;
  if ( !Pool || (MinThreads & 0x80000000) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter(Pool);
    return -1073741811;
  }
  else
  {
    v3 = NtSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMinimum, &WorkerFactoryInformation, 4u);
    v4 = v3;
    if ( MEMORY[0x7FFE0386] )
    {
      if ( v3 >= 0 )
        TppETWPoolThreadMin(Pool, WorkerFactoryInformation);
    }
    return v4;
  }
}
