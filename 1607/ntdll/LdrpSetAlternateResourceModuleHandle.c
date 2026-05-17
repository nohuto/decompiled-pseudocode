/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x1800726C0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A78 (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x18003A820 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 *     LdrSetMUICacheType @ 0x18008E220 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x180020D80 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     LdrpCMFRemoveFromStandbyQueue @ 0x18008A244 (LdrpCMFRemoveFromStandbyQueue.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800DC770 (LdrpSpecialCacheTypeHandle.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        char *a2,
        HANDLE *a3,
        __int64 a4,
        unsigned int a5,
        __int16 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int i; // ebx
  __int64 v14; // rcx
  unsigned int j; // r15d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rbx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  HANDLE v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  HANDLE v27; // rax
  __int64 v28; // rcx
  __int64 Heap; // rax

  if ( !a1 || (a7 & 0xFFFFFFC8) != 0 || (a7 & 3) == 3 || (a7 & 1) != 0 && !a2 || (a7 & 4) != 0 && a5 == -1 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&MuiCacheSWRLock, a2, (__int64)a3, a4);
  v12 = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= AlternateResourceModuleCount )
      goto LABEL_11;
    v14 = AlternateResourceModules + 72LL * i;
    if ( *(_QWORD *)(v14 + 8) != a1 )
    {
      if ( (a7 & 0x10) != 0 && gMUICacheType && (unsigned __int64)(*(_QWORD *)(v14 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LdrpSpecialCacheTypeHandle(v14, 0LL, v11);
        v12 = 0LL;
      }
      continue;
    }
    if ( (a7 & 2) != 0 && *(_QWORD *)(v14 + 16)
      || (a7 & 4) != 0 && a6 && *(_WORD *)v14 == a6 && *(_DWORD *)(v14 + 60) != -1 )
    {
      goto LABEL_94;
    }
    if ( (a7 & 1) != 0 && *(_QWORD *)(v14 + 32) && a6 && *(_WORD *)v14 == a6 )
      break;
  }
  if ( *(_QWORD *)a2 == -1LL || a5 != -1 )
  {
LABEL_61:
    v28 = AlternateResourceModules;
    *(_QWORD *)a2 = *(_QWORD *)(AlternateResourceModules + 72LL * i + 32);
    if ( a3 )
      *a3 = *(HANDLE *)(v28 + 72LL * i + 40);
    goto LABEL_94;
  }
  if ( (a7 & 0x20) == 0 )
  {
    NtUnmapViewOfSection(-1LL, *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( a3 )
      NtClose(*a3);
    goto LABEL_61;
  }
  v12 = 0LL;
  if ( *(_QWORD *)(v14 + 32) == -1LL )
    *(_QWORD *)(v14 + 32) = 0LL;
LABEL_11:
  if ( (a7 & 0x10) != 0 )
    goto LABEL_94;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      Heap = RtlReAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               8u,
               AlternateResourceModules,
               72LL * (unsigned int)(AltResMemBlockCount + 32));
      v12 = 0LL;
      if ( !Heap )
        goto LABEL_94;
      AlternateResourceModules = Heap;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v25 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x900uLL);
    v12 = 0LL;
    if ( !v25 )
      goto LABEL_94;
    AlternateResourceModules = v25;
    AltResMemBlockCount = 32;
  }
  for ( j = 0; j < AlternateResourceModuleCount; ++j )
  {
    v16 = AlternateResourceModules + 72LL * j;
    if ( *(_QWORD *)(v16 + 8) == a1 )
    {
      if ( (a7 & 2) != 0 && !*(_QWORD *)(v16 + 16) )
      {
        *(_QWORD *)(v16 + 16) = a4;
        *(_DWORD *)(v16 + 64) = a8;
        goto LABEL_94;
      }
      if ( (a7 & 1) != 0 && !*(_QWORD *)(v16 + 32) && (!*(_WORD *)v16 || *(_WORD *)v16 == a6) )
      {
        *(_QWORD *)(v16 + 32) = *(_QWORD *)a2;
        if ( a3 )
          v24 = *a3;
        else
          v24 = 0LL;
        *(_QWORD *)(v16 + 40) = v24;
        *(_WORD *)v16 = a6;
        *(_DWORD *)(v16 + 64) = a8;
        *(_QWORD *)(v16 + 48) = a9;
        *(_DWORD *)(v16 + 56) = a5;
        if ( a5 != -1 )
        {
          LdrpCMFRemoveFromStandbyQueue(a5, 0LL, v11);
          v12 = 0LL;
        }
        if ( gMUICacheType )
        {
          LOBYTE(v12) = 1;
          if ( (int)LdrpSpecialCacheTypeHandle(v16, v12, v11) >= 0
            && (gMUICacheType & 2) != 0
            && *(_DWORD *)(AlternateResourceModules + 72LL * j + 64) == -1073741799 )
          {
            *(_QWORD *)a2 = *(_QWORD *)(AlternateResourceModules + 72LL * j + 32);
          }
        }
        goto LABEL_94;
      }
      if ( (a7 & 4) != 0 )
      {
        *(_DWORD *)(v16 + 60) = a5;
        if ( a5 != -1 )
          LdrpCMFRemoveFromStandbyQueue(a5, 0LL, v11);
        goto LABEL_94;
      }
    }
  }
  v17 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 + 88);
    v19 = 9LL * (unsigned int)AlternateResourceModuleCount;
    v20 = AlternateResourceModules;
    *(_QWORD *)(AlternateResourceModules + 8 * v19 + 8) = a1;
    *(_QWORD *)(v20 + 8 * v19 + 16) = a4;
    v21 = a7 & 1;
    if ( (a7 & 1) != 0 )
    {
      if ( a2 )
        v26 = *(_QWORD *)a2;
      else
        v26 = 0LL;
      *(_QWORD *)(v20 + 8 * v19 + 32) = v26;
      if ( a3 )
        v27 = *a3;
      else
        v27 = 0LL;
      *(_QWORD *)(v20 + 8 * v19 + 40) = v27;
      *(_QWORD *)(v20 + 8 * v19 + 48) = a9;
    }
    else
    {
      *(_QWORD *)(v20 + 8 * v19 + 32) = 0LL;
      *(_QWORD *)(v20 + 8 * v19 + 40) = 0LL;
      *(_QWORD *)(v20 + 8 * v19 + 48) = 0LL;
    }
    *(_WORD *)(v20 + 8 * v19) = a6;
    *(_DWORD *)(v20 + 8 * v19 + 24) = v18;
    v22 = a5;
    if ( (a7 & 4) != 0 )
      v22 = -1;
    *(_DWORD *)(v20 + 8 * v19 + 56) = v22;
    v23 = -1;
    if ( (a7 & 4) != 0 )
      v23 = a5;
    *(_DWORD *)(v20 + 8 * v19 + 60) = v23;
    if ( a5 != -1 )
    {
      LdrpCMFRemoveFromStandbyQueue(a5, v18, 0LL);
      v21 = a7 & 1;
    }
    *(_DWORD *)(v20 + 8 * v19 + 64) = a8;
    if ( gMUICacheType )
    {
      if ( v21 )
      {
        LOBYTE(v18) = 1;
        if ( (int)LdrpSpecialCacheTypeHandle(v20 + 72LL * j, v18, 0LL) >= 0
          && (gMUICacheType & 2) != 0
          && *(_DWORD *)(AlternateResourceModules + 72LL * j + 64) == -1073741799 )
        {
          *(_QWORD *)a2 = *(_QWORD *)(AlternateResourceModules + 72LL * j + 32);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_94:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
