/*
 * XREFs of SepIsLockedDown @ 0x1406D0808
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14050B8C8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x140181730 (ZwQueryLicenseValue.c)
 *     KIsUnlockSettingEnabled @ 0x14055393C (KIsUnlockSettingEnabled.c)
 *     ExQueryFastCacheDevLicense @ 0x1405594C8 (ExQueryFastCacheDevLicense.c)
 */

__int64 __fastcall SepIsLockedDown(_BYTE *a1)
{
  unsigned int v1; // ebx
  bool v2; // cf
  NTSTATUS v4; // eax
  int v6; // [rsp+30h] [rbp-10h] BYREF
  const wchar_t *v7; // [rsp+38h] [rbp-8h]
  bool v8; // [rsp+60h] [rbp+20h] BYREF
  BOOL Data; // [rsp+68h] [rbp+28h] BYREF
  ULONG ResultDataSize; // [rsp+70h] [rbp+30h] BYREF
  ULONG Type; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  v8 = 0;
  v2 = (unsigned __int8)SeILSigningPolicy < 4u;
  *a1 = 1;
  if ( v2 )
  {
    *a1 = 0;
    return v1;
  }
  v6 = 2621478;
  v7 = L"AllowAllTrustedApps";
  v1 = KIsUnlockSettingEnabled((__int64)&v6, &v8);
  if ( (v1 & 0x80000000) != 0 )
    return v1;
  Data = v8;
  if ( v8 )
    goto LABEL_9;
  v4 = ZwQueryLicenseValue(&stru_140322ED0, &Type, &Data, 4u, &ResultDataSize);
  v1 = v4;
  if ( v4 != -1073741772 )
  {
    if ( v4 < 0 )
      return v1;
    if ( !Data )
      goto LABEL_8;
LABEL_9:
    *a1 = 0;
    return v1;
  }
  Data = 0;
  v1 = 0;
LABEL_8:
  if ( ExQueryFastCacheDevLicense() )
    goto LABEL_9;
  return v1;
}
