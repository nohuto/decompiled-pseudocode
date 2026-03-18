/*
 * XREFs of MiCreateSectionForDriver @ 0x14047D2C8
 * Callers:
 *     MiObtainSectionForDriver @ 0x140483D4C (MiObtainSectionForDriver.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     MiGetControlAreaPartition @ 0x140026D5C (MiGetControlAreaPartition.c)
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
 *     MmCreateSystemSection @ 0x1400821E0 (MmCreateSystemSection.c)
 *     ZwOpenFile @ 0x14015A2E0 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     MiLogFailedDriverLoad @ 0x1406593A0 (MiLogFailedDriverLoad.c)
 *     KdPullRemoteFile @ 0x1406F2368 (KdPullRemoteFile.c)
 */

NTSTATUS __fastcall MiCreateSectionForDriver(UNICODE_STRING *a1, int a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rdx
  int v8; // ebx
  int SessionId; // eax
  int SystemSection; // ebx
  PVOID v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ShareAccess; // [rsp+20h] [rbp-39h]
  __int64 v17; // [rsp+38h] [rbp-21h]
  __int64 v18; // [rsp+40h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v22 = 0LL;
  byte_140326810 = 1;
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
    SystemSection = MmCreateSystemSection(
                      (__int64 *)&Object,
                      v7,
                      (int)&ObjectAttributes,
                      (int)&v22,
                      ShareAccess,
                      v8,
                      (__int64)FileHandle,
                      v17,
                      v18,
                      SessionId);
    ObCloseHandle(FileHandle, 0);
    if ( SystemSection < 0 )
      goto LABEL_19;
    v11 = Object;
    v12 = MiSectionControlArea((__int64)Object);
    if ( (int *)MiGetControlAreaPartition(v12, v13, v14, v15) != MiSystemPartition )
    {
      ObfDereferenceObject(v11);
      SystemSection = -1073741740;
    }
    if ( SystemSection < 0 )
    {
LABEL_19:
      MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)SystemSection);
      return SystemSection;
    }
    else
    {
      *a3 = v11;
      return 0;
    }
  }
  return result;
}
