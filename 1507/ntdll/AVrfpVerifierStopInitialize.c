/*
 * XREFs of AVrfpVerifierStopInitialize @ 0x1800C62E4
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlInitAnsiString @ 0x18006A7B0 (RtlInitAnsiString.c)
 *     LdrGetProcedureAddressEx @ 0x18007A0E0 (LdrGetProcedureAddressEx.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
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
  ProcedureAddress = LdrGetProcedureAddressEx(v2, (const void **)&DestinationString, 0, &v5, 0);
  if ( ProcedureAddress >= 0 )
    AVrfpVerifierStopMessageFunction = v5;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddress;
}
