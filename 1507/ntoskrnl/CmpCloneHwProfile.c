/*
 * XREFs of CmpCloneHwProfile @ 0x14065EFB8
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1405A2B5C (CmSetAcpiHwProfile.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wtoi @ 0x1401726C8 (_wtoi.c)
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14017F2B0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x140181830 (ZwQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1404484A8 (CmpRebuildKcbCache.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     ExUuidCreate @ 0x1404EBB90 (ExUuidCreate.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14065F708 (CmpCreateHwProfileFriendlyName.c)
 */

__int64 __fastcall CmpCloneHwProfile(
        void *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        unsigned __int16 a5,
        PHANDLE KeyHandle,
        unsigned int *a7)
{
  void *v7; // r12
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  PVOID PoolWithTag; // rdi
  ULONG v13; // edi
  int v14; // eax
  ULONG v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v27; // [rsp+80h] [rbp-80h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp-78h] BYREF
  ULONG Disposition; // [rsp+8Ch] [rbp-74h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD KeyInformation[2]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v34; // [rsp+E8h] [rbp-18h]
  unsigned int v35; // [rsp+ECh] [rbp-14h]
  wchar_t Str[2]; // [rsp+F0h] [rbp-10h] BYREF
  ULONG v37; // [rsp+F4h] [rbp-Ch]
  wchar_t Dst[64]; // [rsp+1E0h] [rbp+E0h] BYREF

  v7 = a3;
  *(_QWORD *)&UnicodeString.Length = a3;
  v23 = 0LL;
  *KeyHandle = 0LL;
  *a7 = a4;
  v27 = 0LL;
  Handle = 0LL;
  if ( a4 >= 0xC8 )
    goto LABEL_8;
  while ( 1 )
  {
    swprintf_s(Dst, 0x40uLL, L"%04d", ++*a7);
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    v11 = v10;
    if ( v10 < 0 )
      break;
    ZwClose(*KeyHandle);
    if ( *a7 >= 0xC8 )
      goto LABEL_7;
  }
  if ( v10 == -1073741772 )
    v11 = 0;
LABEL_7:
  if ( v11 >= 0 )
  {
LABEL_8:
    if ( ZwQuerySecurityObject(v7, 4u, 0LL, 0, &Length) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x20204D43u);
      if ( !PoolWithTag || ZwQuerySecurityObject(v7, 4u, PoolWithTag, Length, &Length) >= 0 )
        goto LABEL_13;
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    PoolWithTag = 0LL;
LABEL_13:
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = PoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v11 = ZwCreateKey(KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v11 >= 0 )
    {
      if ( Disposition == 1 )
      {
        swprintf_s(Dst, 0x40uLL, L"Hardware Profiles\\%04d", *a7);
        RtlInitUnicodeString(&ValueName, Dst);
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwCreateKey(&v23, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v11 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &ValueName;
          ObjectAttributes.RootDirectory = a1;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v11 = ZwOpenKey(&v27, 0x20019u, &ObjectAttributes);
          if ( v11 >= 0 )
          {
            v11 = ZwQueryKey(v27, KeyFullInformation, KeyInformation, 0x100u, &ResultLength);
            if ( v11 >= 0 )
            {
              v13 = v37;
              v14 = -1;
              Data = -1;
              v15 = 0;
              if ( v37 )
              {
                do
                {
                  if ( ZwEnumerateKey(v27, v15, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength) < 0 )
                    break;
                  Str[(unsigned __int64)v35 >> 1] = 0;
                  if ( wtoi(Str) && wtoi(Str) != *a7 )
                  {
                    ValueName.Length = v35;
                    ObjectAttributes.Length = 48;
                    ValueName.MaximumLength = v35 + 2;
                    ObjectAttributes.Attributes = 576;
                    ValueName.Buffer = Str;
                    ObjectAttributes.RootDirectory = v27;
                    ObjectAttributes.ObjectName = &ValueName;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                    {
                      RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
                      if ( ZwQueryValueKey(
                             Handle,
                             &ValueName,
                             KeyValueFullInformation,
                             KeyInformation,
                             0x100u,
                             &ResultLength) >= 0
                        && KeyInformation[1] == 4
                        && (*(_DWORD *)((char *)KeyInformation + v34) > Data || Data == -1) )
                      {
                        Data = *(_DWORD *)((char *)KeyInformation + v34);
                      }
                      ZwClose(Handle);
                    }
                    Handle = 0LL;
                  }
                  ++v15;
                }
                while ( v15 < v13 );
                v14 = Data;
                v7 = *(void **)&UnicodeString.Length;
              }
              Data = v14 + 1;
              RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
              ZwSetValueKey(v23, &ValueName, 0, 4u, &Data, 4u);
              if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, &UnicodeString) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"FriendlyName");
                ZwSetValueKey(v23, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
                RtlFreeAnsiString(&UnicodeString);
              }
              Data = 0;
              RtlInitUnicodeString(&ValueName, L"Aliasable");
              ZwSetValueKey(v23, &ValueName, 0, 4u, &Data, 4u);
              Data = 1;
              RtlInitUnicodeString(&ValueName, L"Cloned");
              ZwSetValueKey(v23, &ValueName, 0, 4u, &Data, 4u);
              if ( ExUuidCreate(&Uuid) >= 0 && RtlStringFromGUIDEx(&Uuid, &UnicodeString, 1u) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
                ZwSetValueKey(v23, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.MaximumLength);
                RtlFreeAnsiString(&UnicodeString);
              }
              v11 = ObReferenceObjectByHandle(v7, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, (PVOID *)&Uuid, 0LL);
              if ( v11 >= 0 )
              {
                v11 = ObReferenceObjectByHandle(
                        *KeyHandle,
                        0x20006u,
                        (POBJECT_TYPE)CmKeyObjectType,
                        0,
                        (PVOID *)&UnicodeString,
                        0LL);
                if ( v11 >= 0 )
                {
                  CmpLockRegistryExclusive();
                  v16 = *(_QWORD *)&UnicodeString.Length;
                  v17 = *(_QWORD *)&Uuid.Data1;
                  if ( CmpCopySyncTree(
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&Uuid.Data1 + 8LL) + 32LL),
                         *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&Uuid.Data1 + 8LL) + 40LL),
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&UnicodeString.Length + 8LL) + 32LL),
                         *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&UnicodeString.Length + 8LL) + 40LL),
                         2,
                         0) )
                  {
                    *(_DWORD *)&UnicodeString.Length = -1;
                    Uuid.Data1 = -1;
                    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UNICODE_STRING *))(*(_QWORD *)(*(_QWORD *)(v17 + 8)
                                                                                                  + 32LL)
                                                                                      + 8LL))(
                            *(_QWORD *)(*(_QWORD *)(v17 + 8) + 32LL),
                            *(unsigned int *)(*(_QWORD *)(v17 + 8) + 40LL),
                            &UnicodeString);
                    if ( v18 )
                    {
                      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UUID *))(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 32LL)
                                                                              + 8LL))(
                              *(_QWORD *)(*(_QWORD *)(v16 + 8) + 32LL),
                              *(unsigned int *)(*(_QWORD *)(v16 + 8) + 40LL),
                              &Uuid);
                      if ( v19 )
                      {
                        *(_WORD *)(v19 + 52) = *(_WORD *)(v18 + 52);
                        *(_DWORD *)(v19 + 56) = *(_DWORD *)(v18 + 56);
                        CmpRebuildKcbCache(*(_QWORD *)(v16 + 8));
                        (*(void (__fastcall **)(_QWORD, UUID *))(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 32LL) + 16LL))(
                          *(_QWORD *)(*(_QWORD *)(v16 + 8) + 32LL),
                          &Uuid);
                        v11 = 0;
                      }
                      else
                      {
                        v11 = -1073741670;
                      }
                      (*(void (__fastcall **)(_QWORD, UNICODE_STRING *))(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 32LL) + 16LL))(
                        *(_QWORD *)(*(_QWORD *)(v17 + 8) + 32LL),
                        &UnicodeString);
                    }
                    else
                    {
                      v11 = -1073741670;
                    }
                  }
                  else
                  {
                    v11 = -1073741492;
                  }
                  CmpUnlockRegistry();
                }
              }
            }
          }
          else
          {
            v27 = 0LL;
          }
        }
        else
        {
          v23 = 0LL;
        }
      }
      else
      {
        v11 = 0;
      }
    }
  }
  ZwClose(v7);
  if ( v23 )
    ZwClose(v23);
  if ( v27 )
    ZwClose(v27);
  if ( v11 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  return (unsigned int)v11;
}
