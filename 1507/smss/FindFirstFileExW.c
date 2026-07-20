/*
 * XREFs of FindFirstFileExW @ 0x1400152E0
 * Callers:
 *     GetLongPathNameW @ 0x140014B34 (GetLongPathNameW.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14000C6BC (memcpy_0.c)
 *     BaseFindFirstDevice @ 0x1400150DC (BaseFindFirstDevice.c)
 *     BasepInitializeFindFileHandle @ 0x140015140 (BasepInitializeFindFileHandle.c)
 *     BaseSetLastNTError @ 0x14001578C (BaseSetLastNTError.c)
 */

__int64 __fastcall FindFirstFileExW(PCWSTR DosName, __int64 a2, __int64 a3)
{
  char v5; // r14
  ULONG v6; // ecx
  PWSTR Buffer; // rdx
  PWSTR v8; // r15
  USHORT Length; // cx
  USHORT v10; // ax
  unsigned __int64 v11; // rax
  char v12; // si
  NTSTATUS v13; // eax
  NTSTATUS v14; // ebx
  NTSTATUS v15; // eax
  ULONG IsDosDeviceName_U; // eax
  __int64 result; // rax
  unsigned int v18; // edx
  PWSTR v19; // rcx
  int v20; // esi
  unsigned int v21; // eax
  bool v22; // cc
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  struct _UNICODE_STRING NtName; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING FileName; // [rsp+70h] [rbp-90h] BYREF
  void *FileHandle; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  const void *v30[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _RTL_RELATIVE_NAME_U RelativeName; // [rsp+A8h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE FileInformation[8]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v35; // [rsp+118h] [rbp+18h]
  __int64 v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  int v38; // [rsp+138h] [rbp+38h]
  int v39; // [rsp+13Ch] [rbp+3Ch]
  int v40; // [rsp+148h] [rbp+48h]
  unsigned int v41; // [rsp+14Ch] [rbp+4Ch]
  int v42; // [rsp+150h] [rbp+50h]
  char v43; // [rsp+154h] [rbp+54h]
  _BYTE v44[24]; // [rsp+156h] [rbp+56h] BYREF
  _BYTE Src[530]; // [rsp+16Eh] [rbp+6Eh] BYREF

  RtlInitUnicodeString(&DestinationString, DosName);
  if ( !DestinationString.Length
    || (v5 = 1, DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 46) )
  {
    v5 = 0;
  }
  if ( !RtlDosPathNameToRelativeNtPathName_U(DosName, &NtName, (PCWSTR *)&FileName.Buffer, &RelativeName) )
  {
    v6 = 3;
LABEL_65:
    RtlSetLastWin32Error(v6);
    return -1LL;
  }
  Buffer = NtName.Buffer;
  v8 = NtName.Buffer;
  Length = NtName.Length;
  if ( FileName.Buffer )
    v10 = NtName.Length + LOWORD(NtName.Buffer) - LOWORD(FileName.Buffer);
  else
    v10 = 0;
  FileName.Length = v10;
  FileName.MaximumLength = v10;
  if ( !RelativeName.RelativeName.Length || RelativeName.RelativeName.Buffer == FileName.Buffer )
  {
    RelativeName.ContainingDirectory = 0LL;
    if ( FileName.Buffer )
    {
      Length = LOWORD(FileName.Buffer) - LOWORD(NtName.Buffer);
      goto LABEL_15;
    }
  }
  else if ( FileName.Buffer )
  {
    NtName.Buffer = RelativeName.RelativeName.Buffer;
    Length = LOWORD(FileName.Buffer) - LOWORD(RelativeName.RelativeName.Buffer);
    Buffer = RelativeName.RelativeName.Buffer;
LABEL_15:
    NtName.MaximumLength = Length;
    NtName.Length = Length;
  }
  if ( (Length & 0xFFFEu) < 4 || (v11 = (unsigned __int64)Length >> 1, Buffer[v11 - 2] == 58) || Buffer[v11 - 1] == 92 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    NtName.Length = Length - 2;
  }
  ObjectAttributes.RootDirectory = RelativeName.ContainingDirectory;
  ObjectAttributes.ObjectName = &NtName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
  v14 = v13;
  if ( (v13 == -1073741811 || v13 == -1073741565) && v12 )
  {
    NtName.Length += 2;
    v15 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    NtName.Length -= 2;
    v14 = v15;
  }
  if ( v14 < 0 )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v8);
    IsDosDeviceName_U = RtlIsDosDeviceName_U(DestinationString.Buffer);
    if ( IsDosDeviceName_U )
    {
      LOWORD(v30[0]) = IsDosDeviceName_U;
      WORD1(v30[0]) = IsDosDeviceName_U;
      v30[1] = (char *)DestinationString.Buffer + ((unsigned __int64)IsDosDeviceName_U >> 16);
      return BaseFindFirstDevice(v30, (_WORD *)a3);
    }
    if ( v14 == -1073741772 )
      v14 = -1073741766;
    if ( v14 == -1073741788 )
      v14 = -1073741766;
    goto LABEL_32;
  }
  if ( !FileName.Length )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v8);
    NtClose(FileHandle);
    v6 = 2;
    goto LABEL_65;
  }
  if ( FileName.Length == 6 && RtlCompareMemory(FileName.Buffer, L"*.*", 6uLL) == 6 )
  {
    FileName.Length = 2;
    goto LABEL_54;
  }
  v18 = 0;
  v19 = FileName.Buffer;
  if ( (FileName.Length & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v18 && *v19 == 46 && *(v19 - 1) == 42 )
        *(v19 - 1) = 60;
      if ( *v19 == 63 )
        break;
      if ( *v19 == 42 )
        goto LABEL_47;
LABEL_50:
      ++v18;
      ++v19;
      if ( v18 >= FileName.Length >> 1 )
        goto LABEL_51;
    }
    *v19 = 62;
