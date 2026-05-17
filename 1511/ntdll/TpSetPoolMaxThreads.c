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

__int64 __fastcall TpSetPoolMaxThreads(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter();
  result = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v4);
  if ( MEMORY[0x7FFE0386] )
    return TppETWPoolThreadMax(a1, v4);
  return result;
}
