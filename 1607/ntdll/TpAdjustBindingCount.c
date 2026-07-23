/*
 * XREFs of TpAdjustBindingCount @ 0x18003D2F8
 * Callers:
 *     TppDestroyTimer @ 0x18003B568 (TppDestroyTimer.c)
 *     TppInitializeTimer @ 0x18003D258 (TppInitializeTimer.c)
 *     TppAlpcpFree @ 0x180065520 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x180065604 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x180078680 (TppIopFree.c)
 *     TpBindFileToDirect @ 0x18007A054 (TpBindFileToDirect.c)
 *     TpAllocJobNotification @ 0x180084510 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x180084760 (TppJobpFree.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1800FE86C (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
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
