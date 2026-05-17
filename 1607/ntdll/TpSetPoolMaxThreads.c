/*
 * XREFs of TpSetPoolMaxThreads @ 0x180072D60
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18003EF9C (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x180072C64 (LdrpEnableParallelLoading.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800FE070 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     TppETWPoolThreadMax @ 0x18000310C (TppETWPoolThreadMax.c)
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSetPoolMaxThreads(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = (int)Ldr;
  if ( !a1 )
    return TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  if ( (int)Ldr < 0 )
    return TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  result = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v6);
  if ( MEMORY[0x7FFE0386] )
    return TppETWPoolThreadMax(a1, v6);
  return result;
}
