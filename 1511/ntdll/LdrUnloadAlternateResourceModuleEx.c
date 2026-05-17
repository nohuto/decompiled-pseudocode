/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180005CB0
 * Callers:
 *     LdrResRelease @ 0x180003E40 (LdrResRelease.c)
 *     LdrUnloadAlternateResourceModule @ 0x180005CA0 (LdrUnloadAlternateResourceModule.c)
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     LdrpGetFromMUIMemCache @ 0x18003195C (LdrpGetFromMUIMemCache.c)
 * Callees:
 *     LdrpRemoveAlternateModuleCacheItem @ 0x180004660 (LdrpRemoveAlternateModuleCacheItem.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x180023CF0 (RtlReAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800D45B8 (LdrpUnmapCMFSegmentIfUnreferenced.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, __int16 a2)
{
  char v4; // bl
  unsigned int v5; // edi
  int v6; // esi
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  void *v10; // rcx
  unsigned int v11; // ebx
  bool v12; // zf
  __int64 v13; // rax
  __int64 Heap; // rax
  __int64 v16; // [rsp+20h] [rbp-38h]
  unsigned int v17; // [rsp+60h] [rbp+8h]

  v4 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v5 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v6 = AlternateResourceModuleCount;
    for ( HIDWORD(v16) = AlternateResourceModuleCount; ; HIDWORD(v16) = v6 )
    {
      if ( v6 <= 0 )
        goto LABEL_34;
      if ( *(_QWORD *)(AlternateResourceModules + 72LL * v6 - 64) == a1 )
        break;
LABEL_6:
      --v6;
    }
    v7 = AlternateResourceModules + 72LL * (v6 - 1);
    v8 = *(_QWORD *)(v7 + 32);
    if ( v8 && (!a2 || a2 == *(_WORD *)v7) && v8 != -1 && *(_DWORD *)(v7 + 56) == -1 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(v7 + 64) == -1073741799 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v9);
        v6 = HIDWORD(v16);
      }
      else
      {
        NtUnmapViewOfSection(-1LL, v9);
      }
      v10 = *(void **)(v7 + 40);
      if ( v10 )
      {
        NtClose(v10);
        *(_QWORD *)(v7 + 40) = 0LL;
      }
      *(_QWORD *)(v7 + 32) = 0LL;
      v5 = AlternateResourceModuleCount;
    }
    v11 = *(_DWORD *)(v7 + 56);
    v17 = v11;
    if ( v11 == -1 )
    {
      v11 = *(_DWORD *)(v7 + 60);
      v17 = v11;
    }
    if ( v6 != v5 )
      LdrpRemoveAlternateModuleCacheItem(v6 - 1);
    v12 = v5-- == 1;
    AlternateResourceModuleCount = v5;
    if ( v12 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, AlternateResourceModules);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    else
    {
      v13 = (unsigned int)(AltResMemBlockCount - 32);
      if ( v5 >= (unsigned int)v13 )
        goto LABEL_22;
      Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, AlternateResourceModules, 72 * v13, v16);
      if ( !Heap )
      {
        v4 = 0;
        goto LABEL_34;
      }
      AlternateResourceModules = Heap;
      AltResMemBlockCount -= 32;
    }
    v5 = AlternateResourceModuleCount;
    v6 = HIDWORD(v16);
    v11 = v17;
LABEL_22:
    if ( v11 == -1 )
    {
      v4 = 1;
      LOBYTE(v16) = 1;
    }
    else
    {
      v4 = LdrpUnmapCMFSegmentIfUnreferenced(v11);
      LOBYTE(v16) = v4;
      v5 = AlternateResourceModuleCount;
    }
    goto LABEL_6;
  }
  v4 = 1;
LABEL_34:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
