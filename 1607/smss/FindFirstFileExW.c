/*
 * XREFs of FindFirstFileExW @ 0x140015BA0
 * Callers:
 *     GetLongPathNameW @ 0x1400153F4 (GetLongPathNameW.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14000CC54 (memcpy_0.c)
 *     BaseFindFirstDevice @ 0x14001599C (BaseFindFirstDevice.c)
 *     BasepInitializeFindFileHandle @ 0x140015A00 (BasepInitializeFindFileHandle.c)
 *     BaseSetLastNTError @ 0x14001603C (BaseSetLastNTError.c)
 */

__int64 __fastcall FindFirstFileExW(PCWSTR DosName, __int64 a2, __int64 a3)
{
  ULONG IsDosDeviceName_U; // eax
  __int64 result; // rax
  char v7; // r14
  ULONG v8; // ecx
  PWSTR Buffer; // r8
  PWSTR v10; // r15
  USHORT Length; // ax
  USHORT v12; // cx
  unsigned int v13; // edx
  char v14; // si
  NTSTATUS v15; // eax
  NTSTATUS v16; // ebx
  unsigned int v17; // edx
  PWSTR v18; // rcx
  int v19; // esi
  unsigned int v20; // eax
  bool v21; // cc
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING FileName; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING NtName; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  const void *v29[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _RTL_RELATIVE_NAME_U RelativeName; // [rsp+A8h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE FileInformation[8]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v34; // [rsp+118h] [rbp+18h]
  __int64 v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  int v37; // [rsp+138h] [rbp+38h]
  int v38; // [rsp+13Ch] [rbp+3Ch]
  int v39; // [rsp+148h] [rbp+48h]
  unsigned int v40; // [rsp+14Ch] [rbp+4Ch]
  int v41; // [rsp+150h] [rbp+50h]
  char v42; // [rsp+154h] [rbp+54h]
  _BYTE v43[24]; // [rsp+156h] [rbp+56h] BYREF
  _BYTE Src[530]; // [rsp+16Eh] [rbp+6Eh] BYREF

  RtlInitUnicodeString(&DestinationString, DosName);
  IsDosDeviceName_U = RtlIsDosDeviceName_U(DestinationString.Buffer);
  if ( IsDosDeviceName_U )
  {
    LOWORD(v29[0]) = IsDosDeviceName_U;
    WORD1(v29[0]) = IsDosDeviceName_U;
    v29[1] = (char *)DestinationString.Buffer + ((unsigned __int64)IsDosDeviceName_U >> 16);
    return BaseFindFirstDevice(v29, (_WORD *)a3);
  }
  if ( !DestinationString.Length || (v7 = 1, DestinationString.Buffer[(DestinationString.Length >> 1) - 1] != 46) )
    v7 = 0;
  if ( !RtlDosPathNameToRelativeNtPathName_U(DosName, &NtName, (PCWSTR *)&FileName.Buffer, &RelativeName) )
  {
    v8 = 3;
LABEL_64:
    RtlSetLastWin32Error(v8);
    return -1LL;
  }
  Buffer = NtName.Buffer;
  v10 = NtName.Buffer;
  Length = NtName.Length;
  if ( FileName.Buffer )
    v12 = NtName.Length + LOWORD(NtName.Buffer) - LOWORD(FileName.Buffer);
  else
    v12 = 0;
  FileName.Length = v12;
  FileName.MaximumLength = v12;
  if ( !RelativeName.RelativeName.Length || RelativeName.RelativeName.Buffer == FileName.Buffer )
  {
    RelativeName.ContainingDirectory = 0LL;
    if ( FileName.Buffer )
    {
      Length = LOWORD(FileName.Buffer) - LOWORD(NtName.Buffer);
      goto LABEL_17;
    }
  }
  else if ( FileName.Buffer )
  {
    NtName.Buffer = RelativeName.RelativeName.Buffer;
    Length = LOWORD(FileName.Buffer) - LOWORD(RelativeName.RelativeName.Buffer);
    Buffer = RelativeName.RelativeName.Buffer;
LABEL_17:
    NtName.MaximumLength = Length;
    NtName.Length = Length;
  }
  v13 = Length >> 1;
  if ( v13 < 2 || Buffer[v13 - 2] == 58 || (v14 = 1, Buffer[v13 - 1] != 92) )
    v14 = 0;
  ObjectAttributes.RootDirectory = RelativeName.ContainingDirectory;
  ObjectAttributes.ObjectName = &NtName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
  v16 = v15;
  if ( v14 && (v15 == -1073741811 || v15 == -1073741565) )
  {
    NtName.Length -= 2;
    v16 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
  }
  if ( v16 < 0 )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
    if ( v16 == -1073741772 )
      v16 = -1073741766;
    if ( v16 == -1073741788 )
      v16 = -1073741766;
    goto LABEL_31;
  }
  if ( !FileName.Length )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
    NtClose(FileHandle);
    v8 = 2;
    goto LABEL_64;
  }
  if ( FileName.Length == 6 && RtlCompareMemory(FileName.Buffer, L"*.*", 6uLL) == 6 )
  {
    FileName.Length = 2;
    goto LABEL_53;
  }
  v17 = 0;
  v18 = FileName.Buffer;
  if ( (FileName.Length & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v17 && *v18 == 46 && *(v18 - 1) == 42 )
        *(v18 - 1) = 60;
      if ( *v18 == 63 )
        break;
      if ( *v18 == 42 )
        goto LABEL_46;
LABEL_49:
      ++v17;
      ++v18;
      if ( v17 >= FileName.Length >> 1 )
        goto LABEL_50;
    }
    *v18 = 62;
