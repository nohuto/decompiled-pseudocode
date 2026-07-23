/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x1404B4724
 * Callers:
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x140408EAC (AlpcpDisconnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400A39E8 (AlpcpQueueIoCompletionPort.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 */

void __fastcall AlpcpSignalPortAndUnlock(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // r9
  _QWORD *v4; // rdi
  unsigned __int64 *v5; // rsi
  _BYTE *v6; // rax
  _BYTE *v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r9

  if ( *(_QWORD *)(a1 + 32) )
  {
    AlpcpQueueIoCompletionPort(a1, 0, 1, 0);
  }
  else if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v2 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v2);
    KeReleaseSemaphoreEx(*(_QWORD *)(a1 + 248), 1u, 1, v3, 0);
  }
  else
  {
    v4 = (_QWORD *)(a1 + 232);
    if ( (_QWORD *)*v4 == v4 )
      goto LABEL_24;
    v5 = (unsigned __int64 *)(a1 + 224);
    v6 = (_BYTE *)KeAbPreAcquire(a1 + 224, 0LL, 0);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
    if ( v7 )
      v7[26] |= 1u;
    if ( (_QWORD *)*v4 == v4 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = (_QWORD *)(*v4 - 1760LL);
      v9 = v8 + 220;
      v8[219] = 0LL;
      v10 = v8[220];
      v11 = (_QWORD *)v8[221];
      if ( *(_QWORD **)(v10 + 8) != v8 + 220 || (_QWORD *)*v11 != v9 )
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
      KeReleaseSemaphoreEx((__int64)(v8 + 200), 1u, 1, v12, 2);
    }
  }
}
