/*
 * XREFs of sub_1404F4090 @ 0x1404F4090
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     NtNotifyChangeKey @ 0x14042C848 (NtNotifyChangeKey.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     ExUpdateLicenseRegistry @ 0x1404F3AA8 (ExUpdateLicenseRegistry.c)
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     CmOpenKey @ 0x1404F5560 (CmOpenKey.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

void sub_1404F4090()
{
  char v0; // r15
  char v1; // r14
  char v2; // di
  HANDLE v3; // rsi
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r9
  int v8; // eax
  NTSTATUS v9; // eax
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const wchar_t *v14; // rax
  int v15; // r8d
  int v16; // ecx
  const wchar_t *v17; // rax
  int v18; // r8d
  int v19; // ecx
  char v20; // r11
  __int64 v21; // rdx
  const wchar_t *v22; // rax
  unsigned __int16 v23; // ax
  int v24; // eax
  int updated; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  unsigned int v28; // eax
  ULONG_PTR v29; // rbx
  signed __int64 v30; // rcx
  ULONG_PTR v31; // rtt
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-79h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-61h] BYREF
  void *v35; // [rsp+78h] [rbp-59h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp-51h] BYREF
  int v37; // [rsp+90h] [rbp-41h] BYREF
  __int64 v38; // [rsp+98h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-31h]
  int v40; // [rsp+A8h] [rbp-29h]
  __int128 v41; // [rsp+B0h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-11h] BYREF
  _OWORD KeyValueInformation[2]; // [rsp+D0h] [rbp-1h] BYREF
  __int16 v44; // [rsp+F0h] [rbp+1Fh]

  v0 = 1;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v37 = 48;
  p_DestinationString = &DestinationString;
  v38 = 0LL;
  v40 = 576;
  v41 = 0LL;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpKeyManipLock, 0LL, 0LL, v4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpKeyManipLock, v6, (ULONG_PTR)&ExpKeyManipLock, v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v8 = CmOpenKey((unsigned int)&v35, 131103, (unsigned int)&v37, 0, 0LL);
      if ( v8 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v8 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v8, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    ExpProductTypeKey = v35;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v9 = NtQueryValueKey(
             ExpProductTypeKey,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v9 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v9 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v9 == -1073741670 );
      }
      if ( v9 >= 0 )
      {
        v14 = L"LanmanNT";
        do
        {
          v15 = *(const wchar_t *)((char *)v14 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
          v16 = *v14 - v15;
          if ( v16 )
            break;
          ++v14;
        }
        while ( v15 );
        if ( !v16 )
          goto LABEL_50;
        v17 = L"ServerNT";
        do
        {
          v18 = *(const wchar_t *)((char *)v17 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
          v19 = *v17 - v18;
          if ( v19 )
            break;
          ++v17;
        }
        while ( v18 );
        v20 = 0;
        if ( !v19 )
LABEL_50:
          v20 = 1;
        v21 = ExpProductTypeValueInfo;
        v22 = L"WinNT";
        v11 = ExpProductTypeValueInfo + 12;
        do
        {
          v13 = *(const wchar_t *)((char *)v22 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v12 = *v22 - (unsigned int)v13;
          if ( (_DWORD)v12 )
            break;
          ++v22;
        }
        while ( (_DWORD)v13 );
        if ( (_DWORD)v12 && v20 )
        {
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v21 + 16) = KeyValueInformation[1];
          *(_WORD *)(v21 + 32) = v44;
        }
        v10 = (char *)KeyValueInformation - v11 + 12;
        while ( 1 )
        {
          v23 = *(_WORD *)v11;
          if ( *(_WORD *)v11 != *(_WORD *)&v10[v11] )
            break;
          v11 += 2LL;
          if ( !v23 )
          {
            v24 = 0;
            goto LABEL_27;
          }
        }
        v24 = v23 < *(_WORD *)&v10[v11] ? -1 : 1;
LABEL_27:
        v0 = v24 != 0 ? v0 : 0;
      }
      updated = ExUpdateLicenseRegistry(v11, (__int64)v10, v12, v13);
      if ( updated < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)updated, 1uLL, 0LL);
      CmpLockRegistryFreezeAware(1);
      v1 = 1;
      v26 = NtSetValueKey(
              ExpProductTypeKey,
              &ValueName,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (PVOID)(ExpProductTypeValueInfo + 12),
              *(_DWORD *)(ExpProductTypeValueInfo + 8));
      if ( v26 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v26 = NtSetValueKey(
                  ExpProductTypeKey,
                  &ValueName,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (PVOID)(ExpProductTypeValueInfo + 12),
                  *(_DWORD *)(ExpProductTypeValueInfo + 8));
        }
        while ( v26 == -1073741670 );
      }
      if ( v26 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v26, 1uLL, 0LL);
      if ( qword_140356910 )
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        v27 = NtSetValueKey(
                ExpProductTypeKey,
                &ValueName,
                0,
                *((_DWORD *)qword_140356910 + 1),
                (char *)qword_140356910 + 12,
                *((_DWORD *)qword_140356910 + 2));
        if ( v27 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v27 = NtSetValueKey(
                    ExpProductTypeKey,
                    &ValueName,
                    0,
                    *((_DWORD *)qword_140356910 + 1),
                    (char *)qword_140356910 + 12,
                    *((_DWORD *)qword_140356910 + 2));
          }
          while ( v27 == -1073741670 );
        }
        if ( v27 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v27, 2uLL, 0LL);
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
      v28 = NtNotifyChangeKey(
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
      v29 = v28;
      if ( v28 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( (v29 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v29, 4uLL, 0LL);
    if ( !ExpSetupModeDetected
      && v0
      && PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, ExpExpirationThread, (PVOID)0xC000026ALL) >= 0 )
    {
      ZwClose(ThreadHandle);
    }
  }
  _m_prefetchw(&ExpKeyManipLock);
  v30 = ExpKeyManipLock - 16;
  if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v30 = 0LL;
  if ( (ExpKeyManipLock & 2) != 0
    || (v31 = ExpKeyManipLock,
        v31 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v30, ExpKeyManipLock)) )
  {
    ExfReleasePushLock(&ExpKeyManipLock, v5);
  }
  KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  if ( v3 )
  {
    if ( v2 )
      NtFlushKey(v3);
    ObCloseHandle(v3, 0);
  }
}
