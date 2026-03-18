/*
 * XREFs of CcGetFlushedValidData @ 0x140075C5C
 * Callers:
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcFindBitmapRangeToClean @ 0x140076AD0 (CcFindBitmapRangeToClean.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  LARGE_INTEGER *SharedCacheMap; // rdi
  LARGE_INTEGER v5; // rbx
  LARGE_INTEGER v7; // rcx
  __int64 v8; // rax
  char *v9; // rdx
  LARGE_INTEGER i; // rcx
  LONGLONG v11; // rcx
  KIRQL v12; // al
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 LowPart; // bp
  unsigned __int32 v17; // eax
  KIRQL v18; // al
  bool v19; // zf
  KIRQL v20; // si
  ULONG v21; // ecx
  __int64 *v22; // rax
  LARGE_INTEGER v23; // rdx
  __int64 **QuadPart; // rcx
  __int64 **v25; // rdx
  __int64 *v26; // rdi
  __int64 v27; // rcx
  __int64 **v28; // rax
  __int64 **v29; // rcx
  char v30; // dl
  char v31; // cl
  bool v32; // r8
  __int64 *v33; // rax
  LARGE_INTEGER v34; // rdx
  __int64 **v35; // rcx
  __int64 **v36; // rdx
  __int64 *v37; // rdi
  __int64 v38; // rcx
  __int64 **v39; // rax
  __int64 **v40; // rcx

  if ( BcbListHeld )
  {
    SharedCacheMap = (LARGE_INTEGER *)SectionObjectPointer->SharedCacheMap;
    goto LABEL_3;
  }
  v12 = KeAcquireQueuedSpinLock(5uLL);
  SharedCacheMap = (LARGE_INTEGER *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    ++SharedCacheMap->HighPart;
    KeReleaseQueuedSpinLock(5uLL, v12);
    v14 = KeAbPreAcquire((ULONG_PTR)&SharedCacheMap[35], 0LL, 0LL, v13);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&SharedCacheMap[35], 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&SharedCacheMap[35]);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    SharedCacheMap[36].QuadPart = (LONGLONG)KeGetCurrentThread();
    SharedCacheMap[41].LowPart = CurrentIrql;
LABEL_3:
    v5 = SharedCacheMap[6];
    if ( SharedCacheMap[14].LowPart )
    {
      v7 = SharedCacheMap[20];
      if ( v7.QuadPart && *(_DWORD *)(v7.QuadPart + 8) )
      {
        v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD))CcFindBitmapRangeToClean)((LARGE_INTEGER)v7.QuadPart, 0LL);
        v5.QuadPart = (*(_QWORD *)(v8 + 16) + *(unsigned int *)(v8 + 24)) << 12;
      }
      v9 = (char *)&SharedCacheMap[2];
      for ( i = SharedCacheMap[2]; ; i = *(LARGE_INTEGER *)(v11 + 16) )
      {
        v11 = i.QuadPart - 16;
        if ( (char *)(v11 + 16) == v9 || *(_WORD *)v11 == 765 && *(_BYTE *)(v11 + 2) )
          break;
      }
      if ( (char *)(v11 + 16) != v9 && *(_QWORD *)(v11 + 8) < v5.QuadPart )
        v5 = *(LARGE_INTEGER *)(v11 + 8);
    }
    if ( BcbListHeld )
      return v5;
    LowPart = SharedCacheMap[41].LowPart;
    SharedCacheMap[36].QuadPart = 0LL;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)&SharedCacheMap[35], 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended(&SharedCacheMap[35], v17);
    __writecr8(LowPart);
    KeAbPostRelease((ULONG_PTR)&SharedCacheMap[35]);
    v18 = KeAcquireQueuedSpinLock(5uLL);
    v19 = SharedCacheMap->HighPart-- == 1;
    v20 = v18;
    if ( v19 )
    {
      byte_14034E041 = 1;
      v21 = SharedCacheMap[19].LowPart;
      if ( (v21 & 0x10000) != 0 )
      {
        if ( !SharedCacheMap[14].LowPart )
        {
          if ( (v21 & 0x3000000) != 0 )
          {
            v22 = (__int64 *)&SharedCacheMap[15];
            v23 = SharedCacheMap[15];
            QuadPart = (__int64 **)SharedCacheMap[16].QuadPart;
            if ( *(LARGE_INTEGER **)(v23.QuadPart + 8) != &SharedCacheMap[15] || *QuadPart != v22 )
              __fastfail(3u);
            *QuadPart = (__int64 *)v23.QuadPart;
            *(_QWORD *)(v23.QuadPart + 8) = QuadPart;
            v25 = (__int64 **)qword_14034DE38;
            *v22 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
            SharedCacheMap[16].QuadPart = (LONGLONG)v25;
            if ( *v25 != &CcDirtySharedCacheMapWithLogHandleList )
              __fastfail(3u);
            *v25 = v22;
            qword_14034DE38 = (__int64)&SharedCacheMap[15];
          }
          v26 = (__int64 *)&SharedCacheMap[17];
          v27 = *v26;
          v28 = (__int64 **)v26[1];
          if ( *(__int64 **)(*v26 + 8) != v26 || *v28 != v26 )
            __fastfail(3u);
          *v28 = (__int64 *)v27;
          *(_QWORD *)(v27 + 8) = v28;
          v29 = (__int64 **)qword_14034DE68;
          *v26 = (__int64)&CcLazyWriterCursor;
          v26[1] = (__int64)v29;
          if ( *v29 != &CcLazyWriterCursor )
            __fastfail(3u);
          *v29 = v26;
          qword_14034DE68 = (__int64)v26;
        }
        v30 = 1;
        v31 = 1;
      }
      else
      {
        if ( SharedCacheMap[14].LowPart || (v21 & 0x20) != 0 )
          goto LABEL_47;
        v32 = SharedCacheMap[34].QuadPart != 0;
        if ( (v21 & 0x3000000) != 0 )
        {
          v33 = (__int64 *)&SharedCacheMap[15];
          v34 = SharedCacheMap[15];
          v35 = (__int64 **)SharedCacheMap[16].QuadPart;
          if ( *(LARGE_INTEGER **)(v34.QuadPart + 8) != &SharedCacheMap[15] || *v35 != v33 )
            __fastfail(3u);
          *v35 = (__int64 *)v34.QuadPart;
          *(_QWORD *)(v34.QuadPart + 8) = v35;
          v36 = (__int64 **)qword_14034DE38;
          *v33 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          SharedCacheMap[16].QuadPart = (LONGLONG)v36;
          if ( *v36 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v36 = v33;
          qword_14034DE38 = (__int64)&SharedCacheMap[15];
        }
        v37 = (__int64 *)&SharedCacheMap[17];
        v38 = *v37;
        v39 = (__int64 **)v37[1];
        if ( *(__int64 **)(*v37 + 8) != v37 || *v39 != v37 )
          __fastfail(3u);
        *v39 = (__int64 *)v38;
        *(_QWORD *)(v38 + 8) = v39;
        v40 = (__int64 **)qword_14034DE68;
        *v37 = (__int64)&CcLazyWriterCursor;
        v37[1] = (__int64)v40;
        if ( *v40 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v40 = v37;
        v30 = 0;
        qword_14034DE68 = (__int64)v37;
        v31 = v32;
      }
      CcScheduleLazyWriteScan(v31, v30);
    }
LABEL_47:
    KeReleaseQueuedSpinLock(5uLL, v20);
    return v5;
  }
  KeReleaseQueuedSpinLock(5uLL, v12);
  return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
}
