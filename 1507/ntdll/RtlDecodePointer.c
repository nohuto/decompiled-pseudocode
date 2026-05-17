/*
 * XREFs of RtlDecodePointer @ 0x180066340
 * Callers:
 *     RtlUserThreadStart @ 0x180009F30 (RtlUserThreadStart.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800BD5D0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpFatalExceptionFilter @ 0x1800C0E8C (LdrpFatalExceptionFilter.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800C2120 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800C2238 (RtlpPossibleDeadlock.c)
 *     TppExceptionFilter @ 0x1800F5B34 (TppExceptionFilter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
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
