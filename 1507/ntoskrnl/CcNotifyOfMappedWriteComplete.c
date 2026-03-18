/*
 * XREFs of CcNotifyOfMappedWriteComplete @ 0x14012FB7C
 * Callers:
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     MmIsWriteErrorFatal @ 0x1400823F0 (MmIsWriteErrorFatal.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400F1EC4 (CcReleaseByteRangeFromWrite.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401DD050 (CcPostDeferredWrites.c)
 */

void __fastcall CcNotifyOfMappedWriteComplete(__int64 a1, __int64 a2, unsigned int a3, NTSTATUS a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  char v7; // r14
  __int64 v8; // rcx
  KIRQL v9; // di
  signed __int64 *v11; // rsi
  __int64 v12; // rdx
  ULONG_PTR v13; // r8
  __int64 v14; // r9
  int v15; // ebp
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  int v18; // eax
  int v19; // ecx
  __int64 *v20; // rax
  __int64 *v21; // rdx
  __int64 **v22; // rcx
  __int64 **v23; // rdx
  __int64 *v24; // rbx
  __int64 v25; // rcx
  __int64 **v26; // rax
  __int64 **v27; // rcx
  char v28; // dl
  char v29; // cl
  bool v30; // r8
  __int64 *v31; // rax
  __int64 *v32; // rdx
  __int64 **v33; // rcx
  __int64 **v34; // rdx
  __int64 *v35; // rbx
  __int64 v36; // rcx
  __int64 **v37; // rax
  __int64 **v38; // rcx
  __int64 v39; // [rsp+68h] [rbp+10h] BYREF

  v39 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = a3;
  v7 = 0;
  if ( a4 < 0 )
  {
    if ( !*(_DWORD *)(v4 + 4) )
      KeBugCheckEx(0x34u, 0x1349uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v11 = (signed __int64 *)(v4 + 96);
    v13 = ObFastReferenceObject((signed __int64 *)(v4 + 96));
    if ( !v13 )
      v13 = CcSlowReferenceSharedCacheMapFileObject(v4, v12, 0LL, v14);
    v15 = *(_DWORD *)(*(_QWORD *)(v13 + 8) + 52LL) & 0x10;
    _m_prefetchw(v11);
    v16 = *v11;
    while ( (v13 ^ v16) < 0xF )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64(v11, v16 + 1, v16);
      if ( v17 == v16 )
        goto LABEL_15;
    }
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v13, 0x746C6644u);
LABEL_15:
    v18 = MmIsWriteErrorFatal(1, v15, a4);
    a2 = v39;
    if ( !v18 )
      v7 = 1;
  }
  v8 = *(_QWORD *)(v4 + 48);
  if ( a2 + v5 > v8 )
  {
    if ( a2 > v8 )
      goto LABEL_5;
    LODWORD(v5) = v8 - a2;
  }
  if ( (_DWORD)v5 )
    CcReleaseByteRangeFromWrite(v4, &v39, v5, 0LL, v7);
LABEL_5:
  if ( CcDeferredWrites.Flink != &CcDeferredWrites )
    CcPostDeferredWrites(v8);
  v9 = KeAcquireQueuedSpinLock(5uLL);
  --*(_DWORD *)(v4 + 516);
  if ( (*(_DWORD *)(v4 + 4))-- == 1 )
  {
    byte_14034E041 = 1;
    v19 = *(_DWORD *)(v4 + 152);
    if ( (v19 & 0x10000) != 0 )
    {
      if ( !*(_DWORD *)(v4 + 112) )
      {
        if ( (v19 & 0x3000000) != 0 )
        {
          v20 = (__int64 *)(v4 + 120);
          v21 = *(__int64 **)(v4 + 120);
          v22 = *(__int64 ***)(v4 + 128);
          if ( v21[1] != v4 + 120 || *v22 != v20 )
            __fastfail(3u);
          *v22 = v21;
          v21[1] = (__int64)v22;
          v23 = (__int64 **)qword_14034DE38;
          *v20 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          *(_QWORD *)(v4 + 128) = v23;
          if ( *v23 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v23 = v20;
          qword_14034DE38 = v4 + 120;
        }
        v24 = (__int64 *)(v4 + 136);
        v25 = *v24;
        v26 = (__int64 **)v24[1];
        if ( *(__int64 **)(*v24 + 8) != v24 || *v26 != v24 )
          __fastfail(3u);
        *v26 = (__int64 *)v25;
        *(_QWORD *)(v25 + 8) = v26;
        v27 = (__int64 **)qword_14034DE68;
        *v24 = (__int64)&CcLazyWriterCursor;
        v24[1] = (__int64)v27;
        if ( *v27 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v27 = v24;
        qword_14034DE68 = (__int64)v24;
      }
      v28 = 1;
      v29 = 1;
    }
    else
    {
      if ( *(_DWORD *)(v4 + 112) || (v19 & 0x20) != 0 )
        goto LABEL_8;
      v30 = *(_QWORD *)(v4 + 272) != 0LL;
      if ( (v19 & 0x3000000) != 0 )
      {
        v31 = (__int64 *)(v4 + 120);
        v32 = *(__int64 **)(v4 + 120);
        v33 = *(__int64 ***)(v4 + 128);
        if ( v32[1] != v4 + 120 || *v33 != v31 )
          __fastfail(3u);
        *v33 = v32;
        v32[1] = (__int64)v33;
        v34 = (__int64 **)qword_14034DE38;
        *v31 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
        *(_QWORD *)(v4 + 128) = v34;
        if ( *v34 != &CcDirtySharedCacheMapWithLogHandleList )
          __fastfail(3u);
        *v34 = v31;
        qword_14034DE38 = v4 + 120;
      }
      v35 = (__int64 *)(v4 + 136);
      v36 = *v35;
      v37 = (__int64 **)v35[1];
      if ( *(__int64 **)(*v35 + 8) != v35 || *v37 != v35 )
        __fastfail(3u);
      *v37 = (__int64 *)v36;
      *(_QWORD *)(v36 + 8) = v37;
      v38 = (__int64 **)qword_14034DE68;
      *v35 = (__int64)&CcLazyWriterCursor;
      v35[1] = (__int64)v38;
      if ( *v38 != &CcLazyWriterCursor )
        __fastfail(3u);
      *v38 = v35;
      v28 = 0;
      qword_14034DE68 = (__int64)v35;
      v29 = v30;
    }
    CcScheduleLazyWriteScan(v29, v28);
  }
LABEL_8:
  KeReleaseQueuedSpinLock(5uLL, v9);
}
