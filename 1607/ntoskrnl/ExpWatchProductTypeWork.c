/*
 * XREFs of ExpWatchProductTypeWork @ 0x1404CA880
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     NtNotifyChangeKey @ 0x1403FF81C (NtNotifyChangeKey.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     ExUpdateLicenseRegistry @ 0x1404CAF7C (ExUpdateLicenseRegistry.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

NTSTATUS ExpWatchProductTypeWork()
{
  char v0; // r12
  char v1; // r15
  char v2; // si
  HANDLE v3; // r14
  __int64 v4; // rdi
  int v5; // eax
  NTSTATUS v6; // eax
  const wchar_t *v7; // rax
  int v8; // r8d
  int v9; // ecx
  const wchar_t *v10; // rax
  int v11; // r8d
  int v12; // ecx
  char v13; // r11
  __int64 v14; // rdx
  const wchar_t *v15; // rax
  char *v16; // rcx
  int v17; // r9d
  int v18; // r8d
  char *v19; // rdx
  unsigned __int16 v20; // ax
  int v21; // eax
  int updated; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  unsigned int v25; // eax
  ULONG_PTR v26; // rdi
  signed __int64 v27; // rcx
  ULONG_PTR v28; // rtt
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-79h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-61h] BYREF
  HANDLE v33; // [rsp+78h] [rbp-59h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-41h] BYREF
  int v36; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-29h]
  UNICODE_STRING *p_DestinationString; // [rsp+B0h] [rbp-21h]
  int v39; // [rsp+B8h] [rbp-19h]
  __int128 v40; // [rsp+C0h] [rbp-11h]
  _OWORD KeyValueInformation[2]; // [rsp+D0h] [rbp-1h] BYREF
  __int16 v42; // [rsp+F0h] [rbp+1Fh]

  v0 = 1;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v36 = 48;
  p_DestinationString = &DestinationString;
  v37 = 0LL;
  v39 = 576;
  v40 = 0LL;
  v4 = KeAbPreAcquire((ULONG_PTR)&ExpKeyManipLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpKeyManipLock, v4, (ULONG_PTR)&ExpKeyManipLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v5 = CmOpenKey(&v33, 131103, (__int64)&v36, 0, 0LL);
      if ( v5 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v5, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    ExpProductTypeKey = v33;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v6 = NtQueryValueKey(
             ExpProductTypeKey,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v6 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v6 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v6 == -1073741670 );
      }
      if ( v6 >= 0 )
      {
        v7 = L"LanmanNT";
        do
        {
          v8 = *(const wchar_t *)((char *)v7 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
          v9 = *v7 - v8;
          if ( v9 )
            break;
          ++v7;
        }
        while ( v8 );
        if ( !v9 )
          goto LABEL_56;
        v10 = L"ServerNT";
        do
        {
          v11 = *(const wchar_t *)((char *)v10 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
          v12 = *v10 - v11;
          if ( v12 )
            break;
          ++v10;
        }
        while ( v11 );
        v13 = 0;
        if ( !v12 )
LABEL_56:
          v13 = 1;
        v14 = ExpProductTypeValueInfo;
        v15 = L"WinNT";
        v16 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v17 = *(const wchar_t *)((char *)v15 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v18 = *v15 - v17;
          if ( v18 )
            break;
          ++v15;
        }
        while ( v17 );
        if ( v18 && v13 )
        {
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v14 + 16) = KeyValueInformation[1];
          *(_WORD *)(v14 + 32) = v42;
        }
        v19 = (char *)((char *)KeyValueInformation + 12 - v16);
        while ( 1 )
        {
          v20 = *(_WORD *)v16;
          if ( *(_WORD *)v16 != *(_WORD *)&v19[(_QWORD)v16] )
            break;
          v16 += 2;
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_27;
          }
        }
        v21 = v20 < *(_WORD *)&v19[(_QWORD)v16] ? -1 : 1;
LABEL_27:
        v0 = v21 != 0 ? v0 : 0;
      }
      updated = ExUpdateLicenseRegistry();
      if ( updated < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)updated, 1uLL, 0LL);
      CmpLockRegistryFreezeAware(1);
      v1 = 1;
      v23 = NtSetValueKey(
              ExpProductTypeKey,
              &ValueName,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (PVOID)(ExpProductTypeValueInfo + 12),
              *(_DWORD *)(ExpProductTypeValueInfo + 8));
      if ( v23 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v23 = NtSetValueKey(
                  ExpProductTypeKey,
                  &ValueName,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (PVOID)(ExpProductTypeValueInfo + 12),
                  *(_DWORD *)(ExpProductTypeValueInfo + 8));
        }
        while ( v23 == -1073741670 );
      }
      if ( v23 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v23, 1uLL, 0LL);
      if ( qword_140329688 )
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        v24 = NtSetValueKey(
                ExpProductTypeKey,
                &ValueName,
                0,
                *((_DWORD *)qword_140329688 + 1),
                (char *)qword_140329688 + 12,
                *((_DWORD *)qword_140329688 + 2));
        if ( v24 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v24 = NtSetValueKey(
                    ExpProductTypeKey,
                    &ValueName,
                    0,
                    *((_DWORD *)qword_140329688 + 1),
                    (char *)qword_140329688 + 12,
                    *((_DWORD *)qword_140329688 + 2));
          }
          while ( v24 == -1073741670 );
        }
        if ( v24 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v24, 2uLL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        NtDeleteValueKey(ExpProductTypeKey, &ValueName);
      }
      v2 = 1;
    }
    while ( 1 )
    {
      v25 = NtNotifyChangeKey(
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
      v26 = v25;
      if ( v25 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( (v26 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v26, 4uLL, 0LL);
    if ( !ExpSetupModeDetected
      && v0
      && PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, ExpExpirationThread, (PVOID)0xC000026ALL) >= 0 )
    {
      ZwClose(ThreadHandle);
    }
  }
  _m_prefetchw(&ExpKeyManipLock);
  v27 = ExpKeyManipLock - 16;
  if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v27 = 0LL;
  if ( (ExpKeyManipLock & 2) != 0
    || (v28 = ExpKeyManipLock,
        v28 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v27, ExpKeyManipLock)) )
  {
    ExfReleasePushLock(&ExpKeyManipLock);
  }
  result = KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  if ( v3 )
  {
    if ( v2 )
      NtFlushKey(v3);
    return ObCloseHandle(v3, 0);
  }
  return result;
}
