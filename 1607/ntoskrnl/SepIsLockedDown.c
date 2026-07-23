/*
 * XREFs of SepIsLockedDown @ 0x14068CAC0
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14045C0CC (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x14015C9F0 (ZwQueryLicenseValue.c)
 *     ExQueryFastCacheDevLicense @ 0x1404CA608 (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x1406BC2A0 (KIsSideloadingEnabled.c)
 */

__int64 __fastcall SepIsLockedDown(_BYTE *a1)
{
  unsigned int v1; // ebx
  NTSTATUS v3; // eax
  unsigned __int8 v5; // [rsp+50h] [rbp+8h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+18h] BYREF
  ULONG Type; // [rsp+68h] [rbp+20h] BYREF

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
  Data = v5;
  if ( v5 )
    goto LABEL_9;
  v3 = ZwQueryLicenseValue(&stru_1402F4B60, &Type, &Data, 4u, &ResultDataSize);
  v1 = v3;
  if ( v3 != -1073741772 )
  {
    if ( v3 < 0 )
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
