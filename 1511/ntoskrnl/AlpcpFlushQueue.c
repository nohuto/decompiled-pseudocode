/*
 * XREFs of AlpcpFlushQueue @ 0x14047F078
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x14047EE8C (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 */

void __fastcall AlpcpFlushQueue(volatile signed __int64 *a1, ULONG_PTR *a2, unsigned int a3)
{
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  ULONG_PTR v9; // rsi
  volatile signed __int64 *v10; // r14
  unsigned __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi

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
  v7 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  while ( 1 )
  {
    v9 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v10 = a1 + 22;
      else
        v10 = a1 + 25;
    }
    else
    {
      v10 = a1 + 17;
    }
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    AlpcpLockForCachedReferenceBlob(v9);
    --*(_WORD *)(v9 - 30);
    if ( *(volatile signed __int64 **)(v9 + 16) == a1 )
      AlpcpCancelMessage(a1, v9, 0x10000LL);
    else
      AlpcpUnlockMessage(v9);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v11 = (unsigned __int64 *)(a1 + 22);
      else
        v11 = (unsigned __int64 *)(a1 + 25);
    }
    else
    {
      v11 = (unsigned __int64 *)(a1 + 17);
    }
    v12 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
  }
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
    {
      if ( (_InterlockedExchangeAdd64(a1 + 22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 22);
      KeAbPostRelease((ULONG_PTR)(a1 + 22));
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(a1 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 25);
      KeAbPostRelease((ULONG_PTR)(a1 + 25));
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(a1 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 17);
    KeAbPostRelease((ULONG_PTR)(a1 + 17));
  }
}
