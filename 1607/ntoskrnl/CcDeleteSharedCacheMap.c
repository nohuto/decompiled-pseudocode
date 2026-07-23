/*
 * XREFs of CcDeleteSharedCacheMap @ 0x1400CABD4
 * Callers:
 *     CcUninitializeCacheMap @ 0x140070140 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 *     CcDeleteSectionsForPartition @ 0x1401B24D8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 *     CcUninitializeVolumeCacheMap @ 0x1400CAE80 (CcUninitializeVolumeCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcDeleteMbcb @ 0x14010C600 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1401122D8 (CcDeleteBcbs.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 */

void __fastcall CcDeleteSharedCacheMap(__int64 a1, KIRQL a2, int a3, struct _FILE_OBJECT *a4)
{
  __int64 v4; // rax
  __int64 v6; // r10
  _QWORD *v8; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // bl
  __int64 v16; // rsi
  void *v17; // rcx
  void *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx

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
  v15 = *(_QWORD *)(a1 + 8) >= 0x100000LL;
  v16 = CcReferenceSharedCacheMapFileObject(a1, v13, v14);
  CcUnmapVacbArray(a1, 0LL, 0, v15, 1);
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
      v20 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
      v21 = *(_QWORD *)v20;
      KeSetEvent((PRKEVENT)(v20 + 8), 0, 0);
      v19 = v21;
    }
    while ( v21 );
  }
  v22 = *(void **)(a1 + 88);
  if ( v22 != (void *)(a1 + 56) && v22 )
    ExFreePoolWithTag(v22, 0);
  v23 = *(void **)(a1 + 176);
  if ( v23 && v23 != (void *)(a1 + 344) )
    ExFreePoolWithTag(v23, 0);
  v24 = *(void **)(a1 + 184);
  if ( v24 && v24 != (void *)(a1 + 344) )
    ExFreePoolWithTag(v24, 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
