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

__int64 __fastcall RtlDecodePointer(__int64 a1)
{
  NTSTATUS v2; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus((unsigned int)v2);
  return __ROR8__(a1, 64 - (ProcessInformation & 0x3F)) ^ ProcessInformation;
}
