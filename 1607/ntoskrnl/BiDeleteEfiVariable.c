/*
 * XREFs of BiDeleteEfiVariable @ 0x1406D4940
 * Callers:
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x14015CB90 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x14015D4B0 (ZwSetSystemEnvironmentValueEx.c)
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteEfiVariable(PCWSTR SourceString)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  ULONG *Attributes; // [rsp+20h] [rbp-50h]
  ULONG ReturnLength; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  GUID VendorGuid; // [rsp+50h] [rbp-20h] BYREF

  VendorGuid.Data1 = -1947934879;
  *(_DWORD *)&VendorGuid.Data2 = 299013066;
  *(_DWORD *)VendorGuid.Data4 = -536867414;
  *(_DWORD *)&VendorGuid.Data4[4] = -1943338088;
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v2 >= 0 )
  {
    ReturnLength = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v3 = ZwQuerySystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, &ReturnLength, 0LL);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      LODWORD(Attributes) = 1;
      v2 = ZwSetSystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, 0LL, Attributes);
    }
    else if ( v3 == -1073741568 )
    {
      v2 = 0;
    }
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v2;
}
