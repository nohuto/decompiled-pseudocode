/*
 * XREFs of RtlDecodePointer @ 0x18005C980
 * Callers:
 *     RtlUserThreadStart @ 0x18005C580 (RtlUserThreadStart.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CA2F0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpFatalExceptionFilter @ 0x1800CB54C (LdrpFatalExceptionFilter.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800CBE40 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800CBF58 (RtlpPossibleDeadlock.c)
 *     TppExceptionFilter @ 0x1800F5534 (TppExceptionFilter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 */

PVOID __cdecl RtlDecodePointer(PVOID Ptr)
{
  int v2; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  return (PVOID)(__ROR8__(Ptr, 64 - (ProcessInformation & 0x3F)) ^ ProcessInformation);
}
