/*
 * XREFs of CcPerformReadAhead @ 0x140071EB4
 * Callers:
 *     CcWorkerThread @ 0x140071500 (CcWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140022050 (MmWaitForCacheManagerPrefetch.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsSetPagePriorityThread @ 0x1400707C0 (PsSetPagePriorityThread.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MmPrefetchForCacheManager @ 0x14042B4AC (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x140446260 (CcMapAndCopyFromCache.c)
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
  __int64 v16; // rcx
  KIRQL v17; // di
  KIRQL v18; // [rsp+40h] [rbp-158h]
  unsigned int v19; // [rsp+44h] [rbp-154h]
  int v20; // [rsp+48h] [rbp-150h]
  int v21; // [rsp+4Ch] [rbp-14Ch]
  unsigned int v22; // [rsp+54h] [rbp-144h]
  int v23; // [rsp+58h] [rbp-140h]
  int v24; // [rsp+5Ch] [rbp-13Ch]
  int v25; // [rsp+60h] [rbp-138h]
  int v27; // [rsp+70h] [rbp-128h]
  unsigned int v28; // [rsp+74h] [rbp-124h]
  __int64 v29; // [rsp+78h] [rbp-120h]
  BOOL v30; // [rsp+88h] [rbp-110h]
  __int64 v31; // [rsp+A8h] [rbp-F0h]
  __int64 v32; // [rsp+B0h] [rbp-E8h]
  signed __int64 v33; // [rsp+B8h] [rbp-E0h]
  _QWORD v34[2]; // [rsp+100h] [rbp-98h] BYREF
  unsigned int v35; // [rsp+110h] [rbp-88h]
  int v36; // [rsp+114h] [rbp-84h]
  __int64 v37; // [rsp+118h] [rbp-80h]
  _QWORD v38[2]; // [rsp+120h] [rbp-78h] BYREF
  unsigned int v39; // [rsp+130h] [rbp-68h]
  int v40; // [rsp+134h] [rbp-64h]
  __int64 v41; // [rsp+138h] [rbp-60h]
  _QWORD v42[2]; // [rsp+140h] [rbp-58h] BYREF
  _QWORD v43[2]; // [rsp+150h] [rbp-48h] BYREF

  v2 = a2;
  v24 = 0;
  v25 = 0;
  v21 = 0;
  v27 = 0;
  v28 = 0;
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  v29 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL);
  v32 = *(_QWORD *)(v29 + 208);
  v31 = *(_QWORD *)(v29 + 216);
  LOBYTE(a2) = 1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(v32 + 16))(v31, a2);
  v23 = v3;
  if ( v3 )
  {
    v4 = v33;
    v5 = v19;
    while ( 1 )
    {
      v6 = KeAcquireQueuedSpinLock(5uLL);
      v18 = v6;
      v7 = *(_QWORD *)(v2 + 48);
      if ( v7 )
      {
        KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 80));
        v5 = *(_DWORD *)(v7 + 52);
        v8 = v5 == 0;
        v30 = v8;
        v4 = *(_QWORD *)(v7 + 56);
        if ( v5 > 0x800000 )
          v5 = 0x800000;
        *(_DWORD *)(v7 + 52) = 0;
        if ( !v8 )
          *(_QWORD *)(v7 + 64) = v4 + v5;
        if ( (*(_DWORD *)v7 & 0x200000) != 0 )
        {
          v27 = 1;
          v28 = *(_DWORD *)(v7 + 88);
        }
        KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 80));
        v20 = (*(_DWORD *)v7 >> 18) & 7;
        v6 = v18;
      }
      KeReleaseQueuedSpinLock(5uLL, v6);
      if ( !v7 || v30 )
        break;
      v10 = *(_QWORD *)(v29 + 8);
      if ( v4 < v10 )
      {
        v25 = 1;
        if ( v4 + v5 >= v10 )
        {
          v5 = v10 - v4;
          v24 = 1;
        }
        v11 = (v5 + 4095) & 0xFFFFF000;
        v5 = v11;
        v12 = v11;
        v22 = v11;
        if ( v27 )
        {
          if ( !v28 )
            KeBugCheckEx(0x34u, 0xA05uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          v13 = v11;
          if ( v11 > v28 )
            v13 = v28;
        }
        else
        {
          v13 = v11;
        }
        if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
        {
          v34[1] = v4;
          v35 = v11;
          v34[0] = a1;
          v36 = v20;
          v37 = 0LL;
          v42[0] = v34;
          v42[1] = 32LL;
          EtwTraceKernelEvent((int)v42, 1, 0x80020000, 5635, 4200706);
          v12 = v22;
        }
        while ( v12 )
        {
          if ( v13 > v12 )
            v13 = v12;
          if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
          {
            v41 = 0LL;
            v38[1] = v4;
            v39 = v13;
            v38[0] = a1;
            v40 = v20;
            v43[0] = v38;
            v43[1] = 32LL;
            EtwTraceKernelEvent((int)v43, 1, 0x80020000, 5643, 4200706);
          }
          v21 |= MmPrefetchForCacheManager(v2, v4, v9, v13, v20);
          v12 = v22 - v13;
          v22 -= v13;
          v4 += v13;
        }
      }
    }
  }
  __addgsdword(0x5E64u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( v23 )
    (*(void (__fastcall **)(__int64))(v32 + 24))(v31);
  v14 = KeAcquireQueuedSpinLock(5uLL);
  v15 = *(_QWORD *)(v2 + 48);
  if ( v15 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v15 + 80));
    *(_DWORD *)v15 &= ~0x10000u;
    if ( v24 && (*(_DWORD *)(v2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v15 + 64) = 0LL;
    if ( !v21 && v25 )
      *(_DWORD *)v15 &= ~0x20000u;
    KxReleaseSpinLock((PKSPIN_LOCK)(v15 + 80));
  }
  KeReleaseQueuedSpinLock(5uLL, v14);
  ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
  v16 = *(_QWORD *)(a1 + 24);
  if ( v16 )
    IoDiskIoAttributionDereference(v16);
  v17 = KeAcquireQueuedSpinLock(5uLL);
  CcDecrementOpenCount(v29);
  *(_DWORD *)(v29 + 152) &= ~0x4000u;
  KeReleaseQueuedSpinLock(5uLL, v17);
}
