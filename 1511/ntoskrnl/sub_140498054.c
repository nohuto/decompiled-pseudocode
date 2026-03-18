/*
 * XREFs of sub_140498054 @ 0x140498054
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     NtNotifyChangeKey @ 0x140499C68 (NtNotifyChangeKey.c)
 *     ExUpdateLicenseRegistry @ 0x14049B478 (ExUpdateLicenseRegistry.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

void sub_140498054()
{
  char v0; // r15
  char v1; // r14
  char v2; // di
  HANDLE v3; // rsi
  __int64 v4; // rbx
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
  ULONG_PTR v26; // rbx
  signed __int64 v27; // rcx
  ULONG_PTR v28; // rtt
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-79h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-61h] BYREF
  HANDLE v32; // [rsp+78h] [rbp-59h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp-51h] BYREF
  int v34; // [rsp+90h] [rbp-41h] BYREF
  __int64 v35; // [rsp+98h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-31h]
  int v37; // [rsp+A8h] [rbp-29h]
  __int128 v38; // [rsp+B0h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-11h] BYREF
  _OWORD KeyValueInformation[2]; // [rsp+D0h] [rbp-1h] BYREF
  __int16 v41; // [rsp+F0h] [rbp+1Fh]

  v0 = 1;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v34 = 48;
  p_DestinationString = &DestinationString;
  v35 = 0LL;
  v37 = 576;
  v38 = 0LL;
  v4 = KeAbPreAcquire((ULONG_PTR)&ExpKeyManipLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpKeyManipLock, v4, (ULONG_PTR)&ExpKeyManipLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v5 = CmOpenKey(&v32, 131103, (__int64)&v34, 0, 0LL);
      if ( v5 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v5, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    ExpProductTypeKey = v32;
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
          goto LABEL_50;
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
LABEL_50:
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
          *(_WORD *)(v14 + 32) = v41;
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
      if ( qword_140306610 )
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        v24 = NtSetValueKey(
                ExpProductTypeKey,
                &ValueName,
                0,
                *((_DWORD *)qword_140306610 + 1),
                (char *)qword_140306610 + 12,
                *((_DWORD *)qword_140306610 + 2));
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
                    *((_DWORD *)qword_140306610 + 1),
                    (char *)qword_140306610 + 12,
                    *((_DWORD *)qword_140306610 + 2));
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
  KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  if ( v3 )
  {
    if ( v2 )
      NtFlushKey(v3);
    ObCloseHandle(v3, 0);
  }
}
