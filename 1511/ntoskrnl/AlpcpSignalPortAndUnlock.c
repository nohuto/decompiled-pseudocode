/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x1404832E0
 * Callers:
 *     AlpcpDisconnectPort @ 0x14047F358 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400BC0D4 (AlpcpQueueIoCompletionPort.c)
 */

void __fastcall AlpcpSignalPortAndUnlock(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // r9
  _QWORD *v4; // rdi
  unsigned __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r9

  if ( *(_QWORD *)(a1 + 32) )
  {
    AlpcpQueueIoCompletionPort((__int64 *)a1, 0, 1, 0);
  }
  else if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v2 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v2);
    KeReleaseSemaphoreEx(*(_QWORD *)(a1 + 248), 1, 1LL, v3, 0);
  }
  else
  {
    v4 = (_QWORD *)(a1 + 232);
    if ( (_QWORD *)*v4 == v4 )
      goto LABEL_24;
    v5 = (unsigned __int64 *)(a1 + 224);
    v6 = KeAbPreAcquire(a1 + 224, 0LL, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    if ( (_QWORD *)*v4 == v4 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = (_QWORD *)(*v4 - 1768LL);
      v9 = v8 + 221;
      v8[219] = 0LL;
      v10 = v8[221];
      v11 = (_QWORD *)v8[222];
      if ( *(_QWORD **)(v10 + 8) != v8 + 221 || (_QWORD *)*v11 != v9 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v9 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((ULONG_PTR)v5);
    if ( !v8 )
    {
LABEL_24:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      KeReleaseSemaphoreEx((__int64)(v8 + 199), 1, 1LL, v12, 2);
    }
  }
}
