/*
 * XREFs of CcSetLogHandleForFileEx @ 0x1400A5D54
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v8; // rbx
  KIRQL v9; // si
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  _OWORD v26[10]; // [rsp+30h] [rbp-A8h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !*(_DWORD *)(v8 + 4) )
    KeBugCheckEx(0x34u, 0x2E5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*(_DWORD *)(v8 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x2EBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v9 = KeAcquireQueuedSpinLock(5uLL);
  if ( *(_QWORD *)(v8 + 240) )
  {
    v14 = *(_QWORD *)(v8 + 120);
    v15 = *(_QWORD **)(v8 + 128);
    if ( *(_QWORD *)(v14 + 8) != v8 + 120 || *v15 != v8 + 120 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
  }
  if ( a2 )
  {
    v10 = (_QWORD *)(v8 + 120);
    if ( *(_DWORD *)(v8 + 112) )
    {
      v16 = (_QWORD *)qword_140322FD8;
      if ( *(__int64 **)qword_140322FD8 != &CcDirtySharedCacheMapWithLogHandleList )
        __fastfail(3u);
      *v10 = &CcDirtySharedCacheMapWithLogHandleList;
      *(_QWORD *)(v8 + 128) = v16;
      *v16 = v10;
      qword_140322FD8 = v8 + 120;
    }
    else
    {
      v11 = (_QWORD *)qword_140322FB8;
      if ( *(__int64 **)qword_140322FB8 != &CcCleanSharedCacheMapWithLogHandleList )
        __fastfail(3u);
      *v10 = &CcCleanSharedCacheMapWithLogHandleList;
      *(_QWORD *)(v8 + 128) = v11;
      *v11 = v10;
      qword_140322FB8 = v8 + 120;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(v8 + 504) + 40LL) )
    {
      memset(v26, 0, 0x98uLL);
      *((_QWORD *)&v26[8] + 1) = -1LL;
      *(_QWORD *)&v26[0] = a2;
      *(_QWORD *)&v26[1] = a4;
      *((_QWORD *)&v26[0] + 1) = a3;
      if ( Object )
      {
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        *((_QWORD *)&v26[7] + 1) = Object;
      }
      v17 = *(_QWORD *)(v8 + 504);
      v18 = v26[1];
      *(_OWORD *)(v17 + 40) = v26[0];
      v19 = v26[2];
      *(_OWORD *)(v17 + 56) = v18;
      v20 = v26[3];
      *(_OWORD *)(v17 + 72) = v19;
      v21 = v26[4];
      *(_OWORD *)(v17 + 88) = v20;
      v22 = v26[5];
      *(_OWORD *)(v17 + 104) = v21;
      v23 = v26[6];
      *(_OWORD *)(v17 + 120) = v22;
      v24 = v26[8];
      *(_OWORD *)(v17 + 136) = v23;
      v25 = *(_QWORD *)&v26[9];
      *(_OWORD *)(v17 + 152) = v26[7];
      *(_OWORD *)(v17 + 168) = v24;
      *(_QWORD *)(v17 + 184) = v25;
    }
    v12 = *(_QWORD *)(v8 + 504) + 40LL;
    *(_QWORD *)(v8 + 240) = v12;
    if ( (*(_DWORD *)(v8 + 152) & 0x1000000) == 0 )
    {
      v13 = *(unsigned int *)(v8 + 112);
      if ( (_DWORD)v13 )
        *(_QWORD *)(v12 + 24) += v13;
    }
    *(_DWORD *)(v8 + 152) |= 0x1000000u;
  }
  else
  {
    *(_QWORD *)(v8 + 240) = 0LL;
    *(_DWORD *)(v8 + 152) &= ~0x1000000u;
  }
  KeReleaseQueuedSpinLock(5uLL, v9);
}
