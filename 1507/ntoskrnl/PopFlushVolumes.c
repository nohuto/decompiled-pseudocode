/*
 * XREFs of PopFlushVolumes @ 0x1403ECAA4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwFlushKey @ 0x140180B30 (ZwFlushKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopFlushVolumeWorker @ 0x1403ECD88 (PopFlushVolumeWorker.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

void __fastcall PopFlushVolumes(int a1)
{
  __int64 v2; // r9
  char v3; // di
  char v4; // al
  char v5; // al
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  signed __int8 v10; // cf
  __int64 *v11; // rcx
  __int64 *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 *v18; // rdx
  _BYTE **v19; // rdx
  unsigned __int8 v20; // di
  signed __int32 v21; // eax
  __int64 v22; // r9
  _BYTE *v23; // rcx
  _BYTE *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 **v29; // rdx
  __int64 **v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  unsigned __int8 v33; // si
  signed __int32 v34; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  _BYTE StartContext[56]; // [rsp+80h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE ThreadHandle; // [rsp+100h] [rbp+77h] BYREF

  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_START);
  memset(StartContext, 0, sizeof(StartContext));
  *(_QWORD *)&StartContext[8] = StartContext;
  *(_QWORD *)StartContext = StartContext;
  KeInitializeEvent((PRKEVENT)&StartContext[24], NotificationEvent, 0);
  if ( a1 == 6 )
  {
    v3 = 2;
  }
  else
  {
    v3 = PopFlushPolicy;
    if ( byte_14032E8E0 )
      v3 = 3;
  }
  v4 = StartContext[48];
  if ( (v3 & 4) != 0 )
    v4 = 1;
  StartContext[48] = v4;
  v5 = StartContext[49];
  if ( (v3 & 8) != 0 )
    v5 = 1;
  StartContext[49] = v5;
  if ( (v3 & 1) != 0 )
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
  v6 = 0;
  v7 = KeAbPreAcquire((ULONG_PTR)&PopVolumeLock, 0LL, 0LL, v2);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v10 = _interlockedbittestandreset((volatile signed __int32 *)&PopVolumeLock, 0);
  if ( !v10 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopVolumeLock, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v11 = (__int64 *)PopVolumeDevices;
  qword_14032E608 = (__int64)KeGetCurrentThread();
  dword_14032E630 = CurrentIrql;
  while ( v11 != &PopVolumeDevices )
  {
    v12 = v11 - 9;
    v11 = (__int64 *)*v11;
    v13 = v12[3];
    v14 = *(_QWORD *)(v13 + 56);
    if ( (*(_BYTE *)(v14 + 4) & 1) != 0 && (*(_DWORD *)(v13 + 52) & 0x10006) == 0 )
    {
      v15 = *(_QWORD *)(v14 + 16);
      if ( !v15 || (*(_DWORD *)(v15 + 52) & 4) == 0 )
      {
        v16 = v12 + 9;
        v17 = v12[9];
        v18 = (__int64 *)v12[10];
        if ( *(__int64 **)(v17 + 8) != v12 + 9 || (_QWORD *)*v18 != v16 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = *(_BYTE ***)&StartContext[8];
        *v16 = StartContext;
        v12[10] = (__int64)v19;
        if ( *v19 != StartContext )
          __fastfail(3u);
        *v19 = v16;
        ++v6;
        *(_QWORD *)&StartContext[8] = v12 + 9;
      }
    }
  }
  if ( (v3 & 2) == 0 )
  {
    v23 = *(_BYTE **)StartContext;
    while ( v23 != StartContext )
    {
      v24 = v23 - 72;
      v23 = *(_BYTE **)v23;
      v25 = *((_QWORD *)v24 + 3);
      if ( (*(_DWORD *)(v25 + 52) & 1) == 0 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v25 + 56) + 16LL);
        if ( !v26 || (*(_DWORD *)(v26 + 52) & 1) == 0 )
        {
          v27 = (__int64 *)(v24 + 72);
          v28 = *((_QWORD *)v24 + 9);
          v29 = (__int64 **)v27[1];
          if ( *(__int64 **)(v28 + 8) != v27 || *v29 != v27 )
            __fastfail(3u);
          *v29 = (__int64 *)v28;
          *(_QWORD *)(v28 + 8) = v29;
          v30 = (__int64 **)qword_14032E3D8;
          *v27 = (__int64)&PopVolumeDevices;
          v27[1] = (__int64)v30;
          if ( *v30 != &PopVolumeDevices )
            __fastfail(3u);
          *v30 = v27;
          --v6;
          qword_14032E3D8 = (__int64)v27;
        }
      }
    }
  }
  qword_14032E608 = 0LL;
  v20 = dword_14032E630;
  v21 = _InterlockedCompareExchange((volatile signed __int32 *)&PopVolumeLock, 1, 0);
  if ( v21 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopVolumeLock, v21);
  __writecr8(v20);
  KeAbPostRelease((ULONG_PTR)&PopVolumeLock);
  if ( v6 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    if ( v6 > 8 )
      v6 = 8;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_DWORD *)&StartContext[16] = v6;
    while ( --v6 > 0 )
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
        v31 = KeAbPreAcquire((ULONG_PTR)&PopVolumeLock, 0LL, 0LL, v22);
        v32 = v31;
        v33 = KeGetCurrentIrql();
        __writecr8(1uLL);
        v10 = _interlockedbittestandreset((volatile signed __int32 *)&PopVolumeLock, 0);
        if ( !v10 )
          ExpAcquireFastMutexContended((ULONG_PTR)&PopVolumeLock, v31);
        if ( v32 )
          *(_BYTE *)(v32 + 26) |= 1u;
        *(_DWORD *)&StartContext[16] -= v6;
        qword_14032E608 = 0LL;
        dword_14032E630 = v33;
        v34 = _InterlockedCompareExchange((volatile signed __int32 *)&PopVolumeLock, 1, 0);
        if ( v34 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&PopVolumeLock, v34);
        __writecr8(v33);
        KeAbPostRelease((ULONG_PTR)&PopVolumeLock);
        break;
      }
      ZwClose(ThreadHandle);
    }
    PopFlushVolumeWorker(StartContext);
    KeWaitForSingleObject(&StartContext[24], Executive, 0, 0, 0LL);
  }
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_STOP);
}
