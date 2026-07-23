/*
 * XREFs of LdrpCnvrtShortToLongFileName @ 0x1800D3D74
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180015320 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlReleaseRelativeName @ 0x18003D350 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenFile @ 0x1800A5720 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x1800A5760 (NtQueryDirectoryFile.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall LdrpCnvrtShortToLongFileName(PCWSTR SourceString, PCWSTR a2, _QWORD *a3)
{
  unsigned __int16 *Buffer; // rdi
  NTSTATUS v6; // ebx
  _DWORD *Heap; // rdi
  unsigned int v8; // eax
  _WORD *v9; // rax
  _WORD *v10; // rsi
  _UNICODE_STRING NtFileName; // [rsp+68h] [rbp-39h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-19h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+98h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+67h] BYREF

  FileHandle = 0LL;
  Buffer = 0LL;
  if ( !SourceString || !a2 || !a3 )
    return 3221225485LL;
  if ( *SourceString == 92 )
  {
    RtlInitUnicodeString(&NtFileName, SourceString);
LABEL_10:
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    if ( Buffer )
    {
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    }
    if ( v6 >= 0 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x410uLL);
      if ( Heap )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        v6 = NtQueryDirectoryFile(
               FileHandle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               Heap,
               0x410u,
               FileBothDirectoryInformation,
               1u,
               &DestinationString,
               0);
        if ( v6 >= 0 )
        {
          v8 = Heap[15];
          if ( v8 <= 0x104 )
          {
            v9 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8 + 4);
            v10 = v9;
            if ( v9 )
            {
              memmove(v9, (char *)Heap + 94, (unsigned int)Heap[15]);
              v10[(unsigned __int64)(unsigned int)Heap[15] >> 1] = 0;
              *a3 = v10;
            }
            else
            {
              v6 = -1073741801;
            }
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v6 = -1073741801;
      }
    }
    goto LABEL_21;
  }
  v6 = RtlDosPathNameToRelativeNtPathName_U_WithStatus(SourceString, &NtFileName, 0LL, &RelativeName);
  if ( v6 >= 0 )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
      NtFileName = RelativeName.RelativeName;
    else
      RelativeName.ContainingDirectory = 0LL;
    goto LABEL_10;
  }
LABEL_21:
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v6;
}
