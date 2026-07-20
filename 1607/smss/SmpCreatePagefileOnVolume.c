/*
 * XREFs of SmpCreatePagefileOnVolume @ 0x140009564
 * Callers:
 *     SmpCreatePagefileFromDescriptor @ 0x1400098EC (SmpCreatePagefileFromDescriptor.c)
 * Callees:
 *     SmpCheckHybridPriority @ 0x140008600 (SmpCheckHybridPriority.c)
 *     SmpTrimPagingFileExtents @ 0x1400086A0 (SmpTrimPagingFileExtents.c)
 *     SmpCreatePagingFile @ 0x1400093FC (SmpCreatePagingFile.c)
 *     SmpGetPagingFileSize @ 0x14000987C (SmpGetPagingFileSize.c)
 *     SmpDeletePagingFile @ 0x14000FFFC (SmpDeletePagingFile.c)
 */

__int64 __fastcall SmpCreatePagefileOnVolume(__int64 a1, __int64 a2, int a3)
{
  bool v3; // r12
  UNICODE_STRING *v7; // r15
  NTSTATUS v8; // ecx
  int PagingFileSize; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  bool v14; // zf
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // eax
  int PagingFile; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  union _LARGE_INTEGER v30; // rdx
  int v31; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v34; // [rsp+B0h] [rbp+40h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+58h] BYREF

  v36 = 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1 + 92) & 4) != 0 )
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) = *(_WORD *)(a2 + 24);
  ObjectAttributes.RootDirectory = 0LL;
  v7 = (UNICODE_STRING *)(a1 + 16);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 16);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u);
  if ( v8 < 0 )
  {
    v10 = v36;
    v11 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v11) = 2081;
    *((_DWORD *)&SmpPagefileLog + 2 * v11 + 1) = v8;
    *((_QWORD *)&SmpPagefileLog + v11 + 1) = v7;
  }
  else
  {
    PagingFileSize = SmpGetPagingFileSize(FileHandle, v7, &v36);
    v10 = v36;
    if ( PagingFileSize >= 0 )
      v3 = v36 != 0;
    SmpTrimPagingFileExtents(FileHandle, (__int64)v7);
    NtClose(FileHandle);
  }
  v12 = *(_QWORD *)(a2 + 32) + v10;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v12 > *(_QWORD *)(a2 + 40) )
    v12 = *(_QWORD *)(a2 + 40);
  v14 = (*(_BYTE *)(a1 + 92) & 2) == 0;
  v15 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 72) = v13;
  *(_QWORD *)(a1 + 80) = v15;
  if ( v14 )
  {
    if ( v13 > v12 )
    {
      if ( !a3 )
        return 3221225599LL;
      *(_QWORD *)(a1 + 72) = v12;
    }
    v22 = v15;
    if ( v15 > *(_QWORD *)(a2 + 40) )
      v22 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 80) = v22;
  }
  else
  {
    v16 = SmpMemorySize;
    v17 = *(_QWORD *)(a2 + 40) >> 3;
    if ( SmpMemorySize < v12 >> 2 )
      v16 = v12 >> 2;
    if ( v16 > v12 >> 1 )
      v16 = v12 >> 1;
    if ( v16 > v17 )
      v16 = *(_QWORD *)(a2 + 40) >> 3;
    if ( v13 > v16 )
    {
      if ( !a3 )
        return 3221225599LL;
      if ( (*(_BYTE *)(a1 + 92) & 8) != 0 )
      {
        v19 = v12 >> 5;
        if ( v12 >> 5 > 0x40000000 )
          v19 = 0x40000000LL;
        if ( v13 <= v12 - v19 || v13 == *(_QWORD *)(a1 + 48) )
        {
          v16 = v12 - v19;
          if ( v17 < v12 - v19 )
            v17 = v12 - v19;
        }
      }
      if ( v13 > v16 )
      {
        v20 = v13;
        if ( v13 > *(_QWORD *)(a1 + 48) )
          v20 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 72) = v20;
      }
    }
    v21 = *(_QWORD *)(a1 + 72);
    if ( v21 > v16 )
      v21 = v16;
    *(_QWORD *)(a1 + 72) = v21;
    if ( v15 > v17 )
      *(_QWORD *)(a1 + 80) = v17;
  }
  *(_DWORD *)(a1 + 88) = 0;
  v23 = *(_DWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
    v23 = 0x40000000;
  *(_DWORD *)(a1 + 88) = v23;
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0
    && SmpCheckHybridPriority(*(_DWORD *)(a2 + 20), &v34, 0LL) >= 0
    && (v34 & 0xFFFFFFF0) == 0 )
  {
    *(_DWORD *)(a1 + 88) |= (v34 | 0x10) << 26;
  }
  PagingFile = SmpCreatePagingFile(
                 v7,
                 *(union _LARGE_INTEGER *)(a1 + 72),
                 *(union _LARGE_INTEGER *)(a1 + 80),
                 *(_DWORD *)(a1 + 88));
  v26 = (unsigned int)PagingFile;
  if ( PagingFile >= 0 )
  {
LABEL_56:
    *(_DWORD *)(a1 + 92) |= 1u;
    *(_DWORD *)(a2 + 16) |= 0x10u;
    if ( (*(_DWORD *)(a1 + 88) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 16) |= 0x20u;
    if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
      ++SmpNumberOfManagedPagefilesCreated;
    ++SmpNumberOfPagefilesCreated;
  }
  else
  {
    v25 = 0x1000000LL;
    while ( a3 )
    {
      v27 = *(_QWORD *)(a1 + 72);
      if ( v27 <= 0x1000000 )
        break;
      v28 = v27 >> 4;
      v29 = 0x1000000LL;
      if ( v28 > 0x1000000 )
        v29 = v28;
      *(_QWORD *)(a1 + 72) -= v29;
      v30 = *(union _LARGE_INTEGER *)(a1 + 72);
      if ( v30.QuadPart < 0x1000000uLL )
        v30.QuadPart = 0x1000000LL;
      *(union _LARGE_INTEGER *)(a1 + 72) = v30;
      v31 = SmpCreatePagingFile(v7, v30, *(union _LARGE_INTEGER *)(a1 + 80), *(_DWORD *)(a1 + 88));
      v26 = (unsigned int)v31;
      v25 = 0x1000000LL;
      if ( v31 >= 0 )
        goto LABEL_56;
    }
  }
  if ( (*(_BYTE *)(a1 + 92) & 1) == 0 )
  {
    if ( v3 && (int)SmpDeletePagingFile(v7, v26, v25) >= 0 )
      *(_QWORD *)(a2 + 32) = v12;
    return 3221225599LL;
  }
  return (unsigned int)v26;
}
