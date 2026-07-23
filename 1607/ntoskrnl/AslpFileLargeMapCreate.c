/*
 * XREFs of AslpFileLargeMapCreate @ 0x1406C9AA8
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1406C9618 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x14015A6F0 (ZwMapViewOfSection.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmSecureVirtualMemory @ 0x14042985C (MmSecureVirtualMemory.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslpFileLargeMapDelete @ 0x1406C9D0C (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeMapCreate(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  char *v4; // rax
  char *v5; // rdi
  NTSTATUS v6; // ebx
  HANDLE *v7; // r12
  void *FileHandle; // rax
  HANDLE v9; // rax
  unsigned __int64 v10; // rsi
  SIZE_T *v11; // r14
  NTSTATUS v12; // eax
  HANDLE v13; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-68h] BYREF
  char *v17; // [rsp+D0h] [rbp+18h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = (char *)AslAlloc(v3, 0x50uLL);
  v17 = v4;
  v5 = v4;
  if ( !v4 )
    return (unsigned int)-1073741801;
  ObjectAttributes.RootDirectory = 0LL;
  v7 = (HANDLE *)(v4 + 8);
  FileHandle = *(void **)a2;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateSection(v7, 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v6 < 0 )
    goto LABEL_4;
  *((_QWORD *)v5 + 8) = *(_QWORD *)(a2 + 16) - 4096LL - (unsigned __int16)(*(_WORD *)(a2 + 16) - 4096);
  v6 = ZwMapViewOfSection(
         *v7,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)v5 + 6,
         0LL,
         0LL,
         (PLARGE_INTEGER)v5 + 8,
         (PSIZE_T)v5 + 7,
         ViewUnmap,
         0x500000u,
         2u);
  if ( v6 < 0 )
    goto LABEL_4;
  v9 = MmSecureVirtualMemory(*((PVOID *)v5 + 6), *((_QWORD *)v5 + 7), 2u);
  *((_QWORD *)v5 + 9) = v9;
  if ( !v9 )
  {
LABEL_7:
    AslLogCallPrintf(1LL);
    v6 = -1073741823;
    goto LABEL_14;
  }
  v10 = 0x20000000LL;
  v11 = (SIZE_T *)(v5 + 24);
  do
  {
    *v11 = v10;
    *((_QWORD *)v5 + 4) = 0LL;
    v12 = ZwMapViewOfSection(
            *v7,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID *)v5 + 2,
            0LL,
            0LL,
            (PLARGE_INTEGER)v5 + 4,
            (PSIZE_T)v5 + 3,
            ViewUnmap,
            0x500000u,
            2u);
    v10 >>= 1;
    v6 = v12;
  }
  while ( v12 == -1073741801 && v10 >= 0x100000 );
  if ( v12 < 0 )
  {
LABEL_4:
    AslLogCallPrintf(1LL);
    goto LABEL_14;
  }
  v13 = MmSecureVirtualMemory(*((PVOID *)v5 + 2), *v11, 2u);
  *((_QWORD *)v5 + 5) = v13;
  if ( !v13 )
    goto LABEL_7;
  *(_QWORD *)v5 = a2;
  *a1 = v5;
  v5 = 0LL;
  v17 = 0LL;
  v6 = 0;
LABEL_14:
  if ( v5 )
    AslpFileLargeMapDelete(&v17);
  return (unsigned int)v6;
}
