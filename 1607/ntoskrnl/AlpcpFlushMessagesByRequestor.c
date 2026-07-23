/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x1404C2304
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

unsigned __int64 __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4)
{
  unsigned __int64 *v8; // rdi
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  ULONG_PTR i; // rdi
  volatile signed __int64 *v12; // rdi
  volatile signed __int64 *v14; // r14
  unsigned __int64 *v15; // r14
  _BYTE *v16; // rax
  _BYTE *v17; // rdi

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
  v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    v10[26] |= 1u;
LABEL_7:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_BYTE *)(i + 42) & 1) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v14 = (volatile signed __int64 *)(a2 + 176);
        else
          v14 = (volatile signed __int64 *)(a2 + 200);
      }
      else
      {
        v14 = (volatile signed __int64 *)(a2 + 136);
      }
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      AlpcpLockForCachedReferenceBlob(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage(a2, i, 0x10000);
      else
        AlpcpUnlockMessage(i);
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v15 = (unsigned __int64 *)(a2 + 176);
        else
          v15 = (unsigned __int64 *)(a2 + 200);
      }
      else
      {
        v15 = (unsigned __int64 *)(a2 + 136);
      }
      v16 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v15, 0LL, 0);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
        ExfAcquirePushLockExclusiveEx(v15, v16, (ULONG_PTR)v15);
      if ( v17 )
        v17[26] |= 1u;
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
  return KeAbPostRelease((ULONG_PTR)v12);
}
