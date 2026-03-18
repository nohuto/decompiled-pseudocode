/*
 * XREFs of AlpcpDoPortCleanup @ 0x14047EB1C
 * Callers:
 *     AlpcpClosePort @ 0x14047E9E0 (AlpcpClosePort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     AlpcpFlushResourcesPort @ 0x14047ED3C (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x14047EE8C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14047F358 (AlpcpDisconnectPort.c)
 *     AlpcpFreeCompletionList @ 0x1404C584C (AlpcpFreeCompletionList.c)
 */

void __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbp
  _QWORD **v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  _QWORD *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx

  AlpcpDisconnectPort((PVOID)a1);
  v2 = (volatile signed __int64 *)(a1 + 352);
  v3 = KeAbPreAcquire(a1 + 352, 0LL, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v3, a1 + 352);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  if ( *(_QWORD *)(a1 + 360) )
    AlpcpFreeCompletionList(a1);
  v5 = *(void **)(a1 + 24);
  if ( ((unsigned __int8)v5 & 1) == 0 && v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpFlushMessagesPort(a1);
  AlpcpFlushResourcesPort(a1);
  v6 = KeAbPreAcquire(a1 + 352, 0LL, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v6, a1 + 352);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v8 = (_QWORD **)(a1 + 232);
    if ( *v8 != v8 )
    {
      v9 = (unsigned __int64 *)(a1 + 224);
      v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL);
      v12 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      while ( *v8 != v8 )
      {
        v13 = *v8;
        *(v13 - 2) = 0LL;
        v14 = *v13;
        v15 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *v13 = 0LL;
        KeReleaseSemaphoreEx((__int64)(v13 - 22), 1, 1LL, v11, 2);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
}
