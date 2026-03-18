/*
 * XREFs of SepIsLockedDown @ 0x14068C9DC
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14045D1FC (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x14015C480 (ZwQueryLicenseValue.c)
 *     ExQueryFastCacheDevLicense @ 0x1404E827C (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x1406BC168 (KIsSideloadingEnabled.c)
 */

__int64 __fastcall SepIsLockedDown(_BYTE *a1)
{
  unsigned int v1; // ebx
  int LicenseValue; // eax
  unsigned __int8 v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  char v7; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v5 = 0;
  *a1 = 1;
  if ( (unsigned __int8)SeILSigningPolicy < 4u )
  {
    *a1 = 0;
    return v1;
  }
  v1 = KIsSideloadingEnabled(&v5);
  if ( (v1 & 0x80000000) != 0 )
    return v1;
  v6 = v5;
  if ( v5 )
    goto LABEL_9;
  LicenseValue = ZwQueryLicenseValue((__int64)aTv_0, (__int64)&v7, (__int64)&v6);
  v1 = LicenseValue;
  if ( LicenseValue != -1073741772 )
  {
    if ( LicenseValue < 0 )
      return v1;
    if ( !v6 )
      goto LABEL_8;
LABEL_9:
    *a1 = 0;
    return v1;
  }
  v6 = 0;
  v1 = 0;
LABEL_8:
  if ( ExQueryFastCacheDevLicense() )
    goto LABEL_9;
  return v1;
}
