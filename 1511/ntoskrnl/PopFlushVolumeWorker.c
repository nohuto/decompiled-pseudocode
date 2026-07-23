/*
 * XREFs of PopFlushVolumeWorker @ 0x1403A3C40
 * Callers:
 *     PopFlushVolumes @ 0x1403A39C4 (PopFlushVolumes.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwFlushBuffersFile @ 0x140150F80 (ZwFlushBuffersFile.c)
 *     ZwCreateFile @ 0x1401510C0 (ZwCreateFile.c)
 *     PopFlushAndHold @ 0x1401EE844 (PopFlushAndHold.c)
 *     NtDeviceIoControlFile @ 0x140411FA0 (NtDeviceIoControlFile.c)
 *     ObQueryNameString @ 0x1404B5AC8 (ObQueryNameString.c)
 */

void __fastcall PopFlushVolumeWorker(struct _KEVENT *StartContext)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 **v4; // rax
  __int64 **v5; // rax
  HANDLE FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-98h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+B8h] [rbp-50h] BYREF

  ExAcquireFastMutex(&PopVolumeLock);
  while ( 1 )
  {
    v2 = *(__int64 **)&StartContext->Header.Lock;
    if ( *(struct _KEVENT **)&StartContext->Header.Lock == StartContext )
      break;
    v3 = *v2;
    v4 = (__int64 **)v2[1];
    if ( *(__int64 **)(*v2 + 8) != v2 || *v4 != v2 )
      __fastfail(3u);
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = (__int64 **)qword_1402DDE18;
    *v2 = (__int64)&PopVolumeDevices;
    v2[1] = (__int64)v5;
    if ( *v5 != &PopVolumeDevices )
      __fastfail(3u);
    *v5 = v2;
    qword_1402DDE18 = (__int64)v2;
    KeReleaseGuardedMutex(&PopVolumeLock);
    if ( ObQueryNameString((PVOID)*(v2 - 6), &ObjectNameInfo, 0x200u, &ReturnLength) >= 0 )
    {
      if ( ObjectNameInfo.Name.Buffer )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
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
    ExAcquireFastMutex(&PopVolumeLock);
  }
  if ( LODWORD(StartContext->Header.WaitListHead.Blink)-- == 1 )
    KeSetEvent(StartContext + 1, 0, 0);
  KeReleaseGuardedMutex(&PopVolumeLock);
}
