/*
 * XREFs of ExDeferredFreePool @ 0x140238000
 * Callers:
 *     ExpAllocateBigPool @ 0x140041130 (ExpAllocateBigPool.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiDereferenceSessionFinal @ 0x1404F36F0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AF9C0 (KxAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall ExDeferredFreePool(__int64 a1, int a2)
{
  signed __int64 v3; // rbp
  int v4; // esi
  int v5; // r12d
  struct _FAST_MUTEX *v6; // r13
  _QWORD *v7; // r14
  int v8; // r15d
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  ULONG_PTR v11; // r8
  char v12; // bl
  int v13; // r11d
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // r8
  __int64 *v18; // rcx
  __int64 v19; // rax
  _BYTE *v20; // rcx
  __int64 v21; // r10
  _QWORD *v22; // r9
  char v23; // al
  __int64 v24; // r10
  _QWORD *v25; // r9
  _QWORD *v26; // rtt
  unsigned __int8 CurrentIrql; // al
  _QWORD *v28; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  signed __int64 v30; // [rsp+80h] [rbp+8h]

  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 76)) == 1 || a2 )
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
    v6 = (struct _FAST_MUTEX *)(a1 + 8);
    v7 = 0LL;
    v8 = *(_DWORD *)a1 & 1;
    if ( v8 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(a1 + 8));
      PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
    }
    else
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 8);
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = CurrentIrql;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 8));
    }
    v9 = *(_QWORD **)(a1 + 256);
    if ( v9 )
    {
      do
      {
        v30 = (signed __int64)v9;
        while ( 1 )
        {
          v10 = (_QWORD *)*v9;
          v11 = (ULONG_PTR)(v9 - 2);
          ++v4;
          if ( *(v9 - 1) != ((unsigned __int64)(v9 - 2) ^ ExpPoolQuotaCookie) )
            KeBugCheckEx(0x19u, 0xDuLL, v11, *(_QWORD *)(v11 + 8), v11 ^ ExpPoolQuotaCookie);
          v12 = *(_BYTE *)(v11 + 1);
          v13 = 0;
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 68));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -16LL * (unsigned __int8)*(_WORD *)(v11 + 2));
          v14 = v11 + 16LL * (unsigned __int8)*(_WORD *)(v11 + 2);
          if ( (v14 & 0xFFF) != 0 && !*(_BYTE *)(v14 + 3) )
          {
            v13 = 1;
            if ( *(_BYTE *)(v14 + 2) != 1 )
            {
              v24 = *(_QWORD *)(v14 + 16);
              v25 = *(_QWORD **)(v14 + 24);
              if ( *(_QWORD *)(v24 + 8) != v14 + 16 || *v25 != v14 + 16 )
                __fastfail(3u);
              *v25 = v24;
              *(_QWORD *)(v24 + 8) = v25;
            }
            *(_BYTE *)(v11 + 2) += *(_BYTE *)(v14 + 2);
          }
          if ( (unsigned __int8)*(_WORD *)v11 )
          {
            v15 = v11 - 16LL * (unsigned __int8)*(_WORD *)v11;
            if ( !*(_BYTE *)(v15 + 3) )
            {
              v13 = 1;
              if ( *(_BYTE *)(v15 + 2) != 1 )
              {
                v21 = *(_QWORD *)(v15 + 16);
                v22 = *(_QWORD **)(v15 + 24);
                if ( *(_QWORD *)(v21 + 8) != v15 + 16 || *v22 != v15 + 16 )
                  __fastfail(3u);
                *v22 = v21;
                *(_QWORD *)(v21 + 8) = v22;
              }
              v23 = *(_BYTE *)(v11 + 2);
              v11 = v15;
              *(_BYTE *)(v15 + 2) += v23;
            }
          }
          if ( (v11 & 0xFFF) != 0 || (((_WORD)v11 + 16 * (unsigned __int8)*(_WORD *)(v11 + 2)) & 0xFFF) != 0 )
          {
            *(_BYTE *)(v11 + 3) = 0;
            v16 = (unsigned __int8)*(_WORD *)(v11 + 2);
            *(_BYTE *)(v11 + 1) = v12;
            if ( v13 )
            {
              v20 = (_BYTE *)(v11 + 16 * v16);
              if ( ((unsigned __int16)v20 & 0xFFF) != 0 )
                *v20 = v16;
            }
            v17 = (__int64 *)(v11 + 16);
            v18 = (__int64 *)(a1 + 16 * ((unsigned int)(v16 - 1) + 20LL));
            v19 = *v18;
            *v17 = *v18;
            v17[1] = (__int64)v18;
            if ( *(__int64 **)(v19 + 8) != v18 )
              __fastfail(3u);
            *(_QWORD *)(v19 + 8) = v17;
            *v18 = (__int64)v17;
          }
          else
          {
            *(_QWORD *)v11 = v7;
            ++v5;
            v7 = (_QWORD *)v11;
          }
          if ( v10 == (_QWORD *)v3 )
            break;
          v9 = v10;
        }
        v3 = v30;
        v26 = (_QWORD *)v30;
        v9 = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 256), 0LL, v30);
      }
      while ( v26 != v9 );
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
      if ( v8 )
      {
        PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
        KeReleaseGuardedMutex(v6);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      if ( v7 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -v5);
        do
        {
          v28 = (_QWORD *)*v7;
          MiFreePoolPages((ULONG_PTR)v7, 0x1000uLL);
          v7 = v28;
        }
        while ( v28 );
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 264), -v4);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
      if ( v8 )
      {
        PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
        KeReleaseGuardedMutex(v6);
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
