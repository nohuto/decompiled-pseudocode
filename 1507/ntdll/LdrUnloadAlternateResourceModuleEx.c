/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180043500
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x180017204 (LdrpGetFromMUIMemCache.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModule @ 0x1800434F0 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x180081140 (LdrResRelease.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x180045564 (LdrpRemoveAlternateModuleCacheItem.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800CBD7C (LdrpUnmapCMFSegmentIfUnreferenced.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  __int16 v2; // r12
  BOOLEAN v4; // bl
  unsigned int v5; // edi
  int v6; // esi
  char *v7; // r14
  __int64 v8; // rdx
  void *v9; // rdx
  void *v10; // rcx
  unsigned int v11; // ebx
  bool v12; // zf
  __int64 v13; // rax
  PVOID Heap; // rax
  int i; // [rsp+24h] [rbp-34h]
  unsigned int v17; // [rsp+60h] [rbp+8h]

  v2 = Flags;
  v4 = 0;
  if ( !DllHandle )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v5 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v6 = AlternateResourceModuleCount;
    for ( i = AlternateResourceModuleCount; ; i = v6 )
    {
      if ( v6 <= 0 )
        goto LABEL_34;
      if ( *((PVOID *)AlternateResourceModules + 9 * v6 - 8) == DllHandle )
        break;
LABEL_6:
      --v6;
    }
    v7 = (char *)AlternateResourceModules + 72 * v6 - 72;
    v8 = *((_QWORD *)v7 + 4);
    if ( v8 && (!v2 || v2 == *(_WORD *)v7) && v8 != -1 && *((_DWORD *)v7 + 14) == -1 )
    {
      v9 = (void *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( *((_DWORD *)v7 + 16) == -1073741799 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
        v6 = i;
      }
      else
      {
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v9);
      }
      v10 = (void *)*((_QWORD *)v7 + 5);
      if ( v10 )
      {
        NtClose(v10);
        *((_QWORD *)v7 + 5) = 0LL;
      }
      *((_QWORD *)v7 + 4) = 0LL;
      v5 = AlternateResourceModuleCount;
    }
    v11 = *((_DWORD *)v7 + 14);
    v17 = v11;
    if ( v11 == -1 )
    {
      v11 = *((_DWORD *)v7 + 15);
      v17 = v11;
    }
    if ( v6 != v5 )
      LdrpRemoveAlternateModuleCacheItem((unsigned int)(v6 - 1));
    v12 = v5-- == 1;
    AlternateResourceModuleCount = v5;
    if ( v12 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    else
    {
      v13 = (unsigned int)(AltResMemBlockCount - 32);
      if ( v5 >= (unsigned int)v13 )
        goto LABEL_22;
      Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules, 72 * v13);
      if ( !Heap )
      {
        v4 = 0;
        goto LABEL_34;
      }
      AlternateResourceModules = Heap;
      AltResMemBlockCount -= 32;
    }
    v5 = AlternateResourceModuleCount;
    v6 = i;
    v11 = v17;
LABEL_22:
    if ( v11 == -1 )
    {
      v4 = 1;
    }
    else
    {
      v4 = LdrpUnmapCMFSegmentIfUnreferenced(v11);
      v5 = AlternateResourceModuleCount;
    }
    goto LABEL_6;
  }
  v4 = 1;
LABEL_34:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
