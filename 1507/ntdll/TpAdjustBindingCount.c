/*
 * XREFs of TpAdjustBindingCount @ 0x18003DB58
 * Callers:
 *     TppDestroyTimer @ 0x18003D7A4 (TppDestroyTimer.c)
 *     TppInitializeTimer @ 0x18003DAB8 (TppInitializeTimer.c)
 *     TppIopFree @ 0x180072A50 (TppIopFree.c)
 *     TppJobpFree @ 0x18007A6D0 (TppJobpFree.c)
 *     TpAllocJobNotification @ 0x18007A850 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x18007AC30 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x18007B264 (TppAllocAlpcCompletion.c)
 *     TpBindFileToDirect @ 0x18007D710 (TpBindFileToDirect.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1800F6084 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 */

int __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int result; // eax
  int v3; // r8d
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = result + a2;
    if ( result > 0 )
    {
      if ( v3 > 0 )
        return result;
      WorkerFactoryInformation = -1;
      return NtSetInformationWorkerFactory(
               *(HANDLE *)(a1 + 56),
               WorkerFactoryBindingCount,
               &WorkerFactoryInformation,
               4u);
    }
    if ( v3 > 0 )
    {
      WorkerFactoryInformation = 1;
      return NtSetInformationWorkerFactory(
               *(HANDLE *)(a1 + 56),
               WorkerFactoryBindingCount,
               &WorkerFactoryInformation,
               4u);
    }
  }
  return result;
}
