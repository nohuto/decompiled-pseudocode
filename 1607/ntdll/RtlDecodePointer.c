/*
 * XREFs of RtlDecodePointer @ 0x180051BE0
 * Callers:
 *     RtlUserThreadStart @ 0x180051D50 (RtlUserThreadStart.c)
 *     TppExceptionFilter @ 0x180090F04 (TppExceptionFilter.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D17A0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpFatalExceptionFilter @ 0x1800D2C9C (LdrpFatalExceptionFilter.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3B00 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800D3C08 (RtlpPossibleDeadlock.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
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
