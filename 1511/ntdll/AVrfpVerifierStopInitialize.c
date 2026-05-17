/*
 * XREFs of AVrfpVerifierStopInitialize @ 0x1800CF614
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180010490 (RtlInitAnsiString.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     LdrGetProcedureAddressEx @ 0x1800812F0 (LdrGetProcedureAddressEx.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 */

__int64 AVrfpVerifierStopInitialize()
{
  __int64 i; // rbx
  unsigned __int64 v2; // rbx
  int ProcedureAddress; // ebx
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  for ( i = AVrfpVerifierProvidersList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &AVrfpVerifierProvidersList )
      goto LABEL_5;
    if ( !wcsicmp(*(const wchar_t **)(i + 24), L"verifier.dll") )
      break;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(i + 32) + 48LL);
  if ( !v2 )
  {
LABEL_5:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitAnsiString(&DestinationString, "VerifierStopMessage");
  ProcedureAddress = LdrGetProcedureAddressEx(v2, (const void **)&DestinationString, 0LL, (__int64)&v5, 0);
  if ( ProcedureAddress >= 0 )
    AVrfpVerifierStopMessageFunction = v5;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddress;
}
