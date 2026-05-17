/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x18007B700
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18007B59C (LdrpEnableParallelLoading.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  _PEB_LDR_DATA *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = Ldr;
  if ( a1 )
  {
    if ( (__int64)Ldr < 0 )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 2LL, &v4, 8LL);
    }
  }
  TppRaiseInvalidParameter(a1, Ldr, a3);
  return 3221225485LL;
}
