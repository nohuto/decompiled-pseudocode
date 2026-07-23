/*
 * XREFs of WmipGetGuidSecurityDescriptor @ 0x140472FF0
 * Callers:
 *     WmipCreateGuidObject @ 0x140472E18 (WmipCreateGuidObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall WmipGetGuidSecurityDescriptor(__int64 a1, PVOID *a2)
{
  int RegistryValues; // eax
  PVOID v5; // rcx
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  void *v8; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v9[22]; // [rsp+40h] [rbp-69h] BYREF

  v8 = 0LL;
  P = 0LL;
  memset(v9, 0, 0xA8uLL);
  LODWORD(v9[8]) = 0;
  v9[0] = &WmipSDRegistryQueryRoutine;
  LODWORD(v9[4]) = 3;
  v9[3] = &v8;
  v9[2] = *(_QWORD *)(a1 + 8);
  v9[10] = &P;
  v9[7] = &WmipSDRegistryQueryRoutine;
  LODWORD(v9[11]) = 3;
  v9[9] = L"00000000-0000-0000-0000-000000000000";
  RegistryValues = RtlpQueryRegistryValues(2LL, L"WMI\\Security", v9);
  *a2 = 0LL;
  if ( RegistryValues < 0 )
    goto LABEL_8;
  if ( v8 )
  {
    v5 = P;
    *a2 = v8;
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  else
  {
    if ( !P )
      goto LABEL_8;
    *a2 = P;
  }
  if ( !*a2 )
LABEL_8:
    *a2 = (PVOID)WmipDefaultAccessSd;
  return 0LL;
}
