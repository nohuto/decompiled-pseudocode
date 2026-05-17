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

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r12
  char v6; // bl
  unsigned int v7; // edi
  int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  void *v12; // rcx
  unsigned int v13; // ebx
  bool v14; // zf
  __int64 Heap; // rax
  int i; // [rsp+24h] [rbp-34h]
  unsigned int v18; // [rsp+60h] [rbp+8h]

  v4 = (__int16)a2;
  v6 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock, a2, a3, a4);
  v7 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v8 = AlternateResourceModuleCount;
    for ( i = AlternateResourceModuleCount; ; i = v8 )
    {
      if ( v8 <= 0 )
        goto LABEL_34;
      if ( *(_QWORD *)(AlternateResourceModules + 72LL * v8 - 64) == a1 )
        break;
LABEL_6:
      --v8;
    }
    v9 = AlternateResourceModules + 72LL * (v8 - 1);
    v10 = *(_QWORD *)(v9 + 32);
    if ( v10 && (!v4 || v4 == *(_WORD *)v9) && v10 != -1 && *(_DWORD *)(v9 + 56) == -1 )
    {
      v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(v9 + 64) == -1073741799 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
        v8 = i;
      }
      else
      {
        NtUnmapViewOfSection(-1LL);
      }
      v12 = *(void **)(v9 + 40);
      if ( v12 )
      {
        NtClose(v12);
        *(_QWORD *)(v9 + 40) = 0LL;
      }
      *(_QWORD *)(v9 + 32) = 0LL;
      v7 = AlternateResourceModuleCount;
    }
    v13 = *(_DWORD *)(v9 + 56);
    v18 = v13;
    if ( v13 == -1 )
    {
      v13 = *(_DWORD *)(v9 + 60);
      v18 = v13;
    }
    if ( v8 != v7 )
      LdrpRemoveAlternateModuleCacheItem((unsigned int)(v8 - 1));
    v14 = v7-- == 1;
    AlternateResourceModuleCount = v7;
    if ( v14 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    else
    {
      if ( v7 >= AltResMemBlockCount - 32 )
        goto LABEL_22;
      Heap = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap);
      if ( !Heap )
      {
        v6 = 0;
        goto LABEL_34;
      }
      AlternateResourceModules = Heap;
      AltResMemBlockCount -= 32;
    }
    v7 = AlternateResourceModuleCount;
    v8 = i;
    v13 = v18;
LABEL_22:
    if ( v13 == -1 )
    {
      v6 = 1;
    }
    else
    {
      v6 = LdrpUnmapCMFSegmentIfUnreferenced(v13);
      v7 = AlternateResourceModuleCount;
    }
    goto LABEL_6;
  }
  v6 = 1;
LABEL_34:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v6;
}
