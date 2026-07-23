/*
 * XREFs of CcGetDirtyPages @ 0x1400CD440
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetDirtyPages(
        PVOID LogHandle,
        PDIRTY_PAGE_ROUTINE DirtyPageRoutine,
        PVOID Context1,
        PVOID Context2)
{
  PVOID v4; // rdi
  __int64 v5; // r15
  KIRQL v6; // dl
  __int64 v7; // r14
  LARGE_INTEGER v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r12
  __int64 i; // rsi
  unsigned int v13; // r12d
  __int64 v14; // r8
  unsigned int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+48h] [rbp-80h]
  LARGE_INTEGER v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int64 v21; // [rsp+70h] [rbp-58h] BYREF
  __int64 v22; // [rsp+78h] [rbp-50h] BYREF
  __int64 v23; // [rsp+80h] [rbp-48h]

  v4 = LogHandle;
  v5 = 0LL;
  v18 = 0LL;
  v6 = KeAcquireQueuedSpinLock(5uLL);
  v7 = CcDirtySharedCacheMapWithLogHandleList - 120;
  v8.QuadPart = 0LL;
  while ( (__int64 *)(v7 + 120) != &CcDirtySharedCacheMapWithLogHandleList )
  {
    v16 = *(_DWORD *)(v7 + 152);
    if ( (v16 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x3C2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v16 & 0x2000000) != 0 && *(PVOID *)(v7 + 240) == v4 || (v16 & 0x1000000) != 0 && **(PVOID **)(v7 + 240) == v4 )
    {
      ++*(_DWORD *)(v7 + 4);
      ++*(_DWORD *)(v7 + 112);
      KeReleaseQueuedSpinLock(5uLL, v6);
      v11 = CcReferenceSharedCacheMapFileObject(v7, v9, v10);
      v23 = v11;
      ExAcquireFastMutex((PFAST_MUTEX)(v7 + 280));
      for ( i = *(_QWORD *)(v7 + 16) - 16LL; i + 16 != v7 + 16; i = *(_QWORD *)(i + 16) - 16LL )
      {
        if ( *(_WORD *)i == 765 && *(_BYTE *)(i + 2) )
        {
          v22 = *(_QWORD *)(i + 8);
          v13 = *(_DWORD *)(i + 4);
          v19 = *(LARGE_INTEGER *)(i + 40);
          v21 = *(_QWORD *)(i + 48);
          ++*(_DWORD *)(i + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 280));
          if ( v18 )
          {
            CcUnpinFileDataEx(v18, 1LL, 1LL);
            v18 = 0LL;
            v20 = 0LL;
          }
          v14 = v13;
          v11 = v23;
          ((void (__fastcall *)(__int64, __int64 *, __int64, LARGE_INTEGER *, __int64 *, PVOID, PVOID))DirtyPageRoutine)(
            v23,
            &v22,
            v14,
            &v19,
            &v21,
            Context1,
            Context2);
          if ( v19.QuadPart && (!v8.QuadPart || v19.QuadPart < v8.QuadPart) )
            v8 = v19;
          ExAcquireFastMutex((PFAST_MUTEX)(v7 + 280));
          v15 = *(_DWORD *)(i + 64);
          if ( v15 > 1 )
          {
            *(_DWORD *)(i + 64) = v15 - 1;
            v5 = v18;
          }
          else
          {
            v5 = i;
            v18 = i;
            v20 = i;
          }
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 280));
      CcDereferenceSharedCacheMapFileObject(v7, v11);
      if ( v5 )
      {
        CcUnpinFileDataEx(v5, 1LL, 1LL);
        v5 = 0LL;
        v18 = 0LL;
        v20 = 0LL;
      }
      v6 = KeAcquireQueuedSpinLock(5uLL);
      --*(_DWORD *)(v7 + 4);
      --*(_DWORD *)(v7 + 112);
      v4 = LogHandle;
    }
    v7 = *(_QWORD *)(v7 + 120) - 120LL;
  }
  KeReleaseQueuedSpinLock(5uLL, v6);
  return v8;
}
