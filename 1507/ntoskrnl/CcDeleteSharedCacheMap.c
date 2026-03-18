/*
 * XREFs of CcDeleteSharedCacheMap @ 0x140086290
 * Callers:
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 *     CcUninitializeVolumeCacheMap @ 0x14008652C (CcUninitializeVolumeCacheMap.c)
 *     CcUnmapAndPurge @ 0x1400865D8 (CcUnmapAndPurge.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     CcDeleteMbcb @ 0x1400F1CB4 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x140139D58 (CcDeleteBcbs.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 */

void __fastcall CcDeleteSharedCacheMap(__int64 a1, KIRQL a2, int a3, struct _FILE_OBJECT *a4)
{
  _QWORD *v6; // rcx
  __int64 v8; // r10
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  void *v15; // rcx
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi

  v6 = (_QWORD *)(a1 + 136);
  v8 = *v6;
  v9 = (_QWORD *)v6[1];
  if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v9 != v6 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 120);
    v11 = *(_QWORD **)(a1 + 128);
    if ( *(_QWORD *)(v10 + 8) != a1 + 120 || *v11 != a1 + 120 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
  }
  *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = 0LL;
  *(_DWORD *)(a1 + 152) |= 0x80020u;
  KeReleaseQueuedSpinLock(5uLL, a2);
  if ( *(_QWORD *)(a1 + 16) != a1 + 16 )
    CcDeleteBcbs(a1);
  LOBYTE(v12) = (*(_DWORD *)(a1 + 152) & 0x1000) == 0 && *(__int64 *)(a1 + 8) >= 0x100000;
  CcUnmapAndPurge(a1, v12);
  if ( a3 )
  {
    FsRtlReleaseFile(a4);
    _m_prefetchw((const void *)(a1 + 96));
    v13 = *(_QWORD *)(a1 + 96);
    if ( ((unsigned __int64)a4 ^ v13) >= 0xF )
    {
LABEL_24:
      ObDereferenceObjectDeferDeleteWithTag(a4, 0x746C6644u);
    }
    else
    {
      while ( 1 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v13 + 1, v13);
        if ( v14 == v13 )
          break;
        if ( ((unsigned __int64)a4 ^ v13) >= 0xF )
          goto LABEL_24;
      }
    }
  }
  v15 = *(void **)(a1 + 168);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x746C6644u);
  if ( *(_QWORD *)(a1 + 160) )
    CcDeleteMbcb(a1);
  CcUninitializeVolumeCacheMap(*(PVOID *)(a1 + 504));
  v16 = (void *)ObFastReplaceObject(a1 + 96, 0LL);
  ObfDereferenceObjectWithTag(v16, 0x746C6644u);
  v17 = *(_QWORD *)(a1 + 272);
  if ( v17 )
  {
    do
    {
      v21 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
      v22 = *(_QWORD *)v21;
      KeSetEvent((PRKEVENT)(v21 + 8), 0, 0);
      v17 = v22;
    }
    while ( v22 );
  }
  v18 = *(void **)(a1 + 88);
  if ( v18 != (void *)(a1 + 56) && v18 )
    ExFreePoolWithTag(v18, 0);
  v19 = *(void **)(a1 + 176);
  if ( v19 && v19 != (void *)(a1 + 344) )
    ExFreePoolWithTag(v19, 0);
  v20 = *(void **)(a1 + 184);
  if ( v20 && v20 != (void *)(a1 + 344) )
    ExFreePoolWithTag(v20, 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
