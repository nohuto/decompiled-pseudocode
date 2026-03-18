/*
 * XREFs of CcPurgeCacheSection @ 0x14008322C
 * Callers:
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     CcUnmapAndPurge @ 0x1400865D8 (CcUnmapAndPurge.c)
 *     CcZeroEndOfLastPage @ 0x140088AE0 (CcZeroEndOfLastPage.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400F8AB8 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     MmCanFileBeTruncated @ 0x140081EE4 (MmCanFileBeTruncated.c)
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MmTrimSection @ 0x1400F8B8C (MmTrimSection.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  __int64 v4; // r15
  char v6; // r12
  unsigned int v8; // ebp
  KIRQL v9; // al
  _QWORD *SharedCacheMap; // rbx
  KIRQL v11; // r14
  BOOLEAN v12; // di
  int v13; // r14d
  __int64 v14; // r8
  KIRQL v15; // al
  bool v16; // zf
  KIRQL v17; // si
  LONGLONG QuadPart; // rax
  int v20; // ecx
  bool v21; // r8
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 **v24; // rax
  __int64 **v25; // rdx
  __int64 *v26; // rbx
  __int64 v27; // rcx
  __int64 **v28; // rax
  __int64 **v29; // rcx
  char v30; // dl
  char v31; // cl
  _QWORD *i; // r14
  KIRQL v33; // al
  int v34; // eax
  __int64 *v35; // rcx
  __int64 v36; // rdx
  __int64 **v37; // rax
  __int64 **v38; // rdx
  __int64 *v39; // rbx
  __int64 v40; // rcx
  __int64 **v41; // rax
  __int64 **v42; // rcx
  char v43; // dl
  char v44; // cl
  bool v45; // r8
  __int64 *v46; // rcx
  __int64 v47; // rdx
  __int64 **v48; // rax
  __int64 **v49; // rdx
  __int64 *v50; // rbx
  __int64 v51; // rcx
  __int64 **v52; // rax
  __int64 **v53; // rcx
  __int64 *v54; // rcx
  __int64 v55; // rdx
  __int64 **v56; // rax
  __int64 **v57; // rdx
  __int64 *v58; // rbx
  __int64 v59; // rcx
  __int64 **v60; // rax
  __int64 **v61; // rcx
  LONGLONG v62; // [rsp+30h] [rbp-38h]
  BOOLEAN v63; // [rsp+70h] [rbp+8h]

  v4 = Length;
  v6 = Flags;
  v8 = 0;
  v9 = KeAcquireQueuedSpinLock(5uLL);
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  v11 = v9;
  v12 = 1;
  if ( !SharedCacheMap )
  {
LABEL_4:
    KeReleaseQueuedSpinLock(5uLL, v9);
    if ( !SharedCacheMap )
      goto LABEL_10;
    if ( (v6 & 1) != 0 )
    {
      for ( i = SharedCacheMap + 28; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
        ;
    }
    if ( (v6 & 8) == 0 )
    {
      CcUnmapVacbArray((_DWORD)SharedCacheMap, (_DWORD)FileOffset, v4, 0, 1);
      goto LABEL_8;
    }
    if ( (int)MmTrimSection(SectionObjectPointer, FileOffset, v4) >= 0 )
    {
LABEL_8:
      if ( FileOffset )
        v8 = 1;
LABEL_10:
      if ( (v6 & 4) != 0 )
        v8 |= 2u;
      v13 = -1;
      v14 = v4;
      if ( (v6 & 4) != 0 )
        v13 = 5;
      while ( 1 )
      {
        v63 = MmPurgeSection(SectionObjectPointer, FileOffset, v14, v8);
        if ( v63 )
          break;
        if ( (_DWORD)v4 )
          break;
        if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
          break;
        if ( (v6 & 2) != 0 )
          break;
        KeDelayExecutionThread(0, 0, &CcCollisionDelay);
        if ( !--v13 )
          break;
        v14 = 0LL;
      }
      if ( !SharedCacheMap )
        return v63;
      if ( !(_DWORD)v4 )
      {
        if ( FileOffset )
        {
          QuadPart = FileOffset->QuadPart;
          if ( FileOffset->QuadPart < SharedCacheMap[46] )
          {
            v62 = QuadPart + 0x3FFFF;
            LODWORD(v62) = (QuadPart + 0x3FFFF) & 0xFFFC0000;
            SharedCacheMap[46] = v62 + 0x40000;
          }
        }
        else
        {
          SharedCacheMap[46] = 0LL;
        }
      }
      v15 = KeAcquireQueuedSpinLock(5uLL);
      v16 = (*((_DWORD *)SharedCacheMap + 1))-- == 1;
      v17 = v15;
      if ( v16 )
      {
        byte_14034E041 = 1;
        v20 = *((_DWORD *)SharedCacheMap + 38);
        if ( (v20 & 0x10000) != 0 )
        {
          if ( !*((_DWORD *)SharedCacheMap + 28) )
          {
            if ( (v20 & 0x3000000) != 0 )
            {
              v54 = SharedCacheMap + 15;
              v55 = SharedCacheMap[15];
              v56 = (__int64 **)SharedCacheMap[16];
              if ( *(_QWORD **)(v55 + 8) != SharedCacheMap + 15 || *v56 != v54 )
                __fastfail(3u);
              *v56 = (__int64 *)v55;
              *(_QWORD *)(v55 + 8) = v56;
              v57 = (__int64 **)qword_14034DE38;
              *v54 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
              SharedCacheMap[16] = v57;
              if ( *v57 != &CcDirtySharedCacheMapWithLogHandleList )
                __fastfail(3u);
              *v57 = v54;
              qword_14034DE38 = (__int64)(SharedCacheMap + 15);
            }
            v58 = SharedCacheMap + 17;
            v59 = *v58;
            v60 = (__int64 **)v58[1];
            if ( *(__int64 **)(*v58 + 8) != v58 || *v60 != v58 )
              __fastfail(3u);
            *v60 = (__int64 *)v59;
            *(_QWORD *)(v59 + 8) = v60;
            v61 = (__int64 **)qword_14034DE68;
            *v58 = (__int64)&CcLazyWriterCursor;
            v58[1] = (__int64)v61;
            if ( *v61 != &CcLazyWriterCursor )
              __fastfail(3u);
            *v61 = v58;
            qword_14034DE68 = (__int64)v58;
          }
          v30 = 1;
          v31 = 1;
        }
        else
        {
          if ( *((_DWORD *)SharedCacheMap + 28) || (v20 & 0x20) != 0 )
            goto LABEL_20;
          v21 = SharedCacheMap[34] != 0LL;
          if ( (v20 & 0x3000000) != 0 )
          {
            v22 = SharedCacheMap + 15;
            v23 = SharedCacheMap[15];
            v24 = (__int64 **)SharedCacheMap[16];
            if ( *(_QWORD **)(v23 + 8) != SharedCacheMap + 15 || *v24 != v22 )
              __fastfail(3u);
            *v24 = (__int64 *)v23;
            *(_QWORD *)(v23 + 8) = v24;
            v25 = (__int64 **)qword_14034DE38;
            *v22 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
            SharedCacheMap[16] = v25;
            if ( *v25 != &CcDirtySharedCacheMapWithLogHandleList )
              __fastfail(3u);
            *v25 = v22;
            qword_14034DE38 = (__int64)(SharedCacheMap + 15);
          }
          v26 = SharedCacheMap + 17;
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
          v30 = 0;
          qword_14034DE68 = (__int64)v26;
          v31 = v21;
        }
        CcScheduleLazyWriteScan(v31, v30);
      }
LABEL_20:
      KeReleaseQueuedSpinLock(5uLL, v17);
      return v63;
    }
    v33 = KeAcquireQueuedSpinLock(5uLL);
    v16 = (*((_DWORD *)SharedCacheMap + 1))-- == 1;
    v11 = v33;
    if ( !v16 )
      goto LABEL_67;
    byte_14034E041 = 1;
    v34 = *((_DWORD *)SharedCacheMap + 38);
    if ( (v34 & 0x10000) != 0 )
    {
      if ( !*((_DWORD *)SharedCacheMap + 28) )
      {
        if ( (v34 & 0x3000000) != 0 )
        {
          v35 = SharedCacheMap + 15;
          v36 = SharedCacheMap[15];
          v37 = (__int64 **)SharedCacheMap[16];
          if ( *(_QWORD **)(v36 + 8) != SharedCacheMap + 15 || *v37 != v35 )
            __fastfail(3u);
          *v37 = (__int64 *)v36;
          *(_QWORD *)(v36 + 8) = v37;
          v38 = (__int64 **)qword_14034DE38;
          *v35 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          SharedCacheMap[16] = v38;
          if ( *v38 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v38 = v35;
          qword_14034DE38 = (__int64)(SharedCacheMap + 15);
        }
        v39 = SharedCacheMap + 17;
        v40 = *v39;
        v41 = (__int64 **)v39[1];
        if ( *(__int64 **)(*v39 + 8) != v39 || *v41 != v39 )
          __fastfail(3u);
        *v41 = (__int64 *)v40;
        *(_QWORD *)(v40 + 8) = v41;
        v42 = (__int64 **)qword_14034DE68;
        *v39 = (__int64)&CcLazyWriterCursor;
        v39[1] = (__int64)v42;
        if ( *v42 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v42 = v39;
        qword_14034DE68 = (__int64)v39;
      }
      v43 = 1;
      v44 = 1;
    }
    else
    {
      if ( *((_DWORD *)SharedCacheMap + 28) || (v34 & 0x20) != 0 )
        goto LABEL_67;
      v45 = SharedCacheMap[34] != 0LL;
      if ( (v34 & 0x3000000) != 0 )
      {
        v46 = SharedCacheMap + 15;
        v47 = SharedCacheMap[15];
        v48 = (__int64 **)SharedCacheMap[16];
        if ( *(_QWORD **)(v47 + 8) != SharedCacheMap + 15 || *v48 != v46 )
          __fastfail(3u);
        *v48 = (__int64 *)v47;
        *(_QWORD *)(v47 + 8) = v48;
        v49 = (__int64 **)qword_14034DE38;
        *v46 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
        SharedCacheMap[16] = v49;
        if ( *v49 != &CcDirtySharedCacheMapWithLogHandleList )
          __fastfail(3u);
        *v49 = v46;
        qword_14034DE38 = (__int64)(SharedCacheMap + 15);
      }
      v50 = SharedCacheMap + 17;
      v51 = *v50;
      v52 = (__int64 **)v50[1];
      if ( *(__int64 **)(*v50 + 8) != v50 || *v52 != v50 )
        __fastfail(3u);
      *v52 = (__int64 *)v51;
      *(_QWORD *)(v51 + 8) = v52;
      v53 = (__int64 **)qword_14034DE68;
      *v50 = (__int64)&CcLazyWriterCursor;
      v50[1] = (__int64)v53;
      if ( *v53 != &CcLazyWriterCursor )
        __fastfail(3u);
      *v53 = v50;
      v43 = 0;
      qword_14034DE68 = (__int64)v50;
      v44 = v45;
    }
    CcScheduleLazyWriteScan(v44, v43);
LABEL_67:
    v12 = 0;
    goto LABEL_68;
  }
  if ( (SharedCacheMap[19] & 0x2000) == 0 )
  {
LABEL_3:
    ++*((_DWORD *)SharedCacheMap + 1);
    goto LABEL_4;
  }
  if ( ((unsigned __int8)FileOffset & 1) != 0 )
  {
    FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    goto LABEL_3;
  }
LABEL_68:
  KeReleaseQueuedSpinLock(5uLL, v11);
  return v12;
}
