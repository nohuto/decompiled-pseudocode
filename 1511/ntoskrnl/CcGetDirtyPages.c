/*
 * XREFs of CcGetDirtyPages @ 0x14003B4D0
 * Callers:
 *     <none>
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14000D4E4 (CcReferenceSharedCacheMapFileObject.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
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
  unsigned __int64 v9; // r12
  __int64 i; // rsi
  unsigned int v11; // r12d
  __int64 v12; // r8
  unsigned int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+48h] [rbp-80h]
  LARGE_INTEGER v17; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+68h] [rbp-60h]
  __int64 v19; // [rsp+70h] [rbp-58h] BYREF
  __int64 v20; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-48h]

  v4 = LogHandle;
  v5 = 0LL;
  v16 = 0LL;
  v6 = KeAcquireQueuedSpinLock(5uLL);
  v7 = CcDirtySharedCacheMapWithLogHandleList - 120;
  v8.QuadPart = 0LL;
  while ( (__int64 *)(v7 + 120) != &CcDirtySharedCacheMapWithLogHandleList )
  {
    v14 = *(_DWORD *)(v7 + 152);
    if ( (v14 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x3C2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v14 & 0x2000000) != 0 && *(PVOID *)(v7 + 240) == v4 || (v14 & 0x1000000) != 0 && **(PVOID **)(v7 + 240) == v4 )
    {
      ++*(_DWORD *)(v7 + 4);
      ++*(_DWORD *)(v7 + 112);
      KeReleaseQueuedSpinLock(5uLL, v6);
      v9 = CcReferenceSharedCacheMapFileObject(v7);
      v21 = v9;
      ExAcquireFastMutex((PFAST_MUTEX)(v7 + 280));
      for ( i = *(_QWORD *)(v7 + 16) - 16LL; i + 16 != v7 + 16; i = *(_QWORD *)(i + 16) - 16LL )
      {
        if ( *(_WORD *)i == 765 && *(_BYTE *)(i + 2) )
        {
          v20 = *(_QWORD *)(i + 8);
          v11 = *(_DWORD *)(i + 4);
          v17 = *(LARGE_INTEGER *)(i + 40);
          v19 = *(_QWORD *)(i + 48);
          ++*(_DWORD *)(i + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 280));
          if ( v16 )
          {
            CcUnpinFileDataEx(v16, 1, 1);
            v16 = 0LL;
            v18 = 0LL;
          }
          v12 = v11;
          v9 = v21;
          ((void (__fastcall *)(unsigned __int64, __int64 *, __int64, LARGE_INTEGER *, __int64 *, PVOID, PVOID))DirtyPageRoutine)(
            v21,
            &v20,
            v12,
            &v17,
            &v19,
            Context1,
            Context2);
          if ( v17.QuadPart && (!v8.QuadPart || v17.QuadPart < v8.QuadPart) )
            v8 = v17;
          ExAcquireFastMutex((PFAST_MUTEX)(v7 + 280));
          v13 = *(_DWORD *)(i + 64);
          if ( v13 > 1 )
          {
            *(_DWORD *)(i + 64) = v13 - 1;
            v5 = v16;
          }
          else
          {
            v5 = i;
            v16 = i;
            v18 = i;
          }
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 280));
      CcDereferenceSharedCacheMapFileObject(v7, v9);
      if ( v5 )
      {
        CcUnpinFileDataEx(v5, 1, 1);
        v5 = 0LL;
        v16 = 0LL;
        v18 = 0LL;
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
