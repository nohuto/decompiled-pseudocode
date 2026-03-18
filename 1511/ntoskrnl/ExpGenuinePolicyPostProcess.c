/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x14048A5CC
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140152DC0 (ZwQueryLicenseValue.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpOsProductCacheProviderHelper @ 0x140516B10 (ExpOsProductCacheProviderHelper.c)
 *     sub_1405174E0 @ 0x1405174E0 (sub_1405174E0.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(__int64 a1, _BYTE *a2, int a3, __int64 a4, _BYTE *a5)
{
  int v5; // esi
  int LicenseValue; // ebx
  int v8; // r12d
  PVOID PoolWithTag; // r14
  int v11; // eax
  bool v12; // zf
  ULONG v13; // [rsp+30h] [rbp-40h] BYREF
  SIZE_T NumberOfBytes; // [rsp+34h] [rbp-3Ch] BYREF
  _DWORD v15[3]; // [rsp+3Ch] [rbp-34h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+58h] [rbp-18h] BYREF
  __int64 v19; // [rsp+5Ch] [rbp-14h]
  int v20; // [rsp+64h] [rbp-Ch]

  v5 = (int)a2;
  v17 = a1;
  v16 = a4;
  v12 = off_1406FB020 == 0LL;
  v15[0] = 0;
  v15[1] = 4;
  LicenseValue = 0;
  v8 = 0;
  v18 = 0;
  v19 = 0LL;
  PoolWithTag = 0LL;
  v20 = 0;
  NumberOfBytes = 0LL;
  *a5 = 0;
  if ( !v12 )
  {
    LicenseValue = sub_1405174E0(a1, (_DWORD)a2, a3, a4, 2);
    *a5 = 1;
    return (unsigned int)LicenseValue;
  }
  if ( !a2 )
    goto LABEL_7;
  if ( a3 == 1 )
  {
    v12 = *a2 == 1;
LABEL_30:
    if ( v12 )
      return (unsigned int)LicenseValue;
    goto LABEL_7;
  }
  if ( a3 == 2 )
  {
    v12 = *(_WORD *)a2 == 1;
    goto LABEL_30;
  }
  if ( *(_DWORD *)a2 == 1 )
    return (unsigned int)LicenseValue;
LABEL_7:
  LicenseValue = ZwQueryLicenseValue((__int64)L"JL", 0LL, (__int64)v15);
  if ( LicenseValue < 0 || v15[0] != 1 )
  {
    LicenseValue = qword_1406FB3E0 ? qword_1406FB3E0((char *)&NumberOfBytes + 4) : -1073741637;
    if ( LicenseValue >= 0 )
    {
      if ( qword_1406FB3B0 )
      {
        LicenseValue = ExpOsProductCacheProviderHelper(
                         (PUNICODE_STRING)&stru_1406A1858,
                         (__int64)&NumberOfBytes,
                         (ULONG)&v13);
        if ( LicenseValue == -1073741789 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          LicenseValue = ExpOsProductCacheProviderHelper(
                           (PUNICODE_STRING)&stru_1406A1858,
                           (__int64)&NumberOfBytes,
                           (ULONG)&v13);
        }
        if ( LicenseValue < 0 )
          goto LABEL_21;
        v11 = qword_1406FB3B0(3LL, PoolWithTag, 0LL, 0LL, 0, &v18);
        LicenseValue = v11;
        if ( v11 >= 0 && (v18 & 0x40) != 0 )
        {
          v8 = 1;
          goto LABEL_18;
        }
        if ( v11 == -1073741198 )
        {
LABEL_18:
          LicenseValue = 0;
          goto LABEL_19;
        }
      }
      else
      {
        LicenseValue = -1073741637;
      }
      if ( LicenseValue < 0 )
      {
LABEL_21:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        return (unsigned int)LicenseValue;
      }
LABEL_19:
      if ( !HIDWORD(NumberOfBytes) || v8 )
      {
        LicenseValue = sub_1405174E0(v17, v5, a3, v16, 2);
        *a5 = 1;
      }
      goto LABEL_21;
    }
  }
  return (unsigned int)LicenseValue;
}
