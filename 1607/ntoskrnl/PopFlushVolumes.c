/*
 * XREFs of PopFlushVolumes @ 0x1403D0D4C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopDiagTraceEventNoPayload @ 0x1400AE73C (PopDiagTraceEventNoPayload.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwFlushKey @ 0x14015BD90 (ZwFlushKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
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
  struct _KEVENT *v19; // rax
  __int64 v20; // r8
  struct _LIST_ENTRY *v21; // rdx
  struct _KEVENT **v22; // rdx
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
    if ( byte_140303500 )
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
        if ( StartContext[0].Header.WaitListHead.Flink->Flink != (struct _LIST_ENTRY *)StartContext )
          __fastfail(3u);
        v7[10] = (__int64)StartContext[0].Header.WaitListHead.Flink;
        *v11 = StartContext;
        ++v5;
        Flink->Flink = (struct _LIST_ENTRY *)v11;
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
          v19 = v16 + 3;
          v20 = *(_QWORD *)&v16[3].Header.Lock;
          v21 = v19->Header.WaitListHead.Flink;
          if ( *(struct _KEVENT **)(v20 + 8) != v19 || (struct _KEVENT *)v21->Flink != v19 )
            __fastfail(3u);
          v21->Flink = (struct _LIST_ENTRY *)v20;
          *(_QWORD *)(v20 + 8) = v21;
          v22 = (struct _KEVENT **)qword_140303C18;
          if ( *(__int64 **)qword_140303C18 != &PopVolumeDevices )
            __fastfail(3u);
          *(_QWORD *)&v19->Header.Lock = &PopVolumeDevices;
          --v5;
          v19->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v22;
          *v22 = v19;
          qword_140303C18 = (__int64)v19;
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
