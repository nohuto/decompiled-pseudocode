/*
 * XREFs of CcDeleteSharedCacheMap @ 0x14000D140
 * Callers:
 *     CcUninitializeCacheMap @ 0x1400AEF70 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 *     CcUninitializeVolumeCacheMap @ 0x14000D400 (CcUninitializeVolumeCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14000D4E4 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDeleteMbcb @ 0x14000D6AC (CcDeleteMbcb.c)
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     CcDeleteBcbs @ 0x140107150 (CcDeleteBcbs.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 */

void __fastcall CcDeleteSharedCacheMap(__int64 a1, KIRQL a2, int a3, struct _FILE_OBJECT *a4)
{
  __int64 v4; // rax
  __int64 v6; // r10
  _QWORD *v8; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  bool v13; // bl
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rsi
  void *v17; // rcx
  void *v18; // rax
  __int64 v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx

  v4 = a1 + 136;
  v6 = *(_QWORD *)(a1 + 136);
  v8 = *(_QWORD **)(a1 + 144);
  if ( *(_QWORD *)(v6 + 8) != v4 || *v8 != v4 )
    __fastfail(3u);
  *v8 = v6;
  *(_QWORD *)(v6 + 8) = v8;
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 120);
    v12 = *(_QWORD **)(a1 + 128);
    if ( *(_QWORD *)(v11 + 8) != a1 + 120 || *v12 != a1 + 120 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
  }
  *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = 0LL;
  *(_DWORD *)(a1 + 152) |= 0x80020u;
  KeReleaseQueuedSpinLock(5uLL, a2);
  if ( *(_QWORD *)(a1 + 16) != a1 + 16 )
    CcDeleteBcbs(a1);
  v13 = (*(_DWORD *)(a1 + 152) & 0x1000) == 0 && *(__int64 *)(a1 + 8) >= 0x100000;
  v14 = CcReferenceSharedCacheMapFileObject(a1);
  LOBYTE(v15) = v13;
  v16 = v14;
  CcUnmapVacbArray(a1, 0, 0, v15, 1);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v16 + 40), 0LL, 0, 2u);
  CcDereferenceSharedCacheMapFileObject(a1, v16);
  if ( a3 )
  {
    FsRtlReleaseFile(a4);
    CcDereferenceSharedCacheMapFileObject(a1, a4);
  }
  v17 = *(void **)(a1 + 168);
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x746C6644u);
  if ( *(_QWORD *)(a1 + 160) )
    CcDeleteMbcb(a1);
  CcUninitializeVolumeCacheMap(*(PVOID *)(a1 + 504));
  v18 = (void *)ObFastReplaceObject(a1 + 96, 0LL);
  ObfDereferenceObjectWithTag(v18, 0x746C6644u);
  v19 = *(_QWORD *)(a1 + 272);
  if ( v19 )
  {
    do
    {
      v23 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
      v24 = *(_QWORD *)v23;
      KeSetEvent((PRKEVENT)(v23 + 8), 0, 0);
      v19 = v24;
    }
    while ( v24 );
  }
  v20 = *(void **)(a1 + 88);
  if ( v20 != (void *)(a1 + 56) && v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = *(void **)(a1 + 176);
  if ( v21 && v21 != (void *)(a1 + 344) )
    ExFreePoolWithTag(v21, 0);
  v22 = *(void **)(a1 + 184);
  if ( v22 && v22 != (void *)(a1 + 344) )
    ExFreePoolWithTag(v22, 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
