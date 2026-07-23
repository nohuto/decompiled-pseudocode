/*
 * XREFs of ExDeferredFreePool @ 0x1402557B0
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiDereferenceSessionFinal @ 0x140532010 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall ExDeferredFreePool(int *a1, int a2)
{
  signed __int64 v3; // rbp
  int v4; // esi
  unsigned int v5; // r13d
  unsigned __int64 *v6; // r14
  int v7; // r12d
  struct _FAST_MUTEX *v8; // r15
  struct _FAST_MUTEX *v9; // rcx
  int v10; // r12d
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  ULONG_PTR v13; // r8
  char v14; // bl
  int v15; // r10d
  ULONG_PTR v16; // rcx
  ULONG_PTR v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // r8
  int *v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // rcx
  __int64 v23; // r11
  _QWORD *v24; // r9
  char v25; // al
  __int64 v26; // r11
  _QWORD *v27; // r9
  _QWORD *v28; // rtt
  unsigned __int64 v29; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  signed __int64 v31; // [rsp+80h] [rbp+8h]

  if ( _InterlockedIncrement(a1 + 66) == 1 || a2 )
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    _m_prefetchw(a1);
    v7 = *a1;
    v8 = (struct _FAST_MUTEX *)(a1 + 2);
    v9 = (struct _FAST_MUTEX *)(a1 + 2);
    v10 = v7 & 1;
    if ( v10 )
    {
      ExAcquireFastMutex(v9);
      PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9, &LockHandle);
    }
    v11 = (_QWORD *)*((_QWORD *)a1 + 32);
    if ( v11 )
    {
      do
      {
        v31 = (signed __int64)v11;
        while ( 1 )
        {
          v12 = (_QWORD *)*v11;
          v13 = (ULONG_PTR)(v11 - 2);
          ++v4;
          if ( *(v11 - 1) != ((unsigned __int64)(v11 - 2) ^ ExpPoolQuotaCookie) )
            KeBugCheckEx(0x19u, 0xDuLL, v13, *(_QWORD *)(v13 + 8), v13 ^ ExpPoolQuotaCookie);
          v14 = *(_BYTE *)(v13 + 1);
          v15 = 0;
          _InterlockedIncrement(a1 + 32);
          _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 19, 16LL * (unsigned __int8)*(_WORD *)(v13 + 2));
          v16 = v13 + 16LL * (unsigned __int8)*(_WORD *)(v13 + 2);
          if ( (v16 & 0xFFF) != 0 && !*(_BYTE *)(v16 + 3) )
          {
            v15 = 1;
            if ( *(_BYTE *)(v16 + 2) != 1 )
            {
              v26 = *(_QWORD *)(v16 + 16);
              v27 = *(_QWORD **)(v16 + 24);
              if ( *(_QWORD *)(v26 + 8) != v16 + 16 || *v27 != v16 + 16 )
                __fastfail(3u);
              *v27 = v26;
              *(_QWORD *)(v26 + 8) = v27;
            }
            *(_BYTE *)(v13 + 2) += *(_BYTE *)(v16 + 2);
          }
          if ( (unsigned __int8)*(_WORD *)v13 )
          {
            v17 = v13 - 16LL * (unsigned __int8)*(_WORD *)v13;
            if ( !*(_BYTE *)(v17 + 3) )
            {
              v15 = 1;
              if ( *(_BYTE *)(v17 + 2) != 1 )
              {
                v23 = *(_QWORD *)(v17 + 16);
                v24 = *(_QWORD **)(v17 + 24);
                if ( *(_QWORD *)(v23 + 8) != v17 + 16 || *v24 != v17 + 16 )
                  __fastfail(3u);
                *v24 = v23;
                *(_QWORD *)(v23 + 8) = v24;
              }
              v25 = *(_BYTE *)(v13 + 2);
              v13 = v17;
              *(_BYTE *)(v17 + 2) += v25;
            }
          }
          if ( (v13 & 0xFFF) != 0 || (((_WORD)v13 + 16 * (unsigned __int8)*(_WORD *)(v13 + 2)) & 0xFFF) != 0 )
          {
            *(_BYTE *)(v13 + 3) = 0;
            v18 = (unsigned __int8)*(_WORD *)(v13 + 2);
            *(_BYTE *)(v13 + 1) = v14;
            if ( v15 )
            {
              v22 = (_BYTE *)(v13 + 16 * v18);
              if ( ((unsigned __int16)v22 & 0xFFF) != 0 )
                *v22 = v18;
            }
            v19 = (_QWORD *)(v13 + 16);
            v20 = &a1[4 * (unsigned int)(v18 - 1) + 80];
            v21 = *(_QWORD *)v20;
            if ( *(int **)(*(_QWORD *)v20 + 8LL) != v20 )
              __fastfail(3u);
            *v19 = v21;
            v19[1] = v20;
            *(_QWORD *)(v21 + 8) = v19;
            *(_QWORD *)v20 = v19;
          }
          else
          {
            *(_QWORD *)v13 = v6;
            ++v5;
            v6 = (unsigned __int64 *)v13;
          }
          if ( v12 == (_QWORD *)v3 )
            break;
          v11 = v12;
        }
        v3 = v31;
        v28 = (_QWORD *)v31;
        v11 = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a1 + 32, 0LL, v31);
      }
      while ( v28 != v11 );
      _InterlockedDecrement(a1 + 66);
      if ( v10 )
      {
        PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
        KeReleaseGuardedMutex(v8);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      if ( v6 )
      {
        do
        {
          v29 = *v6;
          MiFreePoolPages(v6, 0x1000uLL);
          v6 = (unsigned __int64 *)v29;
        }
        while ( v29 );
        _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 17, v5);
      }
      _InterlockedExchangeAdd(a1 + 67, -v4);
    }
    else
    {
      _InterlockedDecrement(a1 + 66);
      if ( v10 )
      {
        PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
        KeReleaseGuardedMutex(v8);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
  }
  else
  {
    _InterlockedDecrement(a1 + 66);
  }
}
