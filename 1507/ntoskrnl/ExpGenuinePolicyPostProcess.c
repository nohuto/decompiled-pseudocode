/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x14051DEEC
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryLicenseValue @ 0x140181730 (ZwQueryLicenseValue.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     sub_1406ECC3C @ 0x1406ECC3C (sub_1406ECC3C.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406ED418 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(int a1, _BYTE *a2, int a3, int a4, _BYTE *a5)
{
  _BYTE *v5; // r13
  int v6; // esi
  NTSTATUS LicenseValue; // ebx
  int v9; // r12d
  PVOID PoolWithTag; // r14
  bool v12; // zf
  int v13; // eax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+3Ch] [rbp-14h] BYREF
  ULONG ResultDataSize[4]; // [rsp+40h] [rbp-10h] BYREF

  v5 = a5;
  v6 = (int)a2;
  v12 = off_14077E020 == 0LL;
  LicenseValue = 0;
  v16 = 0;
  v9 = 0;
  v15 = 0;
  ResultDataSize[0] = 4;
  PoolWithTag = 0LL;
  NumberOfBytes = 0LL;
  *a5 = 0;
  if ( !v12 )
  {
    LicenseValue = sub_1406ECC3C(a1, (_DWORD)a2, a3, a4, 2);
    *v5 = 1;
    return (unsigned int)LicenseValue;
  }
  if ( !a2 )
    goto LABEL_11;
  if ( a3 == 1 )
  {
    v12 = *a2 == 1;
LABEL_10:
    if ( v12 )
      return (unsigned int)LicenseValue;
    goto LABEL_11;
  }
  if ( a3 == 2 )
  {
    v12 = *(_WORD *)a2 == 1;
    goto LABEL_10;
  }
  if ( *(_DWORD *)a2 == 1 )
    return (unsigned int)LicenseValue;
LABEL_11:
  LicenseValue = ZwQueryLicenseValue(
                   (PUNICODE_STRING)&stru_1407221A8,
                   0LL,
                   (char *)&NumberOfBytes + 4,
                   4u,
                   ResultDataSize);
  if ( LicenseValue < 0 || HIDWORD(NumberOfBytes) != 1 )
  {
    LicenseValue = qword_14077E3D0 ? qword_14077E3D0(&v16) : -1073741637;
    if ( LicenseValue >= 0 )
    {
      if ( qword_14077E3A0 )
      {
        LicenseValue = ExpOsProductCacheProviderHelper(
                         (PUNICODE_STRING)&stru_140721AA8,
                         (__int64)&NumberOfBytes,
                         (ULONG)&a5);
        if ( LicenseValue == -1073741789 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          LicenseValue = ExpOsProductCacheProviderHelper(
                           (PUNICODE_STRING)&stru_140721AA8,
                           (__int64)&NumberOfBytes,
                           (ULONG)&a5);
        }
        if ( LicenseValue < 0 )
          goto LABEL_34;
        v13 = qword_14077E3A0(3LL, PoolWithTag, 0LL, 0LL, 0, &v15);
        LicenseValue = v13;
        if ( v13 >= 0 && (v15 & 0x40) != 0 )
        {
          v9 = 1;
LABEL_26:
          LicenseValue = 0;
          goto LABEL_31;
        }
        if ( v13 == -1073741198 )
          goto LABEL_26;
      }
      else
      {
        LicenseValue = -1073741637;
      }
      if ( LicenseValue < 0 )
      {
LABEL_34:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        return (unsigned int)LicenseValue;
      }
LABEL_31:
      if ( !v16 || v9 )
      {
        LicenseValue = sub_1406ECC3C(a1, v6, a3, a4, 2);
        *v5 = 1;
      }
      goto LABEL_34;
    }
  }
  return (unsigned int)LicenseValue;
}
