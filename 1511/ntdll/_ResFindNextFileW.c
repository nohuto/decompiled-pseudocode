/*
 * XREFs of _ResFindNextFileW @ 0x1800F9D78
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x1800FA4F0 (ResCGetHighestCacheIndex.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     NtQueryDirectoryFile @ 0x1800A5760 (NtQueryDirectoryFile.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall ResFindNextFileW(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 Heap; // rax
  unsigned int *v7; // rdi
  int DirectoryFile; // eax
  unsigned int *v9; // rcx
  unsigned int *v10; // rdx
  char *v11; // rax
  size_t v12; // r8

  v4 = 1;
  if ( a1 == (_QWORD *)1 )
    return 0LL;
  if ( a1 == (_QWORD *)-1LL )
  {
    RtlSetLastWin32Error(6u);
    return 0LL;
  }
  RtlEnterCriticalSection((__int64)(a1 + 5));
  if ( !a1[1] )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, BaseDllTag + 786432, 4096LL);
    a1[1] = Heap;
    if ( !Heap )
    {
      RtlSetLastWin32Error(8u);
      goto LABEL_9;
    }
    a1[2] = Heap;
    a1[3] = 4096LL;
    v4 = 1;
  }
  v7 = (unsigned int *)a1[2];
  if ( (unsigned int *)a1[1] != v7 )
    goto LABEL_31;
  DirectoryFile = NtQueryDirectoryFile();
  if ( DirectoryFile == -2147483643 )
  {
    v9 = v7;
    v10 = 0LL;
    while ( *v9 )
    {
      v10 = v9;
      v9 += (unsigned __int64)*v9 >> 2;
    }
    if ( v10 )
      *v10 = 0;
    DirectoryFile = 0;
  }
  if ( DirectoryFile >= 0 )
  {
LABEL_31:
    if ( *v7 )
      v11 = (char *)v7 + *v7;
    else
      v11 = (char *)a1[1];
    a1[2] = v11;
    *(_DWORD *)a2 = v7[14];
    *(_QWORD *)(a2 + 4) = *((_QWORD *)v7 + 1);
    *(_QWORD *)(a2 + 12) = *((_QWORD *)v7 + 2);
    *(_QWORD *)(a2 + 20) = *((_QWORD *)v7 + 3);
    *(_DWORD *)(a2 + 28) = v7[11];
    *(_DWORD *)(a2 + 32) = v7[10];
    if ( v7[15] <= 0x208 )
    {
      memmove((void *)(a2 + 44), (char *)v7 + 94, v7[15]);
      *(_WORD *)(a2 + 2 * ((unsigned __int64)v7[15] >> 1) + 44) = 0;
    }
    v12 = *((char *)v7 + 68);
    if ( v12 <= 0x1C )
    {
      memmove((void *)(a2 + 564), (char *)v7 + 70, v12);
      *(_WORD *)(a2 + 2 * ((__int64)*((char *)v7 + 68) >> 1) + 564) = 0;
    }
    if ( (v7[14] & 0x400) != 0 )
      *(_DWORD *)(a2 + 36) = v7[16];
    goto LABEL_28;
  }
LABEL_9:
  v4 = 0;
LABEL_28:
  RtlLeaveCriticalSection((__int64)(a1 + 5));
  return v4;
}
