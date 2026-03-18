/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x1404BB744
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

void __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4)
{
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  ULONG_PTR i; // rdi
  volatile signed __int64 *v12; // rdi
  volatile signed __int64 *v13; // r14
  unsigned __int64 *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi

  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v8 = (unsigned __int64 *)(a2 + 176);
    else
      v8 = (unsigned __int64 *)(a2 + 200);
  }
  else
  {
    v8 = (unsigned __int64 *)(a2 + 136);
  }
  v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
LABEL_7:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_BYTE *)(i + 42) & 1) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( a4 <= 2 )
      {
        v13 = (volatile signed __int64 *)(a2 + 136);
      }
      else if ( a4 == 3 )
      {
        v13 = (volatile signed __int64 *)(a2 + 176);
      }
      else
      {
        v13 = (volatile signed __int64 *)(a2 + 200);
      }
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease((ULONG_PTR)v13);
      AlpcpLockForCachedReferenceBlob(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage(a2, i, 0x10000);
      else
        AlpcpUnlockMessage(i);
      if ( a4 <= 2 )
      {
        v14 = (unsigned __int64 *)(a2 + 136);
      }
      else if ( a4 == 3 )
      {
        v14 = (unsigned __int64 *)(a2 + 176);
      }
      else
      {
        v14 = (unsigned __int64 *)(a2 + 200);
      }
      v15 = KeAbPreAcquire((ULONG_PTR)v14, 0LL, 0LL);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
        ExfAcquirePushLockExclusiveEx(v14, v15, (ULONG_PTR)v14);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      goto LABEL_7;
    }
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v12 = (volatile signed __int64 *)(a2 + 176);
    else
      v12 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v12 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
}
