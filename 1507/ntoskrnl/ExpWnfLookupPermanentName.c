/*
 * XREFs of ExpWnfLookupPermanentName @ 0x1404FE56C
 * Callers:
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14054BE40 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140554F94 (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x140486820 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1404FE3F0 (RtlValidRelativeSecurityDescriptor.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404FE6FC (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x1404FE7E0 (ExpWnfComposeValueName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140501188 (ExpWnfSpecializeSecurityDescriptor.c)
 */

__int64 __fastcall ExpWnfLookupPermanentName(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  int NameStoreRegistryRoot; // ebx
  _DWORD *v6; // rsi
  NTSTATUS i; // eax
  char *v8; // rbx
  ULONG v9; // esi
  ULONG v10; // eax
  unsigned int v11; // esi
  char *v12; // rbx
  _QWORD *PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  char v18; // [rsp+50h] [rbp-30h] BYREF

  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v18;
  v3 = 0LL;
  ExpWnfComposeValueName(a1, &ValueName);
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, &KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    ResultLength = 0;
    v6 = 0LL;
    for ( i = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
          ;
          i = ZwQueryValueKey(
                KeyHandle,
                &ValueName,
                KeyValuePartialInformation,
                PoolWithTag + 3,
                ResultLength,
                &ResultLength) )
    {
      NameStoreRegistryRoot = i;
      if ( i != -1073741789 )
        break;
      if ( v3 )
        ExFreePoolWithTag(v3, 0x20666E57u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength + 24, 0x20666E57u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
      {
        NameStoreRegistryRoot = -1073741670;
        goto LABEL_16;
      }
      v6 = PoolWithTag + 3;
    }
    if ( i >= 0 )
    {
      if ( v6[1] == 3 )
      {
        v8 = (char *)(v6 + 3);
        *v3 = 0LL;
        v3[1] = 0LL;
        v3[2] = 0LL;
        v9 = v6[2];
        v3[2] = v8;
        if ( RtlValidRelativeSecurityDescriptor(v8, v9, 0) )
        {
          ExpWnfSpecializeSecurityDescriptor((PSECURITY_DESCRIPTOR)v3[2]);
          v10 = RtlLengthSecurityDescriptor((PSECURITY_DESCRIPTOR)v3[2]);
          v11 = v9 - v10;
          v12 = &v8[v10];
          if ( v11 >= 4 )
          {
            *(_DWORD *)v3 = *(_DWORD *)v12;
            if ( v11 - 4 >= 0x10 )
              v3[1] = v12 + 4;
            else
              v3[1] = 0LL;
            *a2 = v3;
            return 0;
          }
        }
      }
      NameStoreRegistryRoot = -1073741823;
    }
LABEL_16:
    if ( v3 )
      ExFreePoolWithTag(v3, 0x20666E57u);
  }
  return (unsigned int)NameStoreRegistryRoot;
}
