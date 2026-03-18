/*
 * XREFs of IopBootLogToFile @ 0x1405F7140
 * Callers:
 *     IopBootLog @ 0x1404C4034 (IopBootLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwWriteFile @ 0x140150720 (ZwWriteFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateFile @ 0x1401510C0 (ZwCreateFile.c)
 */

__int64 __fastcall IopBootLogToFile(PVOID *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  UNICODE_STRING *v4; // rbx
  NTSTATUS v5; // ebx
  ULONG v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int16 Buffer; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+77h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+E8h] [rbp+7Fh] BYREF

  Buffer = -257;
  if ( !qword_1406FB018 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1406FB018[4], 1u);
  v4 = qword_1406FB018;
  if ( !qword_1406FB018[2].Buffer )
    RtlInitUnicodeString(qword_1406FB018 + 2, L"\\SystemRoot\\ntbtlog.txt");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = v4 + 2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateFile(&FileHandle, 0x40000000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 3u, 0x64u, 0LL, 0);
  if ( v5 >= 0 )
  {
    if ( IoStatusBlock.Information == 2 )
      v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 2u, 0LL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = *(unsigned __int16 *)a1;
      ByteOffset.QuadPart = -1LL;
      v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a1[1], v6, &ByteOffset, 0LL);
    }
    ZwClose(FileHandle);
  }
  ExReleaseResourceLite((PERESOURCE)&qword_1406FB018[4]);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v5;
}
