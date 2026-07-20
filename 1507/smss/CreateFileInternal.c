/*
 * XREFs of CreateFileInternal @ 0x140014314
 * Callers:
 *     CreateFileW @ 0x140014820 (CreateFileW.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x14000C560 (_guard_check_icall_nop.c)
 *     BaseSetLastNTError @ 0x14001578C (BaseSetLastNTError.c)
 */

__int64 __fastcall CreateFileInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  ULONG EaLength; // r12d
  int v6; // r15d
  __int64 v7; // rcx
  unsigned int v9; // esi
  int v10; // r13d
  int v11; // ebx
  NTSTATUS inited; // eax
  ULONG v13; // ecx
  HANDLE ContainingDirectory; // rax
  int v15; // ebx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  void *EaBuffer; // r14
  char *v19; // rcx
  ULONG v20; // ebx
  PVOID Heap; // rax
  NTSTATUS v22; // r15d
  ULONG v23; // eax
  void (__fastcall *v24)(ULONG *); // rax
  NTSTATUS v25; // ebx
  ULONG CreateOptions; // [rsp+68h] [rbp-A0h] BYREF
  int v27; // [rsp+6Ch] [rbp-9Ch]
  int DestinationString; // [rsp+70h] [rbp-98h]
  ULONG DestinationString_4; // [rsp+74h] [rbp-94h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+78h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-80h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  void *FileHandle; // [rsp+A0h] [rbp-68h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+A8h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  int v36; // [rsp+F8h] [rbp-10h] BYREF
  int v37; // [rsp+FCh] [rbp-Ch]
  __int16 v38; // [rsp+100h] [rbp-8h]

  EaLength = 0;
  DestinationString = 0;
  v6 = 0;
  if ( a5 )
  {
    if ( *(_DWORD *)a5 < 0x20u )
    {
      v7 = 3221225485LL;
LABEL_4:
      BaseSetLastNTError(v7);
      return -1LL;
    }
    v9 = *(_DWORD *)(a5 + 8);
  }
  else
  {
    v9 = 0;
  }
  if ( a5 )
    v10 = *(_DWORD *)(a5 + 4);
  else
    v10 = 0;
  if ( a5 )
    v11 = *(_DWORD *)(a5 + 12);
  else
    v11 = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString_8, L"\\\\.\\MountPointManager");
  if ( inited < 0 )
  {
LABEL_15:
    v7 = (unsigned int)inited;
    goto LABEL_4;
  }
  if ( DestinationString_8.Length <= 1u
    || (v27 = 1, aMountpointmana[((unsigned __int64)DestinationString_8.Length >> 1) - 1] != 92) )
  {
    v27 = 0;
  }
  CreateOptions = 0;
  inited = RtlDosPathNameToRelativeNtPathName_U_WithStatus(
             L"\\\\.\\MountPointManager",
             &DestinationString_8,
             0LL,
             &RelativeName);
  if ( inited < 0 )
  {
    if ( inited == -1073741801 || inited == -1073741670 )
      goto LABEL_15;
    v13 = 3;
LABEL_23:
    RtlSetLastWin32Error(v13);
    return -1LL;
  }
  BaseAddress = DestinationString_8.Buffer;
  if ( RelativeName.RelativeName.Length )
  {
    ContainingDirectory = RelativeName.ContainingDirectory;
    DestinationString_8 = RelativeName.RelativeName;
  }
  else
  {
    ContainingDirectory = 0LL;
    RelativeName.ContainingDirectory = 0LL;
  }
  ObjectAttributes.RootDirectory = ContainingDirectory;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = v11 & 0x1F0000;
  ObjectAttributes.ObjectName = &DestinationString_8;
  ObjectAttributes.Attributes = ~(unsigned __int8)(v9 >> 18) & 0x40 | (v9 >> 6) & 0x800;
  if ( (v15 & 0x100000) != 0 )
  {
    v16 = v15 & 0xFFEFFFFF;
    if ( (v16 & 0x40000) != 0 )
    {
      LOBYTE(v38) = 1;
      v16 &= ~0x40000u;
    }
    else
    {
      LOBYTE(v38) = 0;
    }
    if ( (v16 & 0x80000) != 0 )
    {
      HIBYTE(v38) = 1;
      v16 &= ~0x80000u;
    }
    else
    {
      HIBYTE(v38) = 0;
    }
    v37 = HIWORD(v16);
  }
  else
  {
    v38 = 257;
    v37 = 2;
  }
  v36 = 12;
  ObjectAttributes.SecurityQualityOfService = &v36;
  if ( a5 )
  {
    v17 = *(_QWORD *)(a5 + 16);
    if ( v17 )
    {
      ObjectAttributes.SecurityDescriptor = *(PVOID *)(v17 + 8);
      if ( *(_DWORD *)(v17 + 16) )
        ObjectAttributes.Attributes = ~(unsigned __int8)(v9 >> 18) & 0x40 | (v9 >> 6) & 0x800 | 2;
    }
  }
  EaBuffer = 0LL;
  if ( a5 )
  {
    v19 = *(char **)(a5 + 24);
    if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
      && NtQueryInformationFile(v19, &IoStatusBlock, &DestinationString_4, 4u, FileEaInformation) >= 0 )
    {
      v20 = DestinationString_4;
      if ( DestinationString_4 )
      {
        while ( 1 )
        {
          v20 *= 2;
          Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v20);
          EaLength = 0;
          EaBuffer = Heap;
          if ( !Heap )
            break;
          v22 = NtQueryEaFile(*(HANDLE *)(a5 + 24), &IoStatusBlock, Heap, v20, 0, 0LL, 0, 0LL, 1u);
          if ( v22 >= 0 )
          {
            EaLength = IoStatusBlock.Information;
          }
          else
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
            EaBuffer = 0LL;
            IoStatusBlock.Information = 0LL;
          }
          if ( v22 != -2147483643 && v22 != -1073741789 )
          {
            v6 = DestinationString;
            goto LABEL_51;
          }
        }
        RtlReleaseRelativeName(&RelativeName);
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
        v7 = 3221225495LL;
        goto LABEL_4;
      }
    }
  }
