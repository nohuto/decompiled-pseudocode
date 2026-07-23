/*
 * XREFs of IopBootLogToFile @ 0x140620EFC
 * Callers:
 *     IopBootLog @ 0x1404D1E28 (IopBootLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x140581A08 (IopCopyBootLogRegistryToFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateFile @ 0x14015AC90 (ZwCreateFile.c)
 */

__int64 __fastcall IopBootLogToFile(PVOID *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  UNICODE_STRING *v4; // rbx
  NTSTATUS v5; // ebx
  ULONG v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int16 Buffer; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+77h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+E8h] [rbp+7Fh] BYREF

  Buffer = -257;
  if ( !qword_140747020 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140747020[4], 1u);
  v4 = qword_140747020;
  if ( !qword_140747020[2].Buffer )
    RtlInitUnicodeString(qword_140747020 + 2, L"\\SystemRoot\\ntbtlog.txt");
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
  ExReleaseResourceLite((PERESOURCE)&qword_140747020[4]);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v7, v8, v9);
  return (unsigned int)v5;
}
