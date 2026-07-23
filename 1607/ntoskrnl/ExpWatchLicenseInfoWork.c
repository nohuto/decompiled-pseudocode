/*
 * XREFs of ExpWatchLicenseInfoWork @ 0x1406ACB24
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcscat_s @ 0x1401535B8 (wcscat_s.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     NtNotifyChangeKey @ 0x1403FF81C (NtNotifyChangeKey.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

int __fastcall ExpWatchLicenseInfoWork(__int64 a1)
{
  char v2; // si
  HANDLE v3; // rcx
  int v4; // eax
  NTSTATUS v5; // eax
  ULONG v6; // r15d
  wchar_t *PoolWithTag; // r13
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int16 v11; // dx
  unsigned __int64 v12; // rax
  NTSTATUS v13; // eax
  ULONG v14; // esi
  ULONG i; // edx
  __int64 v16; // rax
  int v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-51h] BYREF
  int v24; // [rsp+70h] [rbp-49h] BYREF
  __int64 v25; // [rsp+78h] [rbp-41h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-39h]
  int v27; // [rsp+88h] [rbp-31h]
  __int128 v28; // [rsp+90h] [rbp-29h]
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE KeyInformation[24]; // [rsp+B0h] [rbp-9h] BYREF
  unsigned int v31; // [rsp+C8h] [rbp+Fh]

  v2 = 0;
  if ( !ExpSetupModeDetected )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 16));
    v3 = *(HANDLE *)a1;
    p_DestinationString = &DestinationString;
    v25 = 0LL;
    v28 = 0LL;
    v24 = 48;
    v27 = 576;
    NtClose(v3);
    v4 = CmOpenKey((HANDLE *)a1, 131103, (__int64)&v24, 0, 0LL);
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    v5 = NtQueryKey(*(HANDLE *)a1, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, v5, 0LL, 0LL);
    v6 = 2 * v31 + 56;
    if ( v6 < v31 || v6 < 2 * (unsigned __int64)(v31 + 16) )
      v2 = 1;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x2079654Bu);
    if ( !PoolWithTag || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v8 + 2 * v10 + 32) );
    v11 = 2 * (v31 + v10);
    DestinationString.Length = v11;
    if ( v11 < v31 )
      goto LABEL_19;
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v8 + 2 * v12 + 32) );
    if ( v11 < v12 )
      goto LABEL_19;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9 + 32) );
    if ( v11 < (unsigned __int64)v31 + v9 )
LABEL_19:
      v2 = 1;
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x2079654Bu);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&ValueName, L"ConcurrentLimit");
    v13 = NtSetValueKey(*(HANDLE *)a1, &ValueName, 0, 4u, (PVOID)(a1 + 8), 4u);
    if ( v13 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v13, 0LL, 0LL);
    v14 = 0;
    for ( i = 0; ; i = v14 )
    {
      v19 = NtEnumerateKey(*(HANDLE *)a1, i, KeyBasicInformation, PoolWithTag, v6, &ResultLength);
      if ( v19 == -2147483622 )
        break;
      if ( v19 >= 0 )
      {
        PoolWithTag[((unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) + 8] = 0;
        wcscpy_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          *(const wchar_t **)(a1 + 16));
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, L"\\");
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, PoolWithTag + 8);
        v16 = -1LL;
        do
          ++v16;
        while ( DestinationString.Buffer[v16] );
        v24 = 48;
        DestinationString.Length = 2 * v16;
        v25 = 0LL;
        p_DestinationString = &DestinationString;
        v27 = 576;
        v28 = 0LL;
        v17 = CmOpenKey(&KeyHandle, 131103, (__int64)&v24, 0, 0LL);
        if ( v17 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v17, 0LL, 0LL);
        v18 = NtSetValueKey(KeyHandle, &ValueName, 0, 4u, (PVOID)(a1 + 8), 4u);
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v18, 0LL, 0LL);
        NtClose(KeyHandle);
      }
      ++v14;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  result = NtNotifyChangeKey(
             *(HANDLE *)a1,
             0LL,
             (PIO_APC_ROUTINE)(a1 + 24),
             (PVOID)1,
             (PIO_STATUS_BLOCK)(a1 + 56),
             0x10000005u,
             1u,
             (PVOID)(a1 + 72),
             4u,
             1u);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !ExpSetupModeDetected )
  {
    result = PsCreateSystemThread(&KeyHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, ExpExpirationThread, (PVOID)0xC000026ALL);
    if ( result >= 0 )
      return ZwClose(KeyHandle);
  }
  return result;
}
