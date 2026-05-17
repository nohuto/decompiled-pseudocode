/*
 * XREFs of RtlSetProcessIsCritical @ 0x18008DC90
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1800A67A0 (NtSetInformationProcess.c)
 */

__int64 __fastcall RtlSetProcessIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return 3221225473LL;
  if ( a2 )
  {
    NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u, 0LL);
    *a2 = ProcessInformation;
  }
  ProcessInformation = a1;
  return NtSetInformationProcess(-1LL, 29LL, &ProcessInformation, 4LL);
}