LABEL_47:
    if ( v18 && *(v19 - 1) == 46 )
      *(v19 - 1) = 34;
    goto LABEL_50;
  }
LABEL_51:
  if ( v5 && *(v19 - 1) == 42 )
    *(v19 - 1) = 60;
LABEL_54:
  v14 = NtQueryDirectoryFile(
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
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v8);
  if ( v14 < 0 )
  {
    NtClose(FileHandle);
LABEL_32:
    BaseSetLastNTError((unsigned int)v14);
    return -1LL;
  }
  v20 = v40;
  *(_QWORD *)(a3 + 4) = v35;
  *(_QWORD *)(a3 + 12) = v36;
  *(_QWORD *)(a3 + 20) = v37;
  *(_DWORD *)(a3 + 28) = v39;
  *(_DWORD *)(a3 + 32) = v38;
  v21 = v41;
  v22 = v41 <= 0x206;
  *(_DWORD *)a3 = v20;
  if ( !v22 )
    v21 = 518;
  v23 = v21;
  memcpy_0((void *)(a3 + 44), Src, v21);
  v24 = v43;
  *(_WORD *)(a3 + 2 * (v23 >> 1) + 44) = 0;
  if ( v24 > 0x1A || (unsigned int)v24 >= 0x18 )
    LODWORD(v24) = 24;
  v25 = (unsigned int)v24;
  memcpy_0((void *)(a3 + 564), v44, (unsigned int)v24);
  *(_WORD *)(a3 + 2 * (v25 >> 1) + 564) = 0;
  if ( (v20 & 0x400) != 0 )
    *(_DWORD *)(a3 + 36) = v42;
  result = (__int64)BasepInitializeFindFileHandle((struct _RTL_CRITICAL_SECTION_DEBUG *)FileHandle);
  if ( !result )
  {
    NtClose(FileHandle);
    v6 = 8;
    goto LABEL_65;
  }
  return result;
}
