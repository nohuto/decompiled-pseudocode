/*
 * XREFs of SepIsLockedDown @ 0x14064D3D0
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140448AFC (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x140152DC0 (ZwQueryLicenseValue.c)
 *     ExQueryFastCacheDevLicense @ 0x1404B8DC0 (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x140679790 (KIsSideloadingEnabled.c)
 */

__int64 __fastcall SepIsLockedDown(_BYTE *a1)
{
  unsigned int v1; // ebx
  bool v2; // cf
  NTSTATUS v4; // eax
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+18h] BYREF
  ULONG Type; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v6 = 0;
  v2 = (unsigned __int8)SeILSigningPolicy < 4u;
  *a1 = 1;
  if ( v2 )
  {
    *a1 = 0;
    return v1;
  }
  v1 = KIsSideloadingEnabled(&v6);
  if ( (v1 & 0x80000000) != 0 )
    return v1;
  Data = v6;
  if ( v6 )
    goto LABEL_9;
  v4 = ZwQueryLicenseValue(&stru_1402D3DB0, &Type, &Data, 4u, &ResultDataSize);
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
