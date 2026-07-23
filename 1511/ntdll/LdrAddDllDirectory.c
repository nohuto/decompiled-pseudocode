/*
 * XREFs of LdrAddDllDirectory @ 0x18008D820
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081A3C (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800445D0 (RtlDetermineDosPathNameType_U.c)
 *     RtlpInvalidatePathCache @ 0x180084570 (RtlpInvalidatePathCache.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _local_unwind @ 0x180096400 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x1800A5860 (ZwQueryAttributesFile.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

NTSTATUS __cdecl LdrAddDllDirectory(PUNICODE_STRING NewDirectory, PDLL_DIRECTORY_COOKIE Cookie)
{
  RTL_PATH_TYPE v4; // eax
  int v5; // ecx
  NTSTATUS v6; // ebx
  char *Heap; // rax
  char *v8; // rbx
  unsigned int v9; // ecx
  _UNKNOWN ***v10; // rax
  void *v11; // rdi
  _DWORD v13[18]; // [rsp+0h] [rbp-C8h] BYREF
  _UNICODE_STRING v14; // [rsp+48h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-70h] BYREF
  _DWORD *v16; // [rsp+88h] [rbp-40h]
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+90h] [rbp-38h] BYREF

  v16 = v13;
  if ( LdrpAppPackagesPath.Buffer )
    return -1073741811;
  v4 = RtlDetermineDosPathNameType_U(NewDirectory->Buffer);
  if ( (unsigned int)v4 <= RtlPathTypeRelative )
  {
    v5 = 41;
    if ( _bittest(&v5, v4) )
      return -1073741811;
  }
  v6 = RtlDosPathNameToRelativeNtPathName(0, 0, NewDirectory, 0LL, &v14, 0LL, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &v14;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14.Buffer);
  }
  if ( v6 < 0 )
    return v6;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)NewDirectory->Length + 18);
  v8 = Heap;
  if ( !Heap )
    return -1073741801;
  memmove(Heap + 18, NewDirectory->Buffer, NewDirectory->Length);
  *((_WORD *)v8 + 8) = NewDirectory->Length;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v9 = NewDirectory->Length + (unsigned __int16)word_180142080 + 2;
  v13[16] = v9;
  if ( v9 > 0xFFFE )
  {
    local_unwind(v16, &loc_1800C75C4);
LABEL_12:
    __fastfail(3u);
  }
  word_180142080 = v9;
  v10 = (_UNKNOWN ***)LdrpUserDllDirectories;
  *(_QWORD *)v8 = LdrpUserDllDirectories;
  *((_QWORD *)v8 + 1) = &LdrpUserDllDirectories;
  if ( v10[1] != &LdrpUserDllDirectories )
    goto LABEL_12;
  v10[1] = (_UNKNOWN **)v8;
  LdrpUserDllDirectories = v8;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v11 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  *Cookie = v8;
  return 0;
}
