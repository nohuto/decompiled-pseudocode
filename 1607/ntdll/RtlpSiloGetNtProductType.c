/*
 * XREFs of RtlpSiloGetNtProductType @ 0x1800EF9C4
 * Callers:
 *     RtlGetNtProductType @ 0x18002CD40 (RtlGetNtProductType.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

char __fastcall RtlpSiloGetNtProductType(int *a1)
{
  int v1; // eax
  char v3; // bl
  int v5; // [rsp+40h] [rbp-28h]

  v1 = dword_18014FE08;
  v3 = 1;
  if ( dword_18014FE08 == -1 )
  {
    if ( (int)NtQueryInformationJobObject() < 0 )
      return 0;
    v1 = v5;
    dword_18014FE08 = v5;
  }
  *a1 = v1;
  return v3;
}
