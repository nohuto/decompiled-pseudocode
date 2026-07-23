/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x18007F900
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800F5080 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A8170 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, int a2)
{
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(a1);
  else
    return NtSetInformationWorkerFactory(
             *(HANDLE *)(a1 + 56),
             WorkerFactoryThreadSoftMaximum,
             &WorkerFactoryInformation,
             4u);
}
