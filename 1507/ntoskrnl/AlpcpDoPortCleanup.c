/*
 * XREFs of AlpcpDoPortCleanup @ 0x1404A34DC
 * Callers:
 *     AlpcpClosePort @ 0x1404A3434 (AlpcpClosePort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpFlushResourcesPort @ 0x1404A36CC (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x1404A3834 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 *     AlpcpFreeCompletionList @ 0x14052D2E8 (AlpcpFreeCompletionList.c)
 */

void __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rbx
  void *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbp
  _QWORD **v12; // r14
  unsigned __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbp
  _QWORD *v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rdx

  AlpcpDisconnectPort((PVOID)a1);
  v2 = (volatile signed __int64 *)(a1 + 352);
  v4 = KeAbPreAcquire(a1 + 352, 0LL, 0LL, v3);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v4, a1 + 352, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( *(_QWORD *)(a1 + 360) )
    AlpcpFreeCompletionList(a1);
  v7 = *(void **)(a1 + 24);
  if ( ((unsigned __int8)v7 & 1) == 0 && v7 )
  {
    ObfDereferenceObjectWithTag(v7, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpFlushMessagesPort(a1);
  AlpcpFlushResourcesPort(a1);
  v9 = KeAbPreAcquire(a1 + 352, 0LL, 0LL, v8);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v9, a1 + 352, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v12 = (_QWORD **)(a1 + 232);
    if ( *v12 != v12 )
    {
      v13 = (unsigned __int64 *)(a1 + 224);
      v14 = KeAbPreAcquire((ULONG_PTR)v13, 0LL, 0LL, v10);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
        ExfAcquirePushLockExclusiveEx(v13, v14, (ULONG_PTR)v13, v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      while ( *v12 != v12 )
      {
        v17 = *v12;
        *(v17 - 2) = 0LL;
        v18 = *v17;
        v19 = (_QWORD *)v17[1];
        if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v19 != v17 )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        KeReleaseSemaphoreEx((__int64)(v17 - 22), 1, 1, v15, 2);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      KeAbPostRelease((ULONG_PTR)v13);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
}
