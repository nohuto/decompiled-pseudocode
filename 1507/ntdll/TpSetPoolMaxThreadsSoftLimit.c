/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x180073AF0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800F5680 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = (int)Ldr;
  if ( !a1 )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  if ( (int)Ldr < 0 )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  else
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 14LL, &v4, 4LL);
}
