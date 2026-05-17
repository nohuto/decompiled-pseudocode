/*
 * XREFs of TpAdjustBindingCount @ 0x18000CFA0
 * Callers:
 *     TppDestroyTimer @ 0x18000CA80 (TppDestroyTimer.c)
 *     TppInitializeTimer @ 0x18000CF00 (TppInitializeTimer.c)
 *     TppAlpcpFree @ 0x18006BE50 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x18006BF34 (TppAllocAlpcCompletion.c)
 *     TpBindFileToDirect @ 0x1800779E4 (TpBindFileToDirect.c)
 *     TppIopFree @ 0x180079300 (TppIopFree.c)
 *     TpAllocJobNotification @ 0x180081660 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x1800818B0 (TppJobpFree.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1800F596C (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A8170 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = result + a2;
    if ( (int)result > 0 )
    {
      if ( v3 > 0 )
        return result;
      v4 = -1;
      return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 3LL, &v4);
    }
    if ( v3 > 0 )
    {
      v4 = 1;
      return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 3LL, &v4);
    }
  }
  return result;
}
