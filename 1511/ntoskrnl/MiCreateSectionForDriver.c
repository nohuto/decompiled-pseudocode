/*
 * XREFs of MiCreateSectionForDriver @ 0x1403CC5FC
 * Callers:
 *     MiObtainSectionForDriver @ 0x1403CD7E8 (MiObtainSectionForDriver.c)
 * Callees:
 *     MmCreateSystemSection @ 0x140019F4C (MmCreateSystemSection.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiGetControlAreaPartition @ 0x1400AA0F4 (MiGetControlAreaPartition.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     MiLogFailedDriverLoad @ 0x1406216B4 (MiLogFailedDriverLoad.c)
 *     KdPullRemoteFile @ 0x1406AE0E0 (KdPullRemoteFile.c)
 */

NTSTATUS __fastcall MiCreateSectionForDriver(UNICODE_STRING *a1, int a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rdx
  int v8; // ebx
  int SessionId; // eax
  int v10; // ebx
  PVOID v11; // rdi
  __int64 v12; // rax
  __int64 ShareAccess; // [rsp+20h] [rbp-39h]
  __int64 v14; // [rsp+38h] [rbp-21h]
  __int64 v15; // [rsp+40h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v19 = 0LL;
  byte_1402FE550 = 1;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (int)KdPullRemoteFile() >= 0 )
    DbgPrintEx(0x66u, 2u, "MmLoadSystemImage: Pulled %wZ from kd\n", a1);
  ObjectAttributes.RootDirectory = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a1;
  result = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( result >= 0 )
  {
    v8 = 0x100000;
    if ( (a2 & 1) != 0 )
    {
      v8 = 3145728;
    }
    else if ( a2 < 0 )
    {
      v8 = 5242880;
    }
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( (a2 & 1) != 0 )
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    else
      SessionId = -1;
    v10 = MmCreateSystemSection(
            &Object,
            v7,
            (int)&ObjectAttributes,
            (int)&v19,
            ShareAccess,
            v8,
            FileHandle,
            v14,
            v15,
            SessionId);
    ObCloseHandle(FileHandle, 0);
    if ( v10 < 0 )
      goto LABEL_19;
    v11 = Object;
    v12 = MiSectionControlArea((__int64)Object);
    if ( (int *)MiGetControlAreaPartition(v12) != MiSystemPartition )
    {
      ObfDereferenceObject(v11);
      v10 = -1073741740;
    }
    if ( v10 < 0 )
    {
LABEL_19:
      MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)v10);
      return v10;
    }
    else
    {
      *a3 = v11;
      return 0;
    }
  }
  return result;
}
