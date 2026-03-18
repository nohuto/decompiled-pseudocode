/*
 * XREFs of CmpInitializeSystemHivesLoad @ 0x1405B9910
 * Callers:
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404EC358 (CmpQueryHiveRedirectionFileList.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     CmpSendBootDeviceUsageNotification @ 0x14065BC88 (CmpSendBootDeviceUsageNotification.c)
 */

NTSTATUS CmpInitializeSystemHivesLoad()
{
  _QWORD *v0; // rbx
  unsigned int i; // edi
  __int64 v2; // rbp
  PVOID PoolWithTag; // rax
  PVOID v4; // rsi
  UNICODE_STRING *v5; // rbp
  _DWORD *v6; // rdi
  unsigned int j; // ebx
  bool v8; // cl
  NTSTATUS v9; // eax
  NTSTATUS result; // eax
  unsigned int *v11; // rcx
  __int64 v12; // rdx
  UNICODE_STRING Destination; // [rsp+40h] [rbp-D8h] BYREF
  HANDLE ThreadHandle; // [rsp+50h] [rbp-C8h] BYREF
  char v15; // [rsp+60h] [rbp-B8h] BYREF

  CmpNoWrite = 0;
  if ( (MEMORY[0xFFFFF780000002D0] & 0x10000) != 0
    && CmpSystemCacheBackedHivesDesired
    && (int)CmpSendBootDeviceUsageNotification(0LL) >= 0 )
  {
    CmpBootDeviceUsageNotificationSent = 1;
    CmpSystemCacheBackedHivesAllowed = 1;
  }
  KeInitializeEvent(&CmpLoadWorkerEvent, SynchronizationEvent, 0);
  KeInitializeEvent(&CmpLoadWorkerDebugEvent, SynchronizationEvent, 0);
  v0 = &unk_140316770;
  for ( i = 0; i < 6; ++i )
  {
    v2 = 19LL * i;
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 8], NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 11], SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 14], NotificationEvent, 0);
    *(_DWORD *)&Destination.Length = 0x800000;
    Destination.Buffer = (wchar_t *)&v15;
    RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\");
    RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v0 - 17));
    if ( (*((_DWORD *)v0 - 27) & 1) == 0 )
      RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v0 - 18));
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x32364D43u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, i, 0LL);
    *v0 = PoolWithTag;
    *((_DWORD *)v0 - 2) = 0x800000;
    v5 = (UNICODE_STRING *)&CmpMachineHiveList[v2 + 17];
    if ( !CmpQueryHiveRedirectionFileList(&Destination, v5) || *((_WORD *)v0 - 4) == 2 )
    {
      *((_DWORD *)v0 - 2) = 0x800000;
      *v0 = v4;
      RtlAppendUnicodeToString(v5, L"\\SystemRoot\\System32\\Config\\");
      RtlAppendUnicodeToString(v5, (PCWSTR)*(v0 - 18));
    }
    v0 += 19;
  }
  if ( CmpShareSystemHives )
  {
    v11 = (unsigned int *)&unk_140316700;
    v12 = 6LL;
    do
    {
      if ( *((_QWORD *)v11 - 4) )
        *v11 = *v11 & 0xFFFD7FFE | 0x8001;
      v11 += 38;
      --v12;
    }
    while ( v12 );
  }
  CmpSpecialBootCondition = 1;
  v6 = &unk_1403166F0;
  for ( j = 0; j < 6; ++j )
  {
    v8 = (v6[4] & 1) != 0 || CmpInitRmLogOnLoad || ((j - 2) & 0xFFFFFFFA) == 0;
    if ( !*(_QWORD *)v6 )
      *(_QWORD *)v6 = *((_QWORD *)v6 - 2);
    if ( v8 )
      KeSetEvent((struct _KEVENT *)((char *)&stru_140316720 + 152 * j), 0, 0);
    v9 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)CmpLoadHiveThread, (PVOID)j);
    if ( v9 < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, j, v9);
    result = ZwClose(ThreadHandle);
    v6 += 38;
  }
  return result;
}
