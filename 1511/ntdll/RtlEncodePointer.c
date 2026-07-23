/*
 * XREFs of RtlEncodePointer @ 0x180072AD0
 * Callers:
 *     RtlpAddVectoredHandler @ 0x1800729B0 (RtlpAddVectoredHandler.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180072AB0 (RtlSetUnhandledExceptionFilter.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 */

PVOID __cdecl RtlEncodePointer(PVOID Ptr)
{
  int v2; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  return (PVOID)__ROR8__((unsigned __int64)Ptr ^ ProcessInformation, ProcessInformation & 0x3F);
}
