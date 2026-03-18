/*
 * XREFs of ?LoadAndExtractBitmapFile@@YAJPEAU_UNICODE_STRING@@PEAPEAXPEAUtagSIZE@@PEAK@Z @ 0x1C015622C
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00F8030 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

__int64 __fastcall LoadAndExtractBitmapFile(
        struct _UNICODE_STRING *a1,
        void **a2,
        struct tagSIZE *a3,
        unsigned int *a4)
{
  void **v4; // r13
  _WORD *PoolWithTag; // rsi
  _DWORD *v6; // rdi
  char *v7; // r15
  struct tagSIZE *v8; // r12
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  NTSTATUS v15; // eax
  __int64 Length; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  NTSTATUS v22; // eax
  int v23; // eax
  __int64 v24; // r8
  SIZE_T v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // r11d
  char *v32; // r14
  int v33; // r10d
  int v34; // edx
  int v35; // ebx
  char *v36; // r8
  char *v37; // r9
  char v38; // al
  char *v39; // r9
  char v40; // cl
  char v41; // dl
  _BYTE *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int *v45; // rcx
  void *FileHandle; // [rsp+50h] [rbp-69h] BYREF
  struct tagSIZE *v48; // [rsp+58h] [rbp-61h]
  void **v49; // [rsp+60h] [rbp-59h]
  unsigned int *v50; // [rsp+68h] [rbp-51h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-39h] BYREF
  int FileInformation; // [rsp+B0h] [rbp-9h] BYREF
  SIZE_T NumberOfBytes; // [rsp+B4h] [rbp-5h]
  __int64 v55; // [rsp+BCh] [rbp+3h]
  int v56; // [rsp+C4h] [rbp+Bh]

  v49 = a2;
  v4 = a2;
  v50 = a4;
  v48 = a3;
  FileHandle = 0LL;
  FileInformation = 0;
  PoolWithTag = 0LL;
  v6 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v7 = 0LL;
  ObjectAttributes.ObjectName = a1;
  v8 = a3;
  NumberOfBytes = 0LL;
  v55 = 0LL;
  v56 = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x10u);
  v14 = v9;
  if ( v9 < 0 )
    goto LABEL_31;
  v15 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  Length = HIDWORD(NumberOfBytes);
  v14 = v15;
  if ( v15 < 0 || !HIDWORD(NumberOfBytes) )
    goto LABEL_31;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x4B677844u);
  if ( !PoolWithTag )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = Length;
    WdLogEvent5_WdWarning(v21);
    LODWORD(v14) = -1073741801;
    goto LABEL_35;
  }
  v22 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag, Length, 0LL, 0LL);
  v11 = 0LL;
  v14 = v22;
  if ( v22 < 0 )
  {
LABEL_31:
    v44 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v44 + 24) = v14;
    WdLogEvent5_WdWarning(v44);
    if ( (int)v14 < 0 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v6 = PoolWithTag + 7;
  if ( *PoolWithTag != 19778
    || !*(_DWORD *)(PoolWithTag + 1)
    || PoolWithTag[3]
    || PoolWithTag[4]
    || (v23 = *(_DWORD *)(PoolWithTag + 5)) == 0
    || *v6 != 40
    || PoolWithTag[13] != 1
    || (v10 = 24LL, PoolWithTag[14] != 24)
    || *(_DWORD *)(PoolWithTag + 15)
    || *(_DWORD *)(PoolWithTag + 23)
    || *(_DWORD *)(PoolWithTag + 25) )
  {
    v43 = WdLogNewEntry5_WdWarning(0LL, v10, v12, v13);
    *(_QWORD *)(v43 + 24) = 4239LL;
    goto LABEL_29;
  }
  v24 = *(unsigned int *)(PoolWithTag + 17);
  if ( (int)v24 + v23 > (unsigned int)Length
    || (v13 = *(unsigned int *)(PoolWithTag + 9),
        v10 = *(unsigned int *)(PoolWithTag + 11),
        v11 = (unsigned int)v10 * ((3 * ((_DWORD)v13 + 1)) & 0xFFFFFFFC),
        (unsigned int)v11 > (unsigned int)v24) )
  {
    v43 = WdLogNewEntry5_WdWarning(v11, v10, v24, v13);
    *(_QWORD *)(v43 + 24) = 4250LL;
LABEL_29:
    WdLogEvent5_WdWarning(v43);
    LODWORD(v14) = -1073741823;
    goto LABEL_33;
  }
  v25 = (unsigned int)(4 * v13 * v10);
  v14 = (unsigned int)v25;
  v7 = (char *)ExAllocatePoolWithTag(PagedPool, v25, 0x4B677844u);
  if ( !v7 )
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = v14;
    WdLogEvent5_WdWarning(v30);
    LODWORD(v14) = -1073741801;
    goto LABEL_33;
  }
  v31 = 0;
  v32 = (char *)PoolWithTag + *(unsigned int *)(PoolWithTag + 5);
  v33 = *(_DWORD *)(PoolWithTag + 11) - 1;
  if ( v33 >= 0 )
  {
    do
    {
      v34 = *(_DWORD *)(PoolWithTag + 9);
      v35 = 0;
      v36 = &v7[4 * v33 * v34];
      v37 = &v32[v31 * ((3 * (v34 + 1)) & 0xFFFFFFFC)];
      if ( v34 > 0 )
      {
        do
        {
          v38 = *v37;
          ++v35;
          v39 = v37 + 1;
          v40 = *v39++;
          v41 = *v39;
          v37 = v39 + 1;
          *v36 = v38;
          v42 = v36 + 1;
          *v42++ = v40;
          *v42++ = v41;
          *v42 = 0;
          v36 = v42 + 1;
        }
        while ( v35 < *(_DWORD *)(PoolWithTag + 9) );
      }
      ++v31;
      --v33;
    }
    while ( v33 >= 0 );
    v8 = v48;
    v4 = v49;
  }
  LODWORD(v14) = 0;
LABEL_32:
  v45 = v50;
  *v4 = v7;
  v8->cx = v6[1];
  v8->cy = v6[2];
  *v45 = 4 * v6[1];
LABEL_33:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4B677844u);
LABEL_35:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v14;
}
