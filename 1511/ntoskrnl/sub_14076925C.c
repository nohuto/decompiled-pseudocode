/*
 * XREFs of sub_14076925C @ 0x14076925C
 * Callers:
 *     ExInitSystemPhase2 @ 0x140768610 (ExInitSystemPhase2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcsncmp @ 0x140145C64 (wcsncmp.c)
 *     wcscat_s @ 0x140149C68 (wcscat_s.c)
 *     wcscpy_s @ 0x140149D04 (wcscpy_s.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     NtEnumerateKey @ 0x1403FD480 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     NtNotifyChangeKey @ 0x140499C68 (NtNotifyChangeKey.c)
 *     NtOpenKey @ 0x1404A5C10 (NtOpenKey.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1407696E4 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     ExpLicenseWatchInitWorker @ 0x1407699F8 (ExpLicenseWatchInitWorker.c)
 */

char sub_14076925C()
{
  PVOID v0; // rsi
  NTSTATUS v1; // eax
  NTSTATUS v2; // eax
  PVOID v3; // rdi
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  int v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  PVOID PoolWithTag; // rax
  NTSTATUS v10; // eax
  size_t v11; // r8
  NTSTATUS v12; // eax
  char v14; // r14
  __int64 v15; // rax
  PVOID v16; // r12
  NTSTATUS v17; // eax
  ULONG v18; // esi
  wchar_t *v19; // rdi
  bool v20; // r14
  SIZE_T v21; // r15
  _DWORD *v22; // r13
  unsigned __int64 v23; // rdx
  ULONG v24; // edx
  ULONG i; // r15d
  __int64 v26; // rax
  __int64 v27; // r14
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  wchar_t *v30; // rax
  __int64 v31; // rcx
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  PVOID KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG v37; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v40; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE KeyInformation[20]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v42; // [rsp+DCh] [rbp-24h]
  ULONG v43; // [rsp+E0h] [rbp-20h]
  unsigned int v44; // [rsp+F0h] [rbp-10h]
  _BYTE v45[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  int v47; // [rsp+11Ch] [rbp+1Ch]

  v0 = 0LL;
  ExpSetupModeDetected = 0;
  ExpSystemSetupInProgress = 0;
  MEMORY[0xFFFFF78000000268] = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenKey(&ExpSetupKey, 0x2001Fu, &ObjectAttributes);
  if ( v1 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v1, 0LL, 0LL);
  v2 = ObReferenceObjectByHandle(ExpSetupKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &KeyHandle, 0LL);
  v3 = KeyHandle;
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v2, 0LL, 0LL);
  RtlInitUnicodeString(&ValueName, L"SetupType");
  v4 = NtQueryValueKey(ExpSetupKey, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x48u, &ResultLength);
  if ( v4 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v4, 0LL, 0LL);
  if ( v47 == 1 || v47 == 4 )
  {
    ExpSetupModeDetected = 1;
    MEMORY[0xFFFFF78000000268] = 0;
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    v3 = 0LL;
  }
  RtlInitUnicodeString(&ValueName, L"SystemSetupInProgress");
  v5 = NtQueryValueKey(ExpSetupKey, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x48u, &ResultLength);
  if ( v5 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v5, 0LL, 0LL);
  if ( v47 == 1 )
    ExpSystemSetupInProgress = 1;
  v6 = dword_140306608 | 0x10;
  MEMORY[0xFFFFF780000002D0] = dword_140306608 | 0x10;
  dword_140306608 |= 0x10u;
  if ( !ExpMultiUserTS )
    MEMORY[0xFFFFF780000002D0] = v6 | 0x100;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    ExpControlKey = v3;
    return 1;
  }
  qword_1402D6250 = (__int64)sub_140498054;
  qword_1402D6258 = 0LL;
  *(_QWORD *)ExpWatchProductTypeWorkItem = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenKey(&ExpProductTypeKey, 0x2001Fu, &ObjectAttributes);
  if ( v7 < 0 )
  {
    if ( !ExpSetupModeDetected )
      KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v7, 0LL, 0LL);
  }
  else
  {
    if ( !ExpSetupModeDetected )
    {
      v8 = ObReferenceObjectByHandle(ExpProductTypeKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &KeyHandle, 0LL);
      v0 = KeyHandle;
      if ( v8 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v8, 0LL, 0LL);
    }
    ExpControlKey = v3;
    qword_1402D61F8 = v0;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&ValueName, L"ProductType");
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x22uLL, 0x2079654Bu);
    ExpProductTypeValueInfo = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = NtQueryValueKey(
              ExpProductTypeKey,
              &ValueName,
              KeyValuePartialInformation,
              PoolWithTag,
              0x22u,
              &ResultLength);
      if ( v10 < 0 )
      {
        if ( !ExpSetupModeDetected )
          KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v10, 0LL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        if ( NtQueryValueKey(ExpProductTypeKey, &ValueName, KeyValuePartialInformation, v45, 0x10u, &ResultLength) != -2147483643 )
          goto LABEL_20;
        ResultLength += 16;
        qword_140306610 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x2079654Bu);
        if ( !qword_140306610 )
          KeBugCheckEx(0x9Au, 0x14uLL, ResultLength, 2uLL, 0LL);
        if ( NtQueryValueKey(
               ExpProductTypeKey,
               &ValueName,
               KeyValuePartialInformation,
               qword_140306610,
               ResultLength,
               &ResultLength) >= 0
          || (ExFreePoolWithTag(qword_140306610, 0), qword_140306610 = 0LL, !ExpSetupModeDetected) )
        {
LABEL_20:
          v11 = -1LL;
          do
            ++v11;
          while ( aLanmannt[v11] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)(ExpProductTypeValueInfo + 12), v11)
            && InitSafeBootMode == 3
            && !ExpSetupModeDetected )
          {
            MEMORY[0xFFFFF78000000268] = 1;
            MEMORY[0xFFFFF78000000264] = 3;
          }
          v12 = NtNotifyChangeKey(
                  ExpProductTypeKey,
                  0LL,
                  ExpWatchProductTypeWorkItem,
                  (PVOID)1,
                  &ExpProductTypeIoSb,
                  0x10000005u,
                  0,
                  &ExpProductTypeChangeBuffer,
                  4u,
                  1u);
          if ( v12 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v14 = 0;
              v15 = -1LL;
              do
                ++v15;
              while ( aRegistryMachin_34[v15] );
              ValueName.Length = 2 * (v15 + 64);
              ValueName.MaximumLength = ValueName.Length;
              ValueName.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ValueName.Length, 0x2079654Bu);
              if ( !ValueName.Buffer )
                KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 3uLL, 0LL);
              v16 = KeyHandle;
              v17 = NtQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &v37);
              if ( v17 < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, v17, 1uLL, 0LL);
              v18 = 2 * v43 + 56;
              if ( v18 < v43 || v18 < 2 * (unsigned __int64)(v43 + 16) )
                v14 = 1;
              v19 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x2079654Bu);
              if ( !v19 || v14 )
                KeBugCheckEx(0x9Au, 0x14uLL, v18, 4uLL, 0LL);
              LODWORD(KeyHandle) = v44 + 32;
              v20 = v44 + 32 < v44;
              v21 = v44 + 32;
              v22 = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x2079654Bu);
              if ( !v22 || v20 )
                KeBugCheckEx(0x9Au, 0x14uLL, v21, 5uLL, 0LL);
              ExpLicenseInfoCount = v42;
              v23 = 80LL * v42;
              if ( v23 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * v42, 6uLL, 0LL);
              ExpLicenseInfo = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v23, 0x2079654Bu);
              if ( !ExpLicenseInfo )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * (unsigned int)ExpLicenseInfoCount, 6uLL, 0LL);
              RtlInitUnicodeString(&v40, L"ConcurrentLimit");
              v24 = 0;
              for ( i = 0; ; v24 = i )
              {
                v33 = NtEnumerateKey(v16, v24, KeyBasicInformation, v19, v18, &v37);
                if ( v33 == -2147483622 )
                  break;
                if ( v33 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v33, 0LL, 0LL);
                v19[((unsigned __int64)*((unsigned int *)v19 + 3) >> 1) + 8] = 0;
                wcscpy_s(
                  ValueName.Buffer,
                  (unsigned __int64)ValueName.MaximumLength >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, L"\\");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, v19 + 8);
                v26 = -1LL;
                do
                  ++v26;
                while ( ValueName.Buffer[v26] );
                ObjectAttributes.RootDirectory = 0LL;
                ValueName.Length = 2 * v26;
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &ValueName;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v27 = 80LL * i;
                v28 = NtOpenKey((PHANDLE)(v27 + ExpLicenseInfo), 0x2001Fu, &ObjectAttributes);
                if ( v28 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v28, 1uLL, 0LL);
                v29 = NtQueryValueKey(
                        *(HANDLE *)(v27 + ExpLicenseInfo),
                        &v40,
                        KeyValuePartialInformation,
                        v22,
                        (ULONG)KeyHandle,
                        &v37);
                if ( v29 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v29, 2uLL, 0LL);
                v30 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ValueName.Length, 0x2079654Bu);
                *(_QWORD *)(v27 + ExpLicenseInfo + 16) = v30;
                if ( !v30 )
                  KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 7uLL, 0LL);
                wcscpy_s(v30, (unsigned __int64)ValueName.Length >> 1, ValueName.Buffer);
                v31 = v27 + ExpLicenseInfo;
                *(_DWORD *)(v31 + 8) = v22[3];
                *(_QWORD *)(v31 + 48) = v31;
                *(_QWORD *)(v31 + 24) = 0LL;
                *(_QWORD *)(v31 + 40) = sub_14066C188;
                v32 = NtNotifyChangeKey(
                        *(HANDLE *)v31,
                        0LL,
                        (PIO_APC_ROUTINE)(v31 + 24),
                        (PVOID)1,
                        (PIO_STATUS_BLOCK)(v31 + 56),
                        0x10000005u,
                        1u,
                        (PVOID)(v31 + 72),
                        4u,
                        1u);
                if ( v32 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v32, 1uLL, 0LL);
                ++i;
              }
              ExFreePoolWithTag(v19, 0);
              ExFreePoolWithTag(v22, 0);
              ExFreePoolWithTag(ValueName.Buffer, 0);
              NtClose(v16);
            }
            return 1;
          }
          if ( !ExpSetupModeDetected )
            KeBugCheckEx(0x9Au, 8uLL, (unsigned int)v12, 0LL, 0LL);
        }
      }
    }
  }
  return 0;
}
