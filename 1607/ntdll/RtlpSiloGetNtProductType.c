/*
 * XREFs of RtlpSiloGetNtProductType @ 0x1800EF9C4
 * Callers:
 *     RtlGetNtProductType @ 0x18002CD30 (RtlGetNtProductType.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

char __fastcall RtlpSiloGetNtProductType(int *a1)
{
  int v1; // eax
  char v3; // bl
  _BYTE JobObjectInformation[16]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+40h] [rbp-28h]

  v1 = dword_18014FE08;
  v3 = 1;
  if ( dword_18014FE08 == -1 )
  {
    if ( NtQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobObjectInformation, 0x20u, 0LL) < 0 )
      return 0;
    v1 = v6;
    dword_18014FE08 = v6;
  }
  *a1 = v1;
  return v3;
}
