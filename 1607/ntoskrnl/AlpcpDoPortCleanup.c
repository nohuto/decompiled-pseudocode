/*
 * XREFs of AlpcpDoPortCleanup @ 0x140409A64
 * Callers:
 *     AlpcpClosePort @ 0x140409D28 (AlpcpClosePort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     AlpcpDisconnectPort @ 0x140408EAC (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x1404094A8 (AlpcpFlushMessagesPort.c)
 *     AlpcpFlushResourcesPort @ 0x140409934 (AlpcpFlushResourcesPort.c)
 *     AlpcpFreeCompletionList @ 0x1404D2128 (AlpcpFreeCompletionList.c)
 */

unsigned __int64 __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  _BYTE *v3; // rax
  _BYTE *v4; // rbx
  void *v5; // rcx
  _BYTE *v6; // rax
  _BYTE *v7; // rbp
  _QWORD **v8; // r14
  unsigned __int64 *v10; // rsi
  _BYTE *v11; // rax
  __int64 v12; // r9
  _BYTE *v13; // rbp
  _QWORD *v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rdx

  AlpcpDisconnectPort((char *)a1, 0);
  v2 = (volatile signed __int64 *)(a1 + 352);
  v3 = (_BYTE *)KeAbPreAcquire(a1 + 352, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v3, a1 + 352);
  if ( v4 )
    v4[26] |= 1u;
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
  v6 = (_BYTE *)KeAbPreAcquire(a1 + 352, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v6, a1 + 352);
  if ( v7 )
    v7[26] |= 1u;
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v8 = (_QWORD **)(a1 + 232);
    if ( *v8 != v8 )
    {
      v10 = (unsigned __int64 *)(a1 + 224);
      v11 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
      v13 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10);
      if ( v13 )
        v13[26] |= 1u;
      while ( *v8 != v8 )
      {
        v14 = *v8;
        *(v14 - 1) = 0LL;
        v15 = *v14;
        v16 = (_QWORD *)v14[1];
        if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v16 != v14 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        *v14 = 0LL;
        KeReleaseSemaphoreEx((__int64)(v14 - 20), 1u, 1, v12, 2);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      KeAbPostRelease((ULONG_PTR)v10);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
