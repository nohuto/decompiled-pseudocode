/*
 * XREFs of ExDeferredFreePool @ 0x14028A240
 * Callers:
 *     ExpAllocateBigPool @ 0x140046030 (ExpAllocateBigPool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall ExDeferredFreePool(__int64 a1, int a2)
{
  int v3; // ebp
  _SLIST_ENTRY *v4; // r12
  signed __int64 v5; // r14
  ULONG_PTR v6; // r15
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v11; // rax
  signed __int64 v12; // rsi
  _QWORD *v13; // rdx
  ULONG_PTR v14; // r8
  char v15; // bl
  int v16; // r11d
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 *v21; // rcx
  __int64 v22; // rax
  _BYTE *v23; // rcx
  __int64 v24; // r10
  _QWORD *v25; // r9
  char v26; // al
  __int64 v27; // r10
  _QWORD *v28; // r9
  unsigned __int8 v29; // bl
  signed __int32 v30; // eax
  unsigned __int8 v31; // al
  _QWORD *v32; // rdx
  _SLIST_ENTRY *Next; // rbx
  unsigned __int8 v34; // bl
  signed __int32 v35; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+80h] [rbp+8h]

  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 76)) == 1 || a2 )
  {
    v3 = 0;
    v4 = 0LL;
    v5 = 0LL;
    v6 = a1 + 8;
    v37 = 0;
    v7 = *(_DWORD *)a1 & 1;
    if ( v7 )
    {
      v8 = KeAbPreAcquire(a1 + 8, 0LL, 0LL, 0LL);
      v9 = v8;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v6, 0) )
        ExpAcquireFastMutexContended(v6, v8);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v6 + 48) = CurrentIrql;
      PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
    }
    else
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 8);
      LockHandle.LockQueue.Next = 0LL;
      v31 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v31;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v6);
      }
      else
      {
        v32 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v6, (__int64)&LockHandle);
        if ( v32 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v32);
      }
    }
    v11 = *(_QWORD **)(a1 + 256);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = (signed __int64)v11;
        while ( 1 )
        {
          v13 = (_QWORD *)*v11;
          v14 = (ULONG_PTR)(v11 - 2);
          ++v3;
          if ( *(v11 - 1) != ((unsigned __int64)(v11 - 2) ^ ExpPoolQuotaCookie) )
            KeBugCheckEx(0x19u, 0xDuLL, v14, *(_QWORD *)(v14 + 8), v14 ^ ExpPoolQuotaCookie);
          v15 = *(_BYTE *)(v14 + 1);
          v16 = 0;
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 68));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -16LL * (unsigned __int8)*(_WORD *)(v14 + 2));
          v17 = v14 + 16LL * (unsigned __int8)*(_WORD *)(v14 + 2);
          if ( (v17 & 0xFFF) != 0 && !*(_BYTE *)(v17 + 3) )
          {
            v16 = 1;
            if ( *(_BYTE *)(v17 + 2) != 1 )
            {
              v27 = *(_QWORD *)(v17 + 16);
              v28 = *(_QWORD **)(v17 + 24);
              if ( *(_QWORD *)(v27 + 8) != v17 + 16 || *v28 != v17 + 16 )
                __fastfail(3u);
              *v28 = v27;
              *(_QWORD *)(v27 + 8) = v28;
            }
            *(_BYTE *)(v14 + 2) += *(_BYTE *)(v17 + 2);
          }
          if ( (unsigned __int8)*(_WORD *)v14 )
          {
            v18 = v14 - 16LL * (unsigned __int8)*(_WORD *)v14;
            if ( !*(_BYTE *)(v18 + 3) )
            {
              v16 = 1;
              if ( *(_BYTE *)(v18 + 2) != 1 )
              {
                v24 = *(_QWORD *)(v18 + 16);
                v25 = *(_QWORD **)(v18 + 24);
                if ( *(_QWORD *)(v24 + 8) != v18 + 16 || *v25 != v18 + 16 )
                  __fastfail(3u);
                *v25 = v24;
                *(_QWORD *)(v24 + 8) = v25;
              }
              v26 = *(_BYTE *)(v14 + 2);
              v14 = v18;
              *(_BYTE *)(v18 + 2) += v26;
            }
          }
          if ( (v14 & 0xFFF) != 0 || (((_WORD)v14 + 16 * (unsigned __int8)*(_WORD *)(v14 + 2)) & 0xFFF) != 0 )
          {
            *(_BYTE *)(v14 + 3) = 0;
            v19 = (unsigned __int8)*(_WORD *)(v14 + 2);
            *(_BYTE *)(v14 + 1) = v15;
            if ( v16 )
            {
              v23 = (_BYTE *)(v14 + 16 * v19);
              if ( ((unsigned __int16)v23 & 0xFFF) != 0 )
                *v23 = v19;
            }
            v20 = (__int64 *)(v14 + 16);
            v21 = (__int64 *)(a1 + 16 * ((unsigned int)(v19 - 1) + 20LL));
            v22 = *v21;
            *v20 = *v21;
            v20[1] = (__int64)v21;
            if ( *(__int64 **)(v22 + 8) != v21 )
              __fastfail(3u);
            *(_QWORD *)(v22 + 8) = v20;
            *v21 = (__int64)v20;
          }
          else
          {
            ++v37;
            *(_QWORD *)v14 = v4;
            v4 = (_SLIST_ENTRY *)v14;
          }
          if ( v13 == (_QWORD *)v5 )
            break;
          v11 = v13;
        }
        v11 = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 256), 0LL, v12);
        if ( (_QWORD *)v12 == v11 )
          break;
        v5 = v12;
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
      if ( v7 )
      {
        PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
        v29 = *(_BYTE *)(v6 + 48);
        *(_QWORD *)(v6 + 8) = 0LL;
        v30 = _InterlockedCompareExchange((volatile signed __int32 *)v6, 1, 0);
        if ( v30 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v6, v30);
        __writecr8(v29);
        KeAbPostRelease(v6);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      if ( v4 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -v37);
        do
        {
          Next = v4->Next;
          MiFreePoolPages(v4, 0x1000uLL, 0);
          v4 = Next;
        }
        while ( Next );
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 264), -v3);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
      if ( v7 )
      {
        PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
        v34 = *(_BYTE *)(v6 + 48);
        *(_QWORD *)(v6 + 8) = 0LL;
        v35 = _InterlockedCompareExchange((volatile signed __int32 *)v6, 1, 0);
        if ( v35 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v6, v35);
        __writecr8(v34);
        KeAbPostRelease(v6);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
  }
}
