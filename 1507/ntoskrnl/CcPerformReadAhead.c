/*
 * XREFs of CcPerformReadAhead @ 0x1400333F0
 * Callers:
 *     CcWorkerThread @ 0x1400328D0 (CcWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140083854 (MmWaitForCacheManagerPrefetch.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 *     MmPrefetchForCacheManager @ 0x140477744 (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x14049D020 (CcMapAndCopyFromCache.c)
 */

void __fastcall CcPerformReadAhead(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 v3; // al
  signed __int64 v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  __int64 v7; // rdi
  volatile signed __int32 *v8; // r15
  BOOL v9; // eax
  int v10; // r8d
  signed __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v17; // ebx
  int v18; // r9d
  signed __int32 v19; // eax
  unsigned __int32 v20; // r8d
  int v21; // r8d
  signed __int32 v22; // eax
  unsigned __int32 v23; // r8d
  int v24; // r8d
  int v25; // eax
  __int64 v26; // rbx
  volatile signed __int32 *v27; // rdi
  KIRQL v28; // di
  int v30; // ecx
  bool v31; // r8
  __int64 *v32; // rax
  __int64 *v33; // rdx
  __int64 **v34; // rcx
  __int64 **v35; // rdx
  char v36; // dl
  char v37; // cl
  __int64 *v38; // rax
  __int64 *v39; // rdx
  __int64 **v40; // rcx
  __int64 **v41; // rdx
  __int64 *v42; // rax
  __int64 *v43; // rdx
  __int64 **v44; // rcx
  __int64 **v45; // rdx
  __int64 *v46; // rax
  __int64 *v47; // rdx
  __int64 **v48; // rcx
  __int64 **v49; // rdx
  int v50; // [rsp+28h] [rbp-160h]
  KIRQL OldIrql; // [rsp+40h] [rbp-148h]
  KIRQL OldIrqla; // [rsp+40h] [rbp-148h]
  unsigned int v53; // [rsp+44h] [rbp-144h]
  int v54; // [rsp+48h] [rbp-140h]
  int v55; // [rsp+4Ch] [rbp-13Ch]
  int v56; // [rsp+5Ch] [rbp-12Ch]
  int v57; // [rsp+60h] [rbp-128h]
  int v58; // [rsp+64h] [rbp-124h]
  unsigned int v59; // [rsp+68h] [rbp-120h]
  unsigned int v60; // [rsp+70h] [rbp-118h]
  int v61; // [rsp+74h] [rbp-114h]
  __int64 v62; // [rsp+78h] [rbp-110h]
  __int64 v63; // [rsp+80h] [rbp-108h]
  BOOL v64; // [rsp+88h] [rbp-100h]
  int v65; // [rsp+90h] [rbp-F8h]
  signed __int64 v66; // [rsp+98h] [rbp-F0h]
  PVOID P; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-D8h]
  __int64 v69; // [rsp+B8h] [rbp-D0h]
  __int64 v70; // [rsp+C0h] [rbp-C8h]
  __int64 v71; // [rsp+C8h] [rbp-C0h] BYREF
  int v72[4]; // [rsp+D0h] [rbp-B8h]
  struct _KTHREAD *v73; // [rsp+E0h] [rbp-A8h]
  _QWORD v74[2]; // [rsp+F8h] [rbp-90h] BYREF
  unsigned int v75; // [rsp+108h] [rbp-80h]
  int v76; // [rsp+10Ch] [rbp-7Ch]
  __int64 v77; // [rsp+110h] [rbp-78h]
  _QWORD v78[2]; // [rsp+118h] [rbp-70h] BYREF
  unsigned int v79; // [rsp+128h] [rbp-60h]
  int v80; // [rsp+12Ch] [rbp-5Ch]
  __int64 v81; // [rsp+130h] [rbp-58h]
  _QWORD v82[2]; // [rsp+138h] [rbp-50h] BYREF
  _QWORD v83[2]; // [rsp+148h] [rbp-40h] BYREF
  void *retaddr; // [rsp+188h] [rbp+0h]

  v2 = a2;
  v63 = a2;
  v70 = a2;
  v68 = 0LL;
  v69 = 0LL;
  v56 = 0;
  v57 = 0;
  v55 = 0;
  v61 = 0;
  v60 = 0;
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  v62 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL);
  v68 = *(_QWORD *)(v62 + 208);
  v69 = *(_QWORD *)(v62 + 216);
  LOBYTE(a2) = 1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(v68 + 16))(v69, a2);
  v58 = v3;
  if ( v3 )
  {
    while ( 1 )
    {
      P = 0LL;
      v4 = v66;
      v5 = v53;
      v6 = v54;
      while ( 1 )
      {
        OldIrql = KeAcquireQueuedSpinLock(5uLL);
        v7 = *(_QWORD *)(v2 + 48);
        if ( v7 )
        {
          v8 = (volatile signed __int32 *)(v7 + 80);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v7 + 80);
          }
          else if ( _interlockedbittestandset64(v8, 0LL) )
          {
            KxWaitForSpinLockAndAcquire(v7 + 80);
          }
          v5 = *(_DWORD *)(v7 + 52);
          v9 = v5 == 0;
          v64 = v9;
          v4 = *(_QWORD *)(v7 + 56);
          v66 = v4;
          if ( v5 > 0x800000 )
            v5 = 0x800000;
          v53 = v5;
          *(_DWORD *)(v7 + 52) = 0;
          if ( !v9 )
            *(_QWORD *)(v7 + 64) = v4 + v5;
          if ( (*(_DWORD *)v7 & 0x200000) != 0 )
          {
            v61 = 1;
            v60 = *(_DWORD *)(v7 + 88);
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v8, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
          v6 = (*(_DWORD *)v7 >> 18) & 7;
          v54 = v6;
          v2 = v63;
        }
        KeReleaseQueuedSpinLock(5uLL, OldIrql);
        if ( !v7 || v64 )
          break;
        v11 = *(_QWORD *)(v62 + 8);
        if ( v4 >= v11 )
          goto LABEL_34;
        v57 = 1;
        if ( v4 + v5 >= v11 )
        {
          v5 = v11 - v4;
          v56 = 1;
        }
        v12 = (v5 + 4095) & 0xFFFFF000;
        v5 = v12;
        v53 = v12;
        v13 = v12;
        v59 = v12;
        *(_QWORD *)v72 = v4;
        v65 = v12;
        if ( v61 )
        {
          if ( !v60 )
            KeBugCheckEx(0x34u, 0x9ECuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          v14 = v12;
          if ( v12 > v60 )
            v14 = v60;
        }
        else
        {
          v14 = v12;
        }
        if ( (xmmword_1403D1290 & 0x20000) == 0 )
          goto LABEL_32;
        v74[1] = v4;
        v75 = v12;
        v15 = a1;
        v74[0] = a1;
        v76 = v6;
        v77 = 0LL;
        v83[0] = v74;
        v83[1] = 32LL;
        EtwTraceKernelEvent((int)v83, 1, 0x80020000, 0x1603u, 4200706);
        v13 = v59;
        while ( 2 )
        {
          if ( v13 )
          {
            if ( v14 > v13 )
              v14 = v13;
            if ( (xmmword_1403D1290 & 0x20000) != 0 )
            {
              v81 = 0LL;
              v78[1] = v4;
              v79 = v14;
              v78[0] = v15;
              v80 = v6;
              v82[0] = v78;
              v82[1] = 32LL;
              EtwTraceKernelEvent((int)v82, 1, 0x80020000, 0x160Bu, 4200706);
            }
            v55 |= MmPrefetchForCacheManager(v63, v4, v10, v14, v6, v50, (__int64)&P);
            v13 = v59 - v14;
            v59 -= v14;
            v4 += v14;
            v66 = v4;
LABEL_32:
            v15 = a1;
            continue;
          }
          break;
        }
LABEL_34:
        v2 = v63;
      }
      if ( !P )
        break;
      CurrentThread = KeGetCurrentThread();
      v73 = CurrentThread;
      v17 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
      if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      {
        v25 = 2;
        if ( v17 < 2 )
          v25 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
        v17 = v25;
      }
      MmWaitForCacheManagerPrefetch(P);
      v19 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3,
                (v54 << 12) | v19 & 0xFFFF8FFF,
                v19);
      }
      while ( v19 != v20 );
      v21 = (v20 >> 12) & 7;
      if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
        EtwTracePriority((_DWORD)CurrentThread, 1331, v21, v54, 0LL);
      LOBYTE(v18) = 1;
      CcMapAndCopyFromCache(v2, v72[0], v65, v18, 0LL, (__int64)&v71, v54);
      v22 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3,
                (v17 << 12) | v22 & 0xFFFF8FFF,
                v22);
      }
      while ( v22 != v23 );
      v24 = (v23 >> 12) & 7;
      if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
        EtwTracePriority((_DWORD)CurrentThread, 1331, v24, v17, 0LL);
    }
  }
  __addgsdword(0x5E64u, (unsigned int)KeGetCurrentThread()[1].Timer.TimerListEntry.Flink);
  if ( v58 )
    (*(void (__fastcall **)(__int64))(v68 + 24))(v69);
  OldIrqla = KeAcquireQueuedSpinLock(5uLL);
  v26 = *(_QWORD *)(v2 + 48);
  if ( v26 )
  {
    v27 = (volatile signed __int32 *)(v26 + 80);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v26 + 80);
    }
    else if ( _interlockedbittestandset64(v27, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v26 + 80);
    }
    *(_DWORD *)v26 &= ~0x10000u;
    if ( v56 && (*(_DWORD *)(v2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v26 + 64) = 0LL;
    if ( !v55 && v57 )
      *(_DWORD *)v26 &= ~0x20000u;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v27, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
  }
  KeReleaseQueuedSpinLock(5uLL, OldIrqla);
  ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
  v28 = KeAcquireQueuedSpinLock(5uLL);
  if ( (*(_DWORD *)(v62 + 4))-- == 1 )
  {
    byte_14034E041 = 1;
    v30 = *(_DWORD *)(v62 + 152);
    if ( (v30 & 0x10000) != 0 )
    {
      if ( !*(_DWORD *)(v62 + 112) )
      {
        if ( (v30 & 0x3000000) != 0 )
        {
          v38 = (__int64 *)(v62 + 120);
          v39 = *(__int64 **)(v62 + 120);
          v40 = *(__int64 ***)(v62 + 128);
          if ( v39[1] != v62 + 120 || *v40 != v38 )
            __fastfail(3u);
          *v40 = v39;
          v39[1] = (__int64)v40;
          v41 = (__int64 **)qword_14034DE38;
          *v38 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          *(_QWORD *)(v62 + 128) = v41;
          if ( *v41 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v41 = v38;
          qword_14034DE38 = v62 + 120;
        }
        v42 = (__int64 *)(v62 + 136);
        v43 = *(__int64 **)(v62 + 136);
        v44 = *(__int64 ***)(v62 + 144);
        if ( v43[1] != v62 + 136 || *v44 != v42 )
          __fastfail(3u);
        *v44 = v43;
        v43[1] = (__int64)v44;
        v45 = (__int64 **)qword_14034DE68;
        *v42 = (__int64)&CcLazyWriterCursor;
        *(_QWORD *)(v62 + 144) = v45;
        if ( *v45 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v45 = v42;
        qword_14034DE68 = v62 + 136;
      }
      v36 = 1;
      v37 = 1;
    }
    else
    {
      if ( *(_DWORD *)(v62 + 112) || (v30 & 0x20) != 0 )
        goto LABEL_71;
      v31 = *(_QWORD *)(v62 + 272) != 0LL;
      if ( (v30 & 0x3000000) != 0 )
      {
        v46 = (__int64 *)(v62 + 120);
        v47 = *(__int64 **)(v62 + 120);
        v48 = *(__int64 ***)(v62 + 128);
        if ( v47[1] != v62 + 120 || *v48 != v46 )
          __fastfail(3u);
        *v48 = v47;
        v47[1] = (__int64)v48;
        v49 = (__int64 **)qword_14034DE38;
        *v46 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
        *(_QWORD *)(v62 + 128) = v49;
        if ( *v49 != &CcDirtySharedCacheMapWithLogHandleList )
          __fastfail(3u);
        *v49 = v46;
        qword_14034DE38 = v62 + 120;
      }
      v32 = (__int64 *)(v62 + 136);
      v33 = *(__int64 **)(v62 + 136);
      v34 = *(__int64 ***)(v62 + 144);
      if ( v33[1] != v62 + 136 || *v34 != v32 )
        __fastfail(3u);
      *v34 = v33;
      v33[1] = (__int64)v34;
      v35 = (__int64 **)qword_14034DE68;
      *v32 = (__int64)&CcLazyWriterCursor;
      *(_QWORD *)(v62 + 144) = v35;
      if ( *v35 != &CcLazyWriterCursor )
        __fastfail(3u);
      *v35 = v32;
      qword_14034DE68 = v62 + 136;
      v36 = 0;
      v37 = v31;
    }
    CcScheduleLazyWriteScan(v37, v36);
  }
LABEL_71:
  *(_DWORD *)(v62 + 152) &= ~0x4000u;
  KeReleaseQueuedSpinLock(5uLL, v28);
}
