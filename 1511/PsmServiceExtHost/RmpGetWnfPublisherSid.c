/*
 * XREFs of RmpGetWnfPublisherSid @ 0x180005F14
 * Callers:
 *     ?CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180005FD4 (-CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_R.c)
 *     RmpWnfCreateStateNameForClient @ 0x180024B40 (RmpWnfCreateStateNameForClient.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGetWnfPublisherSid(PSID DestinationSid)
{
  HANDLE CurrentProcess; // rax
  NTSTATUS v3; // ebx
  void *TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-80h] BYREF
  PSID TokenInformation[12]; // [rsp+40h] [rbp-78h] BYREF

  TokenHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v3 = NtOpenProcessToken(CurrentProcess, 8u, &TokenHandle);
  if ( v3 >= 0 )
  {
    v3 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    if ( v3 >= 0 )
      RtlCopySid(0x44u, DestinationSid, TokenInformation[0]);
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)v3;
}
