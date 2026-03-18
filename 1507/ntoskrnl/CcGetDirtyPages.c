/*
 * XREFs of CcGetDirtyPages @ 0x1400F1FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetDirtyPages(
        PVOID LogHandle,
        PDIRTY_PAGE_ROUTINE DirtyPageRoutine,
        PVOID Context1,
        PVOID Context2)
{
  PVOID v4; // r12
  KIRQL v6; // dl
  __int64 v7; // rbx
  ULONG_PTR v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // rdi
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v15; // rdi
  volatile signed __int32 *v16; // rsi
  unsigned __int8 v17; // r14
  unsigned __int32 v18; // eax
  __int64 v19; // r9
  __int64 v20; // r14
  unsigned __int8 v21; // r12
  unsigned int v22; // eax
  ULONG_PTR v23; // rbx
  unsigned __int8 v24; // di
  unsigned __int32 v25; // eax
  signed __int64 *v26; // roff
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  int v29; // eax
  __int64 v31; // [rsp+48h] [rbp-80h]
  __int64 v32; // [rsp+50h] [rbp-78h]
  LARGE_INTEGER v33; // [rsp+58h] [rbp-70h]
  __int64 v34; // [rsp+60h] [rbp-68h]
  ULONG_PTR Object; // [rsp+68h] [rbp-60h]
  unsigned int v36; // [rsp+70h] [rbp-58h]
  LARGE_INTEGER v37; // [rsp+78h] [rbp-50h] BYREF
  __int64 v38; // [rsp+80h] [rbp-48h] BYREF
  __int64 v39[8]; // [rsp+88h] [rbp-40h] BYREF

  v4 = Context2;
  v32 = 0LL;
  v33.QuadPart = 0LL;
  v6 = KeAcquireQueuedSpinLock(5uLL);
  v7 = CcDirtySharedCacheMapWithLogHandleList - 120;
  v31 = CcDirtySharedCacheMapWithLogHandleList - 120;
  while ( (__int64 *)(v7 + 120) != &CcDirtySharedCacheMapWithLogHandleList )
  {
    v29 = *(_DWORD *)(v7 + 152);
    if ( (v29 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x3C2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v29 & 0x2000000) != 0 && *(PVOID *)(v7 + 240) == LogHandle
      || (v29 & 0x1000000) != 0 && **(PVOID **)(v7 + 240) == LogHandle )
    {
      ++*(_DWORD *)(v7 + 4);
      ++*(_DWORD *)(v7 + 112);
      KeReleaseQueuedSpinLock(5uLL, v6);
      v8 = ObFastReferenceObject((signed __int64 *)(v7 + 96));
      if ( !v8 )
        v8 = CcSlowReferenceSharedCacheMapFileObject(v7, v9, v10, v11);
      Object = v8;
      v12 = v7 + 280;
      v13 = KeAbPreAcquire(v7 + 280, 0LL, 0LL, v11);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v12, 0) )
        ExpAcquireFastMutexContended(v12);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v12 + 48) = CurrentIrql;
      v15 = *(_QWORD *)(v31 + 16) - 16LL;
      v34 = v15;
      while ( v15 + 16 != v31 + 16 )
      {
        if ( *(_WORD *)v15 == 765 && *(_BYTE *)(v15 + 2) )
        {
          v39[0] = *(_QWORD *)(v15 + 8);
          v36 = *(_DWORD *)(v15 + 4);
          v37 = *(LARGE_INTEGER *)(v15 + 40);
          v38 = *(_QWORD *)(v15 + 48);
          ++*(_DWORD *)(v15 + 64);
          v16 = (volatile signed __int32 *)(v31 + 280);
          *(_QWORD *)(v31 + 288) = 0LL;
          v17 = *(_BYTE *)(v31 + 328);
          v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v31 + 280), 1, 0);
          if ( v18 )
            ExpReleaseFastMutexContended(v16, v18);
          __writecr8(v17);
          KeAbPostRelease((ULONG_PTR)v16);
          if ( v32 )
          {
            CcUnpinFileDataEx(v32, 1LL, 1LL);
            v32 = 0LL;
          }
          ((void (__fastcall *)(ULONG_PTR, __int64 *, _QWORD, LARGE_INTEGER *, __int64 *, PVOID, PVOID))DirtyPageRoutine)(
            Object,
            v39,
            v36,
            &v37,
            &v38,
            Context1,
            v4);
          if ( v37.QuadPart && (!v33.QuadPart || v37.QuadPart < v33.QuadPart) )
            v33 = v37;
          v20 = KeAbPreAcquire((ULONG_PTR)v16, 0LL, 0LL, v19);
          v21 = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset(v16, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)v16);
          if ( v20 )
            *(_BYTE *)(v20 + 26) |= 1u;
          *(_QWORD *)(v31 + 288) = KeGetCurrentThread();
          *(_DWORD *)(v31 + 328) = v21;
          v22 = *(_DWORD *)(v15 + 64);
          if ( v22 > 1 )
            *(_DWORD *)(v15 + 64) = v22 - 1;
          else
            v32 = v34;
          v4 = Context2;
        }
        v15 = *(_QWORD *)(v15 + 16) - 16LL;
        v34 = v15;
      }
      v23 = v31 + 280;
      *(_QWORD *)(v31 + 288) = 0LL;
      v24 = *(_BYTE *)(v31 + 328);
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v31 + 280), 1, 0);
      if ( v25 )
        ExpReleaseFastMutexContended(v23, v25);
      __writecr8(v24);
      KeAbPostRelease(v23);
      v26 = (signed __int64 *)(v31 + 96);
      _m_prefetchw((const void *)(v31 + 96));
      v27 = *v26;
      while ( (Object ^ v27) < 0xF )
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 96), v27 + 1, v27);
        if ( v28 == v27 )
          goto LABEL_32;
      }
      ObDereferenceObjectDeferDeleteWithTag((PVOID)Object, 0x746C6644u);
LABEL_32:
      if ( v32 )
      {
        CcUnpinFileDataEx(v32, 1LL, 1LL);
        v32 = 0LL;
      }
      v6 = KeAcquireQueuedSpinLock(5uLL);
      v7 = v31;
      --*(_DWORD *)(v31 + 4);
      --*(_DWORD *)(v31 + 112);
    }
    v7 = *(_QWORD *)(v7 + 120) - 120LL;
    v31 = v7;
  }
  KeReleaseQueuedSpinLock(5uLL, v6);
  return v33;
}
