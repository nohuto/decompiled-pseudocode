/*
 * XREFs of KdPullRemoteFile @ 0x1406F2000
 * Callers:
 *     MiCreateSectionForDriver @ 0x14048338C (MiCreateSectionForDriver.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateFile @ 0x14015AC90 (ZwCreateFile.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     KdpCreateRemoteFile @ 0x1406F20D0 (KdpCreateRemoteFile.c)
 *     KdpCloseRemoteFile @ 0x1406F6720 (KdpCloseRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1406F6854 (KdpReadRemoteFile.c)
 */

__int64 __fastcall KdPullRemoteFile(UNICODE_STRING *a1, __int64 a2, __int64 a3, ULONG a4)
{
  PVOID PoolWithTag; // r14
  NTSTATUS RemoteFile; // ebx
  __int64 v7; // rdi
  LARGE_INTEGER v9; // rbx
  unsigned __int64 v10; // rsi
  LARGE_INTEGER v11; // r15
  int v12; // r9d
  ULONG_PTR v13; // r12
  NTSTATUS v14; // eax
  __int64 v15; // [rsp+68h] [rbp-29h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+7h] BYREF
  ULONG Length; // [rsp+110h] [rbp+7Fh] BYREF

  Length = a4;
  Handle = 0LL;
  v15 = 0LL;
  if ( KdPitchDebugger )
    return 3221226324LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x6F49644Bu);
  if ( !PoolWithTag )
    return 3221225495LL;
  RemoteFile = KdpCreateRemoteFile(&v15, &v18, a1);
  if ( RemoteFile >= 0 )
  {
    memmove(PoolWithTag, a1->Buffer, a1->Length);
    *((_WORD *)PoolWithTag + ((unsigned __int64)a1->Length >> 1)) = 0;
    v9.QuadPart = v18;
    DbgPrintEx(
      0,
      0,
      "KdPullRemoteFile(%p): About to overwrite %ls and preallocate to %I64x\n",
      KeGetCurrentThread(),
      (const wchar_t *)PoolWithTag,
      v18);
    ByteOffset = v9;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RemoteFile = ZwCreateFile(
                   &Handle,
                   0x120116u,
                   &ObjectAttributes,
                   &IoStatusBlock,
                   &ByteOffset,
                   0x80u,
                   0,
                   5u,
                   0x20u,
                   0LL,
                   0);
    DbgPrintEx(
      0,
      0,
      "KdPullRemoteFile(%p): Return from ZwCreateFile with status %x\n",
      KeGetCurrentThread(),
      RemoteFile);
    if ( RemoteFile >= 0 )
    {
      v10 = v18;
      v11.QuadPart = 0LL;
      if ( v18 )
      {
        v7 = v15;
        while ( 1 )
        {
          v12 = v10;
          if ( v10 > 0x2000 )
            v12 = 0x2000;
          RemoteFile = KdpReadRemoteFile(v7, v11.LowPart, (_DWORD)PoolWithTag, v12, (__int64)&Length);
          if ( RemoteFile < 0 )
            goto LABEL_5;
          v13 = Length;
          if ( !Length )
            goto LABEL_5;
          ByteOffset = v11;
          v14 = ZwWriteFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag, Length, &ByteOffset, 0LL);
          RemoteFile = v14;
          if ( v14 < 0 )
          {
            DbgPrintEx(0, 2u, "\nKdPullRemoteFile: Local file write failed, 0x%08x\n", v14);
            goto LABEL_5;
          }
          if ( IoStatusBlock.Information < v13 )
          {
            RemoteFile = -1073741823;
            goto LABEL_5;
          }
          v11.QuadPart += IoStatusBlock.Information;
          v10 -= IoStatusBlock.Information;
          if ( !v10 )
            goto LABEL_5;
        }
      }
    }
    else
    {
      DbgPrintEx(0, 2u, "\nKdPullRemoteFile: Local file open failed, 0x%08x\n", RemoteFile);
    }
  }
  v7 = v15;
LABEL_5:
  if ( v7 )
    KdpCloseRemoteFile(v7);
  if ( Handle )
    ZwClose(Handle);
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)RemoteFile;
}
