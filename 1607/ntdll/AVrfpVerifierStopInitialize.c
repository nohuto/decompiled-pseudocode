/*
 * XREFs of AVrfpVerifierStopInitialize @ 0x1800D7620
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180011320 (RtlInitAnsiString.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     LdrGetProcedureAddressEx @ 0x18007E3E0 (LdrGetProcedureAddressEx.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 */

__int64 AVrfpVerifierStopInitialize()
{
  __int64 i; // rbx
  void *v2; // rbx
  NTSTATUS v3; // ebx
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  PVOID ProcedureAddress; // [rsp+50h] [rbp+8h] BYREF

  for ( i = AVrfpVerifierProvidersList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &AVrfpVerifierProvidersList )
      goto LABEL_5;
    if ( !wcsicmp(*(const wchar_t **)(i + 24), L"verifier.dll") )
      break;
  }
  v2 = *(void **)(*(_QWORD *)(i + 32) + 48LL);
  if ( !v2 )
  {
LABEL_5:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitAnsiString(&DestinationString, "VerifierStopMessage");
  v3 = LdrGetProcedureAddressEx(v2, &DestinationString, 0, &ProcedureAddress, 0);
  if ( v3 >= 0 )
    AVrfpVerifierStopMessageFunction = (__int64)ProcedureAddress;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)v3;
}
