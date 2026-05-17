/*
 * XREFs of RtlEncodePointer @ 0x180067200
 * Callers:
 *     RtlpAddVectoredHandler @ 0x1800670E0 (RtlpAddVectoredHandler.c)
 *     RtlSetUnhandledExceptionFilter @ 0x1800671E0 (RtlSetUnhandledExceptionFilter.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlEncodePointer(__int64 a1)
{
  NTSTATUS v2; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus((unsigned int)v2);
  return __ROR8__(a1 ^ ProcessInformation, ProcessInformation & 0x3F);
}
