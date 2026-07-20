/*
 * XREFs of BasepGetFileNameInformation @ 0x140013730
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x140013D5C (GetFinalPathNameByHandleW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001578C (BaseSetLastNTError.c)
 */

__int64 __fastcall BasepGetFileNameInformation(
        HANDLE FileHandle,
        FILE_INFORMATION_CLASS FileInformationClass,
        _QWORD *a3)
{
  _DWORD *v4; // rdi
  ULONG v7; // ebx
  _DWORD *Heap; // rax
  NTSTATUS v9; // eax
  __int64 result; // rax
  size_t v11; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  v7 = 528;
  while ( 1 )
  {
    if ( v4 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v7);
    v4 = Heap;
    if ( !Heap )
      break;
    v9 = NtQueryInformationFile(FileHandle, &IoStatusBlock, Heap, v7, FileInformationClass);
    v7 = *v4 + 8;
    if ( v9 != -2147483643 )
      goto LABEL_8;
  }
  v9 = -1073741670;
LABEL_8:
  if ( v9 >= 0 )
  {
    v11 = *(unsigned __int16 *)v4;
    memmove(v4, v4 + 1, v11);
    result = 1LL;
    *a3 = v4;
    *((_WORD *)v4 + (v11 >> 1)) = 0;
  }
  else
  {
    BaseSetLastNTError((unsigned int)v9);
    if ( v4 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
    return 0LL;
  }
  return result;
}
