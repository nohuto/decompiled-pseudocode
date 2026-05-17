/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x180004B70
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180004A10 (LdrpEnableParallelLoading.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A8170 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  if ( a1 && a2 < 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 2LL, &v3);
  TppRaiseInvalidParameter();
  return 3221225485LL;
}
