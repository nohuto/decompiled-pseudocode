/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x1800E7250
 * Callers:
 *     RtlGetFileMUIPath @ 0x180069AA0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x18000E930 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180011740 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlReAllocateHeap @ 0x180020D80 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenFile @ 0x1800A6A80 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x1800A6AC0 (NtQueryDirectoryFile.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

char __fastcall RtlpMUIEnumerateFolder(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v4; // r13
  char v5; // r14
  unsigned int v6; // r15d
  unsigned int *Heap; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  void *v10; // rax
  NTSTATUS v11; // r12d
  __int64 v12; // r12
  int DirectoryFile; // eax
  unsigned int *i; // rsi
  bool v15; // zf
  __int64 v16; // rax
  unsigned int v17; // r13d
  unsigned int v18; // edx
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-69h] BYREF
  __int128 v23; // [rsp+68h] [rbp-61h] BYREF
  unsigned __int16 v24; // [rsp+78h] [rbp-51h] BYREF
  unsigned __int16 v25; // [rsp+7Ah] [rbp-4Fh]
  unsigned int *v26; // [rsp+80h] [rbp-49h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  __int128 v28; // [rsp+98h] [rbp-31h] BYREF
  void *v29; // [rsp+A8h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-11h] BYREF
  int v31; // [rsp+130h] [rbp+67h]
  int v33; // [rsp+148h] [rbp+7Fh] BYREF

  v31 = 0;
  v4 = a2;
  FileHandle = 0LL;
  v5 = 0;
  v6 = 0;
  Heap = 0LL;
  if ( !a1 )
    goto LABEL_46;
  if ( !a3 )
    return v5;
  if ( !a2 )
    goto LABEL_46;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(a1 + 2 * v8) );
  if ( v8 >= 0x104 )
    goto LABEL_46;
  *a3 = 0LL;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, (int)&v23, 0LL, (__int64)&v28) )
  {
    v9 = *((_QWORD *)&v23 + 1);
    if ( (_WORD)v28 )
    {
      v10 = v29;
      v23 = v28;
    }
    else
    {
      v10 = 0LL;
      v29 = 0LL;
    }
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName((__int64)&v28);
    if ( v9 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    if ( v11 >= 0 )
    {
      if ( !FileHandle )
      {
LABEL_46:
        if ( a3 && *a3 )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3);
          *a3 = 0LL;
        }
        return v5;
      }
      Heap = (unsigned int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x1000uLL);
      if ( Heap )
      {
        v12 = 0LL;
        DirectoryFile = NtQueryDirectoryFile();
        if ( DirectoryFile >= 0 )
        {
          while ( 2 )
          {
            if ( !Heap[15] && !*Heap )
            {
              v5 = 1;
              *a2 = v12;
              goto LABEL_41;
            }
            for ( i = Heap; ; i = (unsigned int *)((char *)i + *i) )
            {
              v15 = (i[14] & 0x10) == 0;
              v25 = *((_WORD *)i + 30);
              v24 = v25;
              v26 = i + 16;
              if ( !v15 && RtlCultureNameToLCID(&v24, &v33) )
              {
                ++v12;
                if ( *a3 )
                {
                  v17 = v31;
                }
                else
                {
                  v16 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
                  *a3 = v16;
                  if ( !v16 )
                    goto LABEL_41;
                  v17 = 0;
                  v6 = 520;
                  v31 = 0;
                }
                v18 = i[15];
                if ( (unsigned __int64)(v18 + v17) + 2 > v6 )
                {
                  if ( v18 > 0x208 )
                    v6 += v18 + 2;
                  else
                    v6 += 520;
                  v19 = *a3;
                  v20 = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, *a3, v6);
                  *a3 = v20;
                  if ( !v20 )
                  {
                    *a3 = v19;
                    goto LABEL_41;
                  }
                  v17 = v31;
                }
                memmove((void *)(*a3 + v17), i + 16, i[15]);
                v31 = i[15] + v17 + 2;
              }
              if ( !*i )
                break;
            }
            memset(Heap, 0, 0x1000uLL);
            DirectoryFile = NtQueryDirectoryFile();
            if ( DirectoryFile >= 0 )
              continue;
            break;
          }
          v4 = a2;
        }
        if ( DirectoryFile == -2147483642 )
        {
          v5 = 1;
          *v4 = v12;
        }
      }
    }
  }
LABEL_41:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  if ( !v5 )
    goto LABEL_46;
  return v5;
}
