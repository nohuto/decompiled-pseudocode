/*
 * XREFs of SmpOpenKnownDllsHandles @ 0x140006BC0
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400093D0 (SmpInitializeKnownDlls.c)
 * Callees:
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 */

__int64 __fastcall SmpOpenKnownDllsHandles(struct _UNICODE_STRING *a1, int a2, void **a3, void **a4)
{
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  WCHAR *Heap; // rax
  struct _UNICODE_STRING LinkTarget; // [rsp+38h] [rbp-49h] BYREF
  void *FileHandle; // [rsp+48h] [rbp-39h] BYREF
  void *SymbolicLinkHandle; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v15[8]; // [rsp+58h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-21h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  int v18; // [rsp+98h] [rbp+17h] BYREF
  const wchar_t *v19; // [rsp+A0h] [rbp+1Fh]
  void *v20; // [rsp+A8h] [rbp+27h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp+2Fh] BYREF
  ULONG DataWritten; // [rsp+E8h] [rbp+67h] BYREF

  ObjectAttributes.ObjectName = a1;
  LinkTarget.Buffer = 0LL;
  SymbolicLinkHandle = 0LL;
  BaseAddress = 0LL;
  v19 = L"KnownDllPath";
  ObjectAttributes.RootDirectory = 0LL;
  v18 = 1703960;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  v7 = NtOpenDirectoryObject(&FileHandle, 0xF000Fu, &ObjectAttributes);
  v8 = v7;
  if ( v7 < 0 )
  {
    FileHandle = 0LL;
    if ( v7 == -1073741772 && !a2 )
    {
      *a3 = 0LL;
      *a4 = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
    ObjectAttributes.RootDirectory = FileHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 1u, &ObjectAttributes);
    if ( v8 < 0 )
    {
      SymbolicLinkHandle = 0LL;
    }
    else
    {
      *(_QWORD *)&LinkTarget.Length = 0LL;
      LinkTarget.Buffer = 0LL;
      v9 = NtQuerySymbolicLinkObject(SymbolicLinkHandle, &LinkTarget, &DataWritten);
      v8 = v9;
      if ( v9 != -1073741789 )
      {
        if ( v9 >= 0 )
          v8 = -1073741823;
        goto LABEL_10;
      }
      Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DataWritten + 2LL);
      LinkTarget.Buffer = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, DataWritten + 2LL);
        LinkTarget.MaximumLength = DataWritten;
        LinkTarget.Length = 0;
        v8 = NtQuerySymbolicLinkObject(SymbolicLinkHandle, &LinkTarget, 0LL);
        if ( v8 >= 0 )
        {
          v8 = RtlDosPathNameToNtPathName_U_WithStatus(LinkTarget.Buffer, v15, 0LL, 0LL);
          if ( v8 < 0 )
          {
            BaseAddress = 0LL;
            goto LABEL_12;
          }
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v8 = NtOpenFile(&v20, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
          if ( v8 >= 0 )
          {
            *a3 = FileHandle;
            *a4 = v20;
            FileHandle = 0LL;
LABEL_9:
            v8 = 0;
          }
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
LABEL_10:
  if ( BaseAddress )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
LABEL_12:
  if ( LinkTarget.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, LinkTarget.Buffer);
  if ( SymbolicLinkHandle )
    NtClose(SymbolicLinkHandle);
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v8;
}
