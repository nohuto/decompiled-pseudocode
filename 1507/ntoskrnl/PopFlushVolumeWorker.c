/*
 * XREFs of PopFlushVolumeWorker @ 0x1403ECD88
 * Callers:
 *     PopFlushVolumes @ 0x1403ECAA4 (PopFlushVolumes.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwFlushBuffersFile @ 0x14017F950 (ZwFlushBuffersFile.c)
 *     ZwCreateFile @ 0x14017FA90 (ZwCreateFile.c)
 *     PopFlushAndHold @ 0x14023CEFC (PopFlushAndHold.c)
 *     NtDeviceIoControlFile @ 0x14048DB20 (NtDeviceIoControlFile.c)
 *     ObQueryNameString @ 0x14054C280 (ObQueryNameString.c)
 */

void __fastcall PopFlushVolumeWorker(struct _KEVENT *StartContext, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int8 v8; // cf
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 **v11; // rax
  __int64 **v12; // rax
  unsigned __int8 v13; // si
  signed __int32 v14; // eax
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int8 v18; // bl
  signed __int32 v19; // eax
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  ULONG ReturnLength; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+B0h] [rbp-50h] BYREF

  v5 = KeAbPreAcquire((ULONG_PTR)&PopVolumeLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v8 = _interlockedbittestandreset((volatile signed __int32 *)&PopVolumeLock, 0);
  if ( !v8 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopVolumeLock, v5);
  while ( 1 )
  {
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    qword_14032E608 = (__int64)KeGetCurrentThread();
    dword_14032E630 = CurrentIrql;
    v9 = *(__int64 **)&StartContext->Header.Lock;
    if ( *(struct _KEVENT **)&StartContext->Header.Lock == StartContext )
      break;
    v10 = *v9;
    v11 = (__int64 **)v9[1];
    if ( *(__int64 **)(*v9 + 8) != v9 || *v11 != v9 )
      __fastfail(3u);
    *v11 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v11;
    v12 = (__int64 **)qword_14032E3D8;
    *v9 = (__int64)&PopVolumeDevices;
    v9[1] = (__int64)v12;
    if ( *v12 != &PopVolumeDevices )
      __fastfail(3u);
    *v12 = v9;
    v13 = dword_14032E630;
    qword_14032E3D8 = (__int64)v9;
    qword_14032E608 = 0LL;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&PopVolumeLock, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopVolumeLock, v14);
    __writecr8(v13);
    KeAbPostRelease((ULONG_PTR)&PopVolumeLock);
    if ( ObQueryNameString((PVOID)*(v9 - 6), &ObjectNameInfo, 0x200u, &ReturnLength) >= 0 )
    {
      if ( ObjectNameInfo.Name.Buffer )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObjectNameInfo;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateFile(
               &FileHandle,
               0x100003u,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               0xC0000000,
               3u,
               1u,
               0x20u,
               0LL,
               0) >= 0 )
        {
          if ( StartContext[2].Header.Type )
          {
            PopFlushAndHold(FileHandle, &IoStatusBlock);
          }
          else if ( StartContext[2].Header.Signalling )
          {
            NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x53C004u, 0LL, 0, 0LL, 0);
          }
          else
          {
            ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
          }
          ZwClose(FileHandle);
        }
      }
    }
    v16 = KeAbPreAcquire((ULONG_PTR)&PopVolumeLock, 0LL, 0LL, v15);
    v6 = v16;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v8 = _interlockedbittestandreset((volatile signed __int32 *)&PopVolumeLock, 0);
    if ( !v8 )
      ExpAcquireFastMutexContended((ULONG_PTR)&PopVolumeLock, v16);
  }
  if ( LODWORD(StartContext->Header.WaitListHead.Blink)-- == 1 )
    KeSetEvent(StartContext + 1, 0, 0);
  v18 = dword_14032E630;
  qword_14032E608 = 0LL;
  v19 = _InterlockedCompareExchange((volatile signed __int32 *)&PopVolumeLock, 1, 0);
  if ( v19 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopVolumeLock, v19);
  __writecr8(v18);
  KeAbPostRelease((ULONG_PTR)&PopVolumeLock);
}
