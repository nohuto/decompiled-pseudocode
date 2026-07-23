/*
 * XREFs of AlpcpFlushQueue @ 0x140409680
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1404094A8 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 */

unsigned __int64 __fastcall AlpcpFlushQueue(volatile signed __int64 *a1, ULONG_PTR *a2, unsigned int a3)
{
  unsigned __int64 *v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  ULONG_PTR v9; // rsi
  volatile signed __int64 *v11; // r14
  unsigned __int64 *v12; // r14
  _BYTE *v13; // rax
  _BYTE *v14; // rsi

  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      v6 = (unsigned __int64 *)(a1 + 22);
    else
      v6 = (unsigned __int64 *)(a1 + 25);
  }
  else
  {
    v6 = (unsigned __int64 *)(a1 + 17);
  }
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    v8[26] |= 1u;
  while ( 1 )
  {
    v9 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v11 = a1 + 22;
      else
        v11 = a1 + 25;
    }
    else
    {
      v11 = a1 + 17;
    }
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    AlpcpLockForCachedReferenceBlob(v9);
    --*(_WORD *)(v9 - 30);
    if ( *(volatile signed __int64 **)(v9 + 16) == a1 )
      AlpcpCancelMessage((__int64)a1, v9, 0x10000);
    else
      AlpcpUnlockMessage(v9);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v12 = (unsigned __int64 *)(a1 + 22);
      else
        v12 = (unsigned __int64 *)(a1 + 25);
    }
    else
    {
      v12 = (unsigned __int64 *)(a1 + 17);
    }
    v13 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v12, 0LL, 0);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, v13, (ULONG_PTR)v12);
    if ( v14 )
      v14[26] |= 1u;
  }
  if ( a3 <= 2 )
  {
    if ( (_InterlockedExchangeAdd64(a1 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 17);
    return KeAbPostRelease((ULONG_PTR)(a1 + 17));
  }
  else if ( a3 == 3 )
  {
    if ( (_InterlockedExchangeAdd64(a1 + 22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 22);
    return KeAbPostRelease((ULONG_PTR)(a1 + 22));
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(a1 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 25);
    return KeAbPostRelease((ULONG_PTR)(a1 + 25));
  }
}
