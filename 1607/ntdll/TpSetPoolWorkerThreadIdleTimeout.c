/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x180072DC0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180072C54 (LdrpEnableParallelLoading.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, __int64 a2)
{
  __int64 WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = a2;
  if ( a1 && a2 < 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryIdleTimeout, &WorkerFactoryInformation, 8u);
  TppRaiseInvalidParameter(a1);
  return -1073741811;
}
