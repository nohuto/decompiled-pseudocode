/*
 * XREFs of ExpWnfLookupPermanentName @ 0x1403E0F08
 * Callers:
 *     NtDeleteWnfStateName @ 0x1403E19C4 (NtDeleteWnfStateName.c)
 *     NtUpdateWnfStateData @ 0x1403E457C (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1403E4A00 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1403E4D70 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1404B550C (NtQueryWnfStateNameInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404BF3D0 (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateData @ 0x140548688 (NtDeleteWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1403E083C (RtlValidRelativeSecurityDescriptor.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403E10D0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x1403E11DC (ExpWnfComposeValueName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1403E2A80 (ExpWnfSpecializeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 */

__int64 __fastcall ExpWnfLookupPermanentName(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // r14
  char v7; // r15
  int NameStoreRegistryRoot; // ebx
  _DWORD *v9; // rsi
  NTSTATUS i; // eax
  char *v11; // rbx
  ULONG v12; // esi
  ULONG v13; // eax
  unsigned int v14; // esi
  char *v15; // rbx
  _QWORD *PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  char v21; // [rsp+50h] [rbp-30h] BYREF

  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v21;
  v3 = 0LL;
  ExpWnfComposeValueName(a1, &ValueName);
  v5 = (a1 >> 4) & 3;
  if ( v5 )
  {
    v6 = 0LL;
    v7 = 0;
  }
  else
  {
    v6 = PsAttachSiloToCurrentThread(0LL);
    v7 = 1;
  }
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(v5, &KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    ResultLength = 0;
    v9 = 0LL;
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
        goto LABEL_21;
      }
      v9 = PoolWithTag + 3;
    }
    if ( i >= 0 )
    {
      if ( v9[1] == 3 )
      {
        v11 = (char *)(v9 + 3);
        *v3 = 0LL;
        v3[1] = 0LL;
        v3[2] = 0LL;
        v12 = v9[2];
        v3[2] = v11;
        if ( RtlValidRelativeSecurityDescriptor(v11, v12, 0) )
        {
          ExpWnfSpecializeSecurityDescriptor((PSECURITY_DESCRIPTOR)v3[2]);
          v13 = RtlLengthSecurityDescriptor((PSECURITY_DESCRIPTOR)v3[2]);
          v14 = v12 - v13;
          v15 = &v11[v13];
          if ( v14 >= 4 )
          {
            *(_DWORD *)v3 = *(_DWORD *)v15;
            if ( v14 - 4 >= 0x10 )
              v3[1] = v15 + 4;
            else
              v3[1] = 0LL;
            *a2 = v3;
            NameStoreRegistryRoot = 0;
            goto LABEL_13;
          }
        }
      }
      NameStoreRegistryRoot = -1073741823;
    }
LABEL_21:
    if ( v3 )
      ExFreePoolWithTag(v3, 0x20666E57u);
  }
LABEL_13:
  if ( v7 )
    PsDetachSiloFromCurrentThread(v6);
  return (unsigned int)NameStoreRegistryRoot;
}
