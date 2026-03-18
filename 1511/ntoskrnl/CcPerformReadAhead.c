/*
 * XREFs of CcPerformReadAhead @ 0x1400FC4E4
 * Callers:
 *     CcWorkerThread @ 0x1400B2610 (CcWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     PsSetPagePriorityThread @ 0x1400FB7D0 (PsSetPagePriorityThread.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1400FB914 (MmWaitForCacheManagerPrefetch.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CcMapAndCopyFromCache @ 0x14047A640 (CcMapAndCopyFromCache.c)
 *     MmPrefetchForCacheManager @ 0x1404D9A0C (MmPrefetchForCacheManager.c)
 */

void __fastcall CcPerformReadAhead(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int8 v3; // al
  signed __int64 v4; // rbx
  unsigned int v5; // r14d
  KIRQL v6; // al
  __int64 v7; // r15
  BOOL v8; // eax
  int v9; // r8d
  signed __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  KIRQL v14; // r14
  __int64 v15; // rbx
  KIRQL v16; // di
  KIRQL v17; // [rsp+40h] [rbp-148h]
  unsigned int v18; // [rsp+44h] [rbp-144h]
  int v19; // [rsp+48h] [rbp-140h]
  int v20; // [rsp+4Ch] [rbp-13Ch]
  int v21; // [rsp+54h] [rbp-134h]
  int v22; // [rsp+58h] [rbp-130h]
  unsigned int v23; // [rsp+5Ch] [rbp-12Ch]
  int v24; // [rsp+60h] [rbp-128h]
  unsigned int v25; // [rsp+64h] [rbp-124h]
  int v26; // [rsp+68h] [rbp-120h]
  __int64 v27; // [rsp+70h] [rbp-118h]
  BOOL v28; // [rsp+80h] [rbp-108h]
  __int64 v29; // [rsp+A0h] [rbp-E8h]
  __int64 v30; // [rsp+A8h] [rbp-E0h]
  signed __int64 v31; // [rsp+B8h] [rbp-D0h]
  _QWORD v32[2]; // [rsp+F8h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+108h] [rbp-80h]
  int v34; // [rsp+10Ch] [rbp-7Ch]
  __int64 v35; // [rsp+110h] [rbp-78h]
  _QWORD v36[2]; // [rsp+118h] [rbp-70h] BYREF
  unsigned int v37; // [rsp+128h] [rbp-60h]
  int v38; // [rsp+12Ch] [rbp-5Ch]
  __int64 v39; // [rsp+130h] [rbp-58h]
  _QWORD v40[2]; // [rsp+138h] [rbp-50h] BYREF
  _QWORD v41[2]; // [rsp+148h] [rbp-40h] BYREF

  v2 = a2;
  v22 = 0;
  v24 = 0;
  v20 = 0;
  v26 = 0;
  v25 = 0;
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  v27 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL);
  v29 = *(_QWORD *)(v27 + 208);
  v30 = *(_QWORD *)(v27 + 216);
  LOBYTE(a2) = 1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(v29 + 16))(v30, a2);
  v21 = v3;
  if ( v3 )
  {
    v4 = v31;
    v5 = v18;
    while ( 1 )
    {
      v6 = KeAcquireQueuedSpinLock(5uLL);
      v17 = v6;
      v7 = *(_QWORD *)(v2 + 48);
      if ( v7 )
      {
        KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 80));
        v5 = *(_DWORD *)(v7 + 52);
        v8 = v5 == 0;
        v28 = v8;
        v4 = *(_QWORD *)(v7 + 56);
        if ( v5 > 0x800000 )
          v5 = 0x800000;
        *(_DWORD *)(v7 + 52) = 0;
        if ( !v8 )
          *(_QWORD *)(v7 + 64) = v4 + v5;
        if ( (*(_DWORD *)v7 & 0x200000) != 0 )
        {
          v26 = 1;
          v25 = *(_DWORD *)(v7 + 88);
        }
        KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 80));
        v19 = (*(_DWORD *)v7 >> 18) & 7;
        v6 = v17;
      }
      KeReleaseQueuedSpinLock(5uLL, v6);
      if ( !v7 || v28 )
        break;
      v10 = *(_QWORD *)(v27 + 8);
      if ( v4 < v10 )
      {
        v24 = 1;
        if ( v4 + v5 >= v10 )
        {
          v5 = v10 - v4;
          v22 = 1;
        }
        v11 = (v5 + 4095) & 0xFFFFF000;
        v5 = v11;
        v12 = v11;
        v23 = v11;
        if ( v26 )
        {
          if ( !v25 )
            KeBugCheckEx(0x34u, 0x9E7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          v13 = v11;
          if ( v11 > v25 )
            v13 = v25;
        }
        else
        {
          v13 = v11;
        }
        if ( (xmmword_140382290 & 0x20000) != 0 )
        {
          v32[1] = v4;
          v33 = v11;
          v32[0] = a1;
          v34 = v19;
          v35 = 0LL;
          v40[0] = v32;
          v40[1] = 32LL;
          EtwTraceKernelEvent((int)v40, 1, 0x80020000, 0x1603u, 4200706);
          v12 = v23;
        }
        while ( v12 )
        {
          if ( v13 > v12 )
            v13 = v12;
          if ( (xmmword_140382290 & 0x20000) != 0 )
          {
            v39 = 0LL;
            v36[1] = v4;
            v37 = v13;
            v36[0] = a1;
            v38 = v19;
            v41[0] = v36;
            v41[1] = 32LL;
            EtwTraceKernelEvent((int)v41, 1, 0x80020000, 0x160Bu, 4200706);
          }
          v20 |= MmPrefetchForCacheManager(v2, v4, v9, v13, v19);
          v12 = v23 - v13;
          v23 -= v13;
          v4 += v13;
        }
      }
    }
  }
  __addgsdword(0x5E64u, (unsigned int)KeGetCurrentThread()[1].Timer.TimerListEntry.Flink);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(v29 + 24))(v30);
  v14 = KeAcquireQueuedSpinLock(5uLL);
  v15 = *(_QWORD *)(v2 + 48);
  if ( v15 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v15 + 80));
    *(_DWORD *)v15 &= ~0x10000u;
    if ( v22 && (*(_DWORD *)(v2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v15 + 64) = 0LL;
    if ( !v20 && v24 )
      *(_DWORD *)v15 &= ~0x20000u;
    KxReleaseSpinLock((PKSPIN_LOCK)(v15 + 80));
  }
  KeReleaseQueuedSpinLock(5uLL, v14);
  ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
  v16 = KeAcquireQueuedSpinLock(5uLL);
  CcDecrementOpenCount((_DWORD *)v27);
  *(_DWORD *)(v27 + 152) &= ~0x4000u;
  KeReleaseQueuedSpinLock(5uLL, v16);
}
