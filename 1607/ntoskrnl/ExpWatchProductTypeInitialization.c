/*
 * XREFs of ExpWatchProductTypeInitialization @ 0x1407A9F80
 * Callers:
 *     ExInitSystemPhase2 @ 0x1407A916C (ExInitSystemPhase2.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcsncmp @ 0x14014F600 (wcsncmp.c)
 *     wcscat_s @ 0x1401535B8 (wcscat_s.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtNotifyChangeKey @ 0x1403FF81C (NtNotifyChangeKey.c)
 *     NtOpenKey @ 0x140414318 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1407AA814 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     ExpLicenseWatchInitWorker @ 0x1407AB13C (ExpLicenseWatchInitWorker.c)
 */

char ExpWatchProductTypeInitialization()
{
  PVOID v0; // rsi
  NTSTATUS v1; // eax
  NTSTATUS v2; // eax
  PVOID v3; // rdi
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  PVOID PoolWithTag; // rax
  NTSTATUS v9; // eax
  size_t v10; // r8
  NTSTATUS v11; // eax
  char v13; // r14
  __int64 v14; // rax
  PVOID v15; // r12
  NTSTATUS v16; // eax
  ULONG v17; // esi
  wchar_t *v18; // rdi
  bool v19; // r14
  SIZE_T v20; // r15
  _DWORD *v21; // r13
  unsigned __int64 v22; // rdx
  ULONG v23; // edx
  ULONG i; // r15d
  __int64 v25; // rax
  __int64 v26; // r14
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  wchar_t *v29; // rax
  __int64 v30; // rcx
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v35; // [rsp+68h] [rbp-98h] BYREF
  PVOID KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v39; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE KeyInformation[20]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v41; // [rsp+DCh] [rbp-24h]
  ULONG v42; // [rsp+E0h] [rbp-20h]
  unsigned int v43; // [rsp+F0h] [rbp-10h]
  _BYTE v44[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  int v46; // [rsp+11Ch] [rbp+1Ch]

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
  if ( v46 == 1 || v46 == 4 )
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
  if ( v46 == 1 )
    ExpSystemSetupInProgress = 1;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    ExpControlKey = v3;
    return 1;
  }
  qword_1402FCFD0 = (__int64)ExpWatchProductTypeWork;
  qword_1402FCFD8 = 0LL;
  *(_QWORD *)ExpWatchProductTypeWorkItem = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = NtOpenKey(&ExpProductTypeKey, 0x2001Fu, &ObjectAttributes);
  if ( v6 < 0 )
  {
    if ( !ExpSetupModeDetected )
      KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v6, 0LL, 0LL);
  }
  else
  {
    if ( !ExpSetupModeDetected )
    {
      v7 = ObReferenceObjectByHandle(ExpProductTypeKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &KeyHandle, 0LL);
      v0 = KeyHandle;
      if ( v7 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v7, 0LL, 0LL);
    }
    ExpControlKey = v3;
    qword_1402FCF78 = v0;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&ValueName, L"ProductType");
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x22uLL, 0x2079654Bu);
    ExpProductTypeValueInfo = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = NtQueryValueKey(ExpProductTypeKey, &ValueName, KeyValuePartialInformation, PoolWithTag, 0x22u, &ResultLength);
      if ( v9 < 0 )
      {
        if ( !ExpSetupModeDetected )
          KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v9, 0LL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        if ( NtQueryValueKey(ExpProductTypeKey, &ValueName, KeyValuePartialInformation, v44, 0x10u, &ResultLength) != -2147483643 )
          goto LABEL_18;
        ResultLength += 16;
        qword_140329688 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x2079654Bu);
        if ( !qword_140329688 )
          KeBugCheckEx(0x9Au, 0x14uLL, ResultLength, 2uLL, 0LL);
        if ( NtQueryValueKey(
               ExpProductTypeKey,
               &ValueName,
               KeyValuePartialInformation,
               qword_140329688,
               ResultLength,
               &ResultLength) >= 0
          || (ExFreePoolWithTag(qword_140329688, 0), qword_140329688 = 0LL, !ExpSetupModeDetected) )
        {
LABEL_18:
          v10 = -1LL;
          do
            ++v10;
          while ( aLanmannt[v10] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)(ExpProductTypeValueInfo + 12), v10)
            && InitSafeBootMode == 3
            && !ExpSetupModeDetected )
          {
            MEMORY[0xFFFFF78000000268] = 1;
            MEMORY[0xFFFFF78000000264] = 3;
          }
          v11 = NtNotifyChangeKey(
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
          if ( v11 >= 0 )
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
              v13 = 0;
              v14 = -1LL;
              do
                ++v14;
              while ( aRegistryMachin_34[v14] );
              ValueName.Length = 2 * (v14 + 64);
              ValueName.MaximumLength = ValueName.Length;
              ValueName.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ValueName.Length, 0x2079654Bu);
              if ( !ValueName.Buffer )
                KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 3uLL, 0LL);
              v15 = KeyHandle;
              v16 = NtQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &v35);
              if ( v16 < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, v16, 1uLL, 0LL);
              v17 = 2 * v42 + 56;
              if ( v17 < v42 || v17 < 2 * (unsigned __int64)(v42 + 16) )
                v13 = 1;
              v18 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x2079654Bu);
              if ( !v18 || v13 )
                KeBugCheckEx(0x9Au, 0x14uLL, v17, 4uLL, 0LL);
              LODWORD(KeyHandle) = v43 + 32;
              v19 = v43 + 32 < v43;
              v20 = v43 + 32;
              v21 = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x2079654Bu);
              if ( !v21 || v19 )
                KeBugCheckEx(0x9Au, 0x14uLL, v20, 5uLL, 0LL);
              ExpLicenseInfoCount = v41;
              v22 = 80LL * v41;
              if ( v22 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * v41, 6uLL, 0LL);
              ExpLicenseInfo = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v22, 0x2079654Bu);
              if ( !ExpLicenseInfo )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * (unsigned int)ExpLicenseInfoCount, 6uLL, 0LL);
              RtlInitUnicodeString(&v39, L"ConcurrentLimit");
              v23 = 0;
              for ( i = 0; ; v23 = i )
              {
                v32 = NtEnumerateKey(v15, v23, KeyBasicInformation, v18, v17, &v35);
                if ( v32 == -2147483622 )
                  break;
                if ( v32 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v32, 0LL, 0LL);
                v18[((unsigned __int64)*((unsigned int *)v18 + 3) >> 1) + 8] = 0;
                wcscpy_s(
                  ValueName.Buffer,
                  (unsigned __int64)ValueName.MaximumLength >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, L"\\");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, v18 + 8);
                v25 = -1LL;
                do
                  ++v25;
                while ( ValueName.Buffer[v25] );
                ObjectAttributes.RootDirectory = 0LL;
                ValueName.Length = 2 * v25;
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &ValueName;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v26 = 80LL * i;
                v27 = NtOpenKey((PHANDLE)(v26 + ExpLicenseInfo), 0x2001Fu, &ObjectAttributes);
                if ( v27 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v27, 1uLL, 0LL);
                v28 = NtQueryValueKey(
                        *(HANDLE *)(v26 + ExpLicenseInfo),
                        &v39,
                        KeyValuePartialInformation,
                        v21,
                        (ULONG)KeyHandle,
                        &v35);
                if ( v28 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v28, 2uLL, 0LL);
                v29 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ValueName.Length, 0x2079654Bu);
                *(_QWORD *)(v26 + ExpLicenseInfo + 16) = v29;
                if ( !v29 )
                  KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 7uLL, 0LL);
                wcscpy_s(v29, (unsigned __int64)ValueName.Length >> 1, ValueName.Buffer);
                v30 = v26 + ExpLicenseInfo;
                *(_DWORD *)(v30 + 8) = v21[3];
                *(_QWORD *)(v30 + 48) = v30;
                *(_QWORD *)(v30 + 24) = 0LL;
                *(_QWORD *)(v30 + 40) = ExpWatchLicenseInfoWork;
                v31 = NtNotifyChangeKey(
                        *(HANDLE *)v30,
                        0LL,
                        (PIO_APC_ROUTINE)(v30 + 24),
                        (PVOID)1,
                        (PIO_STATUS_BLOCK)(v30 + 56),
                        0x10000005u,
                        1u,
                        (PVOID)(v30 + 72),
                        4u,
                        1u);
                if ( v31 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v31, 1uLL, 0LL);
                ++i;
              }
              ExFreePoolWithTag(v18, 0);
              ExFreePoolWithTag(v21, 0);
              ExFreePoolWithTag(ValueName.Buffer, 0);
              NtClose(v15);
            }
            return 1;
          }
          if ( !ExpSetupModeDetected )
            KeBugCheckEx(0x9Au, 8uLL, (unsigned int)v11, 0LL, 0LL);
        }
      }
    }
  }
  return 0;
}