LABEL_51:
  CreateOptions |= (v9 >> 2) & 0x10000 | (v9 >> 5) & 0x40000 | ((v9 & 0x2000000) != 0 ? 0x4000 : 0) | (v9 >> 17) & 0x800 | (v9 >> 25) & 4 | ~(v9 >> 25) & 0x20 | (v9 >> 30) & 2 | (v9 >> 26) & 8;
  v23 = CreateOptions;
  if ( (HIWORD(KeGetPcr()->NtTib.Self[109].StackLimit) & 0x800) != 0 )
  {
    v23 = CreateOptions | 0x40000;
    CreateOptions |= 0x40000u;
  }
  if ( (v9 & 0x4000000) != 0 )
  {
    v23 |= 0x1000u;
    v6 = 0x10000;
    CreateOptions = v23;
  }
  if ( (v9 & 0x200000) != 0 )
  {
    v23 |= 0x200000u;
    CreateOptions = v23;
  }
  if ( (v9 & 0x100000) != 0 )
  {
    v23 |= 0x400000u;
    CreateOptions = v23;
  }
  if ( (v9 & 0x2000000) == 0 )
    CreateOptions = v23 | 0x40;
  v24 = (void (__fastcall *)(ULONG *))SbSelectProcedure(2880154539LL, 1LL, "kLsE", 1LL);
  if ( v24 )
    v24(&CreateOptions);
  v25 = NtCreateFile(
          &FileHandle,
          v6 | 0x100080,
          &ObjectAttributes,
          &IoStatusBlock,
          0LL,
          v10 & 0x2FFA7,
          3u,
          1u,
          CreateOptions,
          EaBuffer,
          EaLength);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
  if ( v25 < 0 )
  {
    BaseSetLastNTError((unsigned int)v25);
    if ( v25 == -1073741771 )
    {
      v13 = 80;
    }
    else
    {
      if ( v25 != -1073741638 )
        return -1LL;
      v13 = 3;
      if ( !v27 )
        v13 = 5;
    }
    goto LABEL_23;
  }
  RtlSetLastWin32Error(0);
  return (__int64)FileHandle;
}
