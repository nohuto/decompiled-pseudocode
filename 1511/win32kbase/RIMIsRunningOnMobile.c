/*
 * XREFs of RIMIsRunningOnMobile @ 0x1C00D4FBC
 * Callers:
 *     sub_1C00D2CB0 @ 0x1C00D2CB0 (sub_1C00D2CB0.c)
 *     rimObsCheckForObservationPermissions @ 0x1C00D3034 (rimObsCheckForObservationPermissions.c)
 * Callees:
 *     <none>
 */

__int64 RIMIsRunningOnMobile()
{
  int v0; // eax
  int v1; // ecx
  unsigned int v2; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  char v6; // [rsp+58h] [rbp+10h] BYREF
  char v7; // [rsp+60h] [rbp+18h] BYREF

  v5 = 3;
  RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
  v0 = ZwQueryLicenseValue(&DestinationString, &v7, &v5, 4LL, &v6);
  v1 = v5;
  v2 = 0;
  if ( v0 < 0 )
    v1 = 3;
  LOBYTE(v2) = v1 == 4;
  return v2;
}
