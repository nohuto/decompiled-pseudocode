/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x1800D61B0
 * Callers:
 *     RtlGetFileMUIPath @ 0x180054700 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18001C000 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseRelativeName @ 0x1800546C0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenFile @ 0x180093C30 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x180093C50 (NtQueryDirectoryFile.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

char __fastcall RtlpMUIEnumerateFolder(const WCHAR *a1, _QWORD *a2, PVOID *a3)
{
  _QWORD *v4; // r13
  char v5; // r14
  unsigned int v6; // r15d
  unsigned int *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int16 *Buffer; // rsi
  HANDLE ContainingDirectory; // rax
  NTSTATUS v11; // r12d
  unsigned int *Heap; // rax
  __int64 v13; // r12
  NTSTATUS v14; // eax
  unsigned int *i; // rsi
  bool v16; // zf
  PVOID v17; // rax
  unsigned int v18; // r13d
  unsigned int v19; // edx
  PVOID v20; // r13
  PVOID v21; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+68h] [rbp-61h] BYREF
  _UNICODE_STRING String; // [rsp+78h] [rbp-51h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+88h] [rbp-41h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-11h] BYREF
  int v29; // [rsp+130h] [rbp+67h]
  DWORD Lcid; // [rsp+148h] [rbp+7Fh] BYREF

  v29 = 0;
  v4 = a2;
  FileHandle = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( !a1 )
    goto LABEL_46;
  if ( !a3 )
    return v5;
  if ( !a2 )
    goto LABEL_46;
  v8 = -1LL;
  do
    ++v8;
  while ( a1[v8] );
  if ( v8 >= 0x104 )
    goto LABEL_46;
  *a3 = 0LL;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, &NtFileName, 0LL, &RelativeName) )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.RootDirectory = ContainingDirectory;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName(&RelativeName);
    if ( Buffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    if ( v11 >= 0 )
    {
      if ( !FileHandle )
      {
LABEL_46:
        if ( a3 && *a3 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a3);
          *a3 = 0LL;
        }
        return v5;
      }
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1000uLL);
      v7 = Heap;
      if ( Heap )
      {
        v13 = 0LL;
        v14 = NtQueryDirectoryFile(
                FileHandle,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                Heap,
                0x1000u,
                FileDirectoryInformation,
                0,
                0LL,
                1u);
        if ( v14 >= 0 )
        {
          while ( 2 )
          {
            if ( !v7[15] && !*v7 )
            {
              v5 = 1;
              *a2 = v13;
              goto LABEL_41;
            }
            for ( i = v7; ; i = (unsigned int *)((char *)i + *i) )
            {
              v16 = (i[14] & 0x10) == 0;
              String.MaximumLength = *((_WORD *)i + 30);
              String.Length = String.MaximumLength;
              String.Buffer = (unsigned __int16 *)(i + 16);
              if ( !v16 && RtlCultureNameToLCID(&String, &Lcid) )
              {
                ++v13;
                if ( *a3 )
                {
                  v18 = v29;
                }
                else
                {
                  v17 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
                  *a3 = v17;
                  if ( !v17 )
                    goto LABEL_41;
                  v18 = 0;
                  v6 = 520;
                  v29 = 0;
                }
                v19 = i[15];
                if ( (unsigned __int64)(v19 + v18) + 2 > v6 )
                {
                  if ( v19 > 0x208 )
                    v6 += v19 + 2;
                  else
                    v6 += 520;
                  v20 = *a3;
                  v21 = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, *a3, v6);
                  *a3 = v21;
                  if ( !v21 )
                  {
                    *a3 = v20;
                    goto LABEL_41;
                  }
                  v18 = v29;
                }
                memmove((char *)*a3 + v18, i + 16, i[15]);
                v29 = i[15] + v18 + 2;
              }
              if ( !*i )
                break;
            }
            memset(v7, 0, 0x1000uLL);
            v14 = NtQueryDirectoryFile(
                    FileHandle,
                    0LL,
                    0LL,
                    0LL,
                    &IoStatusBlock,
                    v7,
                    0x1000u,
                    FileDirectoryInformation,
                    0,
                    0LL,
                    0);
            if ( v14 >= 0 )
              continue;
            break;
          }
          v4 = a2;
        }
        if ( v14 == -2147483642 )
        {
          v5 = 1;
          *v4 = v13;
        }
      }
    }
  }
LABEL_41:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( !v5 )
    goto LABEL_46;
  return v5;
}