LABEL_46:
    if ( v17 && *(v18 - 1) == 46 )
      *(v18 - 1) = 34;
    goto LABEL_49;
  }
LABEL_50:
  if ( v7 && *(v18 - 1) == 42 )
    *(v18 - 1) = 60;
LABEL_53:
  v16 = NtQueryDirectoryFile(
          FileHandle,
          0LL,
          0LL,
          0LL,
          &IoStatusBlock,
          FileInformation,
          0x268u,
          FileBothDirectoryInformation,
          1u,
          &FileName,
          0);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
  if ( v16 < 0 )
  {
    NtClose(FileHandle);
LABEL_31:
    BaseSetLastNTError((unsigned int)v16);
    return -1LL;
  }
  v19 = v39;
  *(_QWORD *)(a3 + 4) = v34;
  *(_QWORD *)(a3 + 12) = v35;
  *(_QWORD *)(a3 + 20) = v36;
  *(_DWORD *)(a3 + 28) = v38;
  *(_DWORD *)(a3 + 32) = v37;
  v20 = v40;
  v21 = v40 <= 0x206;
  *(_DWORD *)a3 = v19;
  if ( !v21 )
    v20 = 518;
  v22 = v20;
  memcpy_0((void *)(a3 + 44), Src, v20);
  v23 = v42;
  *(_WORD *)(a3 + 2 * (v22 >> 1) + 44) = 0;
  if ( v23 > 0x1A || (unsigned int)v23 >= 0x18 )
    LODWORD(v23) = 24;
  v24 = (unsigned int)v23;
  memcpy_0((void *)(a3 + 564), v43, (unsigned int)v23);
  *(_WORD *)(a3 + 2 * (v24 >> 1) + 564) = 0;
  if ( (v19 & 0x400) != 0 )
    *(_DWORD *)(a3 + 36) = v41;
  result = (__int64)BasepInitializeFindFileHandle((struct _RTL_CRITICAL_SECTION_DEBUG *)FileHandle);
  if ( !result )
  {
    NtClose(FileHandle);
    v8 = 8;
    goto LABEL_64;
  }
  return result;
}
