/*
 * XREFs of PopFlushVolumes @ 0x1403A39C4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwFlushKey @ 0x140152180 (ZwFlushKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopFlushVolumeWorker @ 0x1403A3C40 (PopFlushVolumeWorker.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

void __fastcall PopFlushVolumes(int a1)
{
  char v2; // di
  UCHAR Type; // al
  UCHAR Signalling; // al
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  struct _KEVENT **v11; // rax
  __int64 v12; // r8
  struct _KEVENT ***v13; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KEVENT *v15; // rcx
  struct _KEVENT *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 *p_Lock; // rax
  __int64 v20; // r8
  __int64 **v21; // rdx
  __int64 **v22; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  struct _KEVENT StartContext[4]; // [rsp+80h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE ThreadHandle; // [rsp+100h] [rbp+77h] BYREF

  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_START);
  memset(StartContext, 0, 0x38uLL);
  StartContext[0].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)StartContext;
  *(_QWORD *)&StartContext[0].Header.Lock = StartContext;
  KeInitializeEvent(&StartContext[1], NotificationEvent, 0);
  if ( a1 == 6 )
  {
    v2 = 2;
  }
  else
  {
    v2 = PopFlushPolicy;
    if ( byte_1402DE320 )
      v2 = 3;
  }
  Type = StartContext[2].Header.Type;
  if ( (v2 & 4) != 0 )
    Type = 1;
  StartContext[2].Header.Type = Type;
  Signalling = StartContext[2].Header.Signalling;
  if ( (v2 & 8) != 0 )
    Signalling = 1;
  StartContext[2].Header.Signalling = Signalling;
  if ( (v2 & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ZwFlushKey(KeyHandle);
      ZwClose(KeyHandle);
    }
  }
  v5 = 0;
  ExAcquireFastMutex(&PopVolumeLock);
  v6 = (__int64 *)PopVolumeDevices;
  while ( v6 != &PopVolumeDevices )
  {
    v7 = v6 - 9;
    v6 = (__int64 *)*v6;
    v8 = v7[3];
    v9 = *(_QWORD *)(v8 + 56);
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 && (*(_DWORD *)(v8 + 52) & 0x10006) == 0 )
    {
      v10 = *(_QWORD *)(v9 + 16);
      if ( !v10 || (*(_DWORD *)(v10 + 52) & 4) == 0 )
      {
        v11 = (struct _KEVENT **)(v7 + 9);
        v12 = v7[9];
        v13 = (struct _KEVENT ***)v7[10];
        if ( *(__int64 **)(v12 + 8) != v7 + 9 || *v13 != v11 )
          __fastfail(3u);
        *v13 = (struct _KEVENT **)v12;
        *(_QWORD *)(v12 + 8) = v13;
        Flink = StartContext[0].Header.WaitListHead.Flink;
        *v11 = StartContext;
        v7[10] = (__int64)Flink;
        if ( (struct _KEVENT *)Flink->Flink != StartContext )
          __fastfail(3u);
        Flink->Flink = (struct _LIST_ENTRY *)v11;
        ++v5;
        StartContext[0].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v7 + 9);
      }
    }
  }
  if ( (v2 & 2) == 0 )
  {
    v15 = *(struct _KEVENT **)&StartContext[0].Header.Lock;
    while ( v15 != StartContext )
    {
      v16 = v15 - 3;
      v15 = *(struct _KEVENT **)&v15->Header.Lock;
      v17 = *(_QWORD *)&v16[1].Header.Lock;
      if ( (*(_DWORD *)(v17 + 52) & 1) == 0 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 56) + 16LL);
        if ( !v18 || (*(_DWORD *)(v18 + 52) & 1) == 0 )
        {
          p_Lock = (__int64 *)&v16[3].Header.Lock;
          v20 = *(_QWORD *)&v16[3].Header.Lock;
          v21 = (__int64 **)p_Lock[1];
          if ( *(__int64 **)(v20 + 8) != p_Lock || *v21 != p_Lock )
            __fastfail(3u);
          *v21 = (__int64 *)v20;
          *(_QWORD *)(v20 + 8) = v21;
          v22 = (__int64 **)qword_1402DDE18;
          *p_Lock = (__int64)&PopVolumeDevices;
          p_Lock[1] = (__int64)v22;
          if ( *v22 != &PopVolumeDevices )
            __fastfail(3u);
          *v22 = p_Lock;
          --v5;
          qword_1402DDE18 = (__int64)p_Lock;
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopVolumeLock);
  if ( v5 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    if ( v5 > 8 )
      v5 = 8;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(StartContext[0].Header.WaitListHead.Blink) = v5;
    while ( --v5 > 0 )
    {
      if ( PsCreateSystemThread(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             0LL,
             0LL,
             PopFlushVolumeWorker,
             StartContext) < 0 )
      {
        ExAcquireFastMutex(&PopVolumeLock);
        LODWORD(StartContext[0].Header.WaitListHead.Blink) -= v5;
        KeReleaseGuardedMutex(&PopVolumeLock);
        break;
      }
      ZwClose(ThreadHandle);
    }
    PopFlushVolumeWorker(StartContext);
    KeWaitForSingleObject(&StartContext[1], Executive, 0, 0, 0LL);
  }
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_STOP);
}
