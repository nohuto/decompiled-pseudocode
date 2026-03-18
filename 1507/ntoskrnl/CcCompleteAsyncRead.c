/*
 * XREFs of CcCompleteAsyncRead @ 0x14011D990
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x14011CED4 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x14011D044 (CcAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x14011DF64 (CcPostWorkQueueAsyncRead.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     CcCopyReadExceptionFilter @ 0x1401DCF08 (CcCopyReadExceptionFilter.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 *     CcMapAndCopyFromCache @ 0x14049D020 (CcMapAndCopyFromCache.c)
 */

void __fastcall CcCompleteAsyncRead(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v2; // r14d
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // r11d
  int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // r12
  signed __int32 v9; // eax
  unsigned __int32 v10; // r8d
  int v11; // r8d
  PVOID v12; // rax
  __int64 v13; // rcx
  signed __int32 v14; // eax
  unsigned __int32 v15; // r8d
  int v16; // r8d
  KIRQL v17; // bl
  int v19; // ecx
  bool v20; // r8
  __int64 *v21; // rsi
  __int64 v22; // rcx
  __int64 **v23; // rax
  __int64 **v24; // rcx
  char v25; // dl
  char v26; // cl
  int v27; // eax
  __int64 *v28; // rax
  __int64 *v29; // rdx
  __int64 **v30; // rcx
  __int64 **v31; // rdx
  __int64 *v32; // rsi
  __int64 v33; // rcx
  __int64 **v34; // rax
  __int64 **v35; // rcx
  __int64 *v36; // rax
  __int64 *v37; // rdx
  __int64 **v38; // rcx
  __int64 **v39; // rdx
  int v40; // [rsp+7Ch] [rbp-84h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  int v43[2]; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v45; // [rsp+118h] [rbp+18h]
  int v46; // [rsp+120h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v27 = 2;
    if ( v2 < 2 )
      v27 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
    v2 = v27;
  }
  v45 = v2;
  LODWORD(v44) = 0;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v43 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 40);
  v46 = v5;
  v6 = *(_DWORD *)(a1 + 56);
  v40 = v6;
  v7 = *(_QWORD *)(a1 + 64);
  v42 = v7;
  v8 = *(_QWORD *)(a1 + 72);
  v41 = *(_QWORD *)(a1 + 80);
  v9 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  do
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3,
           (v6 << 12) | v9 & 0xFFFF8FFF,
           v9);
  }
  while ( v9 != v10 );
  v11 = (v10 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    EtwTracePriority((_DWORD)CurrentThread, 1331, v11, v6, 0LL);
    v7 = v42;
    v5 = v46;
  }
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)7;
  if ( *(int *)v8 < 0 )
  {
    v13 = v41;
  }
  else
  {
    *(_DWORD *)v8 = 0;
    *(_QWORD *)(v8 + 8) = v5;
    if ( (*(_BYTE *)(v7 + 10) & 5) != 0 )
    {
      v12 = *(PVOID *)(v7 + 24);
    }
    else
    {
      v12 = MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0x40000020u);
      v5 = v46;
    }
    if ( v12 )
    {
      LOBYTE(v6) = 1;
      CcMapAndCopyFromCache(v43[0], v4, v5, v6, v12, (__int64)&v44, v40);
    }
    else
    {
      *(_DWORD *)v8 = -1073741670;
    }
    v13 = v41;
  }
  if ( (_DWORD)v44 )
    ++CcNumberAsyncReadRefaulted;
  if ( v13 && *(_QWORD *)v13 )
    (*(void (__fastcall **)(_QWORD))v13)(*(_QWORD *)(v13 + 8));
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
  v14 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3,
            (v2 << 12) | v14 & 0xFFFF8FFF,
            v14);
  }
  while ( v14 != v15 );
  v16 = (v15 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)CurrentThread, 1331, v16, v2, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 520));
  v17 = KeAcquireQueuedSpinLock(5uLL);
  if ( (*(_DWORD *)(v3 + 4))-- == 1 )
  {
    byte_14034E041 = 1;
    v19 = *(_DWORD *)(v3 + 152);
    if ( (v19 & 0x10000) != 0 )
    {
      if ( !*(_DWORD *)(v3 + 112) )
      {
        if ( (v19 & 0x3000000) != 0 )
        {
          v28 = (__int64 *)(v3 + 120);
          v29 = *(__int64 **)(v3 + 120);
          v30 = *(__int64 ***)(v3 + 128);
          if ( v29[1] != v3 + 120 || *v30 != v28 )
            __fastfail(3u);
          *v30 = v29;
          v29[1] = (__int64)v30;
          v31 = (__int64 **)qword_14034DE38;
          *v28 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          *(_QWORD *)(v3 + 128) = v31;
          if ( *v31 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v31 = v28;
          qword_14034DE38 = v3 + 120;
        }
        v32 = (__int64 *)(v3 + 136);
        v33 = *v32;
        v34 = (__int64 **)v32[1];
        if ( *(__int64 **)(*v32 + 8) != v32 || *v34 != v32 )
          __fastfail(3u);
        *v34 = (__int64 *)v33;
        *(_QWORD *)(v33 + 8) = v34;
        v35 = (__int64 **)qword_14034DE68;
        *v32 = (__int64)&CcLazyWriterCursor;
        v32[1] = (__int64)v35;
        if ( *v35 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v35 = v32;
        qword_14034DE68 = (__int64)v32;
      }
      v25 = 1;
      v26 = 1;
    }
    else
    {
      if ( *(_DWORD *)(v3 + 112) || (v19 & 0x20) != 0 )
        goto LABEL_25;
      v20 = *(_QWORD *)(v3 + 272) != 0LL;
      if ( (v19 & 0x3000000) != 0 )
      {
        v36 = (__int64 *)(v3 + 120);
        v37 = *(__int64 **)(v3 + 120);
        v38 = *(__int64 ***)(v3 + 128);
        if ( v37[1] != v3 + 120 || *v38 != v36 )
          __fastfail(3u);
        *v38 = v37;
        v37[1] = (__int64)v38;
        v39 = (__int64 **)qword_14034DE38;
        *v36 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
        *(_QWORD *)(v3 + 128) = v39;
        if ( *v39 != &CcDirtySharedCacheMapWithLogHandleList )
          __fastfail(3u);
        *v39 = v36;
        qword_14034DE38 = v3 + 120;
      }
      v21 = (__int64 *)(v3 + 136);
      v22 = *v21;
      v23 = (__int64 **)v21[1];
      if ( *(__int64 **)(*v21 + 8) != v21 || *v23 != v21 )
        __fastfail(3u);
      *v23 = (__int64 *)v22;
      *(_QWORD *)(v22 + 8) = v23;
      v24 = (__int64 **)qword_14034DE68;
      *v21 = (__int64)&CcLazyWriterCursor;
      v21[1] = (__int64)v24;
      if ( *v24 != &CcLazyWriterCursor )
        __fastfail(3u);
      *v24 = v21;
      qword_14034DE68 = (__int64)v21;
      v25 = 0;
      v26 = v20;
    }
    CcScheduleLazyWriteScan(v26, v25);
  }
LABEL_25:
  KeReleaseQueuedSpinLock(5uLL, v17);
}
