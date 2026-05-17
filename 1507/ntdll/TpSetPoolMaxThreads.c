/*
 * XREFs of TpSetPoolMaxThreads @ 0x18007B690
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x18007B59C (LdrpEnableParallelLoading.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800F5680 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     TppETWPoolThreadMax @ 0x180002DFC (TppETWPoolThreadMax.c)
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSetPoolMaxThreads(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (int)Ldr;
  if ( !a1 )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  if ( (int)Ldr < 0 )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  result = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v5, 4LL);
  if ( MEMORY[0x7FFE0386] )
    return TppETWPoolThreadMax(a1, v5);
  return result;
}
