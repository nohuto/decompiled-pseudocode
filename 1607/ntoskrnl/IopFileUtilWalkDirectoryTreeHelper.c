/*
 * XREFs of IopFileUtilWalkDirectoryTreeHelper @ 0x14064C398
 * Callers:
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14064C174 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x1407CF920 (IopFileUtilWalkDirectoryTreeTopDown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwWaitForSingleObject @ 0x14015A270 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x14015A890 (ZwQueryDirectoryFile.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeHelper(
        UNICODE_STRING *a1,
        char a2,
        __int64 (__fastcall *a3)(UNICODE_STRING *, UNICODE_STRING *, __int64, __int64),
        __int64 a4,
        unsigned int *FileInformation,
        int a6,
        __int64 a7)
{
  UNICODE_STRING *v8; // rsi
  NTSTATUS Status; // ebx
  unsigned int *v10; // rdi
  unsigned int *v11; // r14
  unsigned __int64 v12; // rax
  __int16 v13; // cx
  const WCHAR *i; // r15
  __int64 v15; // r8
  bool v16; // si
  UNICODE_STRING **v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int16 v20; // si
  UNICODE_STRING *PoolWithTag; // rdi
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  unsigned int *v24; // [rsp+70h] [rbp-59h]
  UNICODE_STRING Source; // [rsp+78h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  __int16 v29; // [rsp+120h] [rbp+57h]

  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v8 = a1;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, ((~a2 & 0x10) << 17) | 0x4001);
  if ( Status < 0 )
    return (unsigned int)Status;
  v10 = FileInformation;
  Status = ZwQueryDirectoryFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             FileInformation,
             0x3FEu,
             FileBothDirectoryInformation,
             0,
             0LL,
             1u);
  if ( Status < 0 )
    goto LABEL_33;
  while ( 2 )
  {
    if ( Status == 259 )
    {
      ZwWaitForSingleObject(FileHandle, 1u, 0LL);
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status < 0 )
        break;
    }
    v11 = v10;
    v24 = v10 + 15;
    v12 = (unsigned __int64)v10[15] >> 1;
    v13 = *((_WORD *)v10 + v12 + 47);
    *((_WORD *)v10 + v12 + 47) = 0;
    for ( i = (const WCHAR *)v10 + 47; ; i = (const WCHAR *)v11 + 47 )
    {
      v29 = v13;
      RtlInitUnicodeString(&Source, i);
      v20 = Source.Length + v8->Length + 2;
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v20 + 38LL, 0x75466F49u);
      if ( !PoolWithTag )
        break;
      PoolWithTag[1].MaximumLength = v20;
      v8 = a1;
      PoolWithTag[1].Buffer = &PoolWithTag[2].Length;
      PoolWithTag[1].Length = 0;
      RtlCopyUnicodeString(PoolWithTag + 1, a1);
      RtlAppendUnicodeToString(PoolWithTag + 1, L"\\");
      RtlAppendUnicodeStringToString(PoolWithTag + 1, &Source);
      v15 = v11[14];
      if ( (v15 & 0x10) != 0 )
      {
        v16 = !wcsicmp(i, L".") || !wcsicmp(i, L"..");
        if ( (a2 & 2) != 0 )
        {
          if ( (a2 & 4) == 0 || !v16 )
          {
            Status = a3(PoolWithTag + 1, &Source, v11[14], a4);
            goto LABEL_15;
          }
LABEL_19:
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
LABEL_15:
          if ( v16 || (a2 & 8) == 0 )
            goto LABEL_19;
          v17 = *(UNICODE_STRING ***)(a7 + 8);
          if ( *v17 != (UNICODE_STRING *)a7 )
            __fastfail(3u);
          *(_QWORD *)&PoolWithTag->Length = a7;
          PoolWithTag->Buffer = (wchar_t *)v17;
          *v17 = PoolWithTag;
          *(_QWORD *)(a7 + 8) = PoolWithTag;
        }
        v8 = a1;
        goto LABEL_24;
      }
      if ( (a2 & 1) != 0 )
        Status = a3(PoolWithTag + 1, &Source, v15, a4);
      ExFreePoolWithTag(PoolWithTag, 0);
LABEL_24:
      if ( Status < 0 )
        goto LABEL_33;
      *((_WORD *)v11 + ((unsigned __int64)*v24 >> 1) + 47) = v29;
      v18 = *v11;
      if ( !(_DWORD)v18 )
        goto LABEL_29;
      v11 = (unsigned int *)((char *)v11 + v18);
      v24 = v11 + 15;
      v19 = (unsigned __int64)v11[15] >> 1;
      v13 = *((_WORD *)v11 + v19 + 47);
      *((_WORD *)v11 + v19 + 47) = 0;
    }
    Status = -1073741670;
LABEL_29:
    if ( Status >= 0 )
    {
      v10 = FileInformation;
      Status = ZwQueryDirectoryFile(
                 FileHandle,
                 0LL,
                 0LL,
                 0LL,
                 &IoStatusBlock,
                 FileInformation,
                 0x3FEu,
                 FileBothDirectoryInformation,
                 0,
                 0LL,
                 0);
      if ( Status >= 0 )
      {
        v8 = a1;
        continue;
      }
    }
    break;
  }
LABEL_33:
  ZwClose(FileHandle);
  if ( Status == -2147483642 )
    return 0;
  return (unsigned int)Status;
}
