/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x14052B804
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1404A3834 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

void __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, unsigned __int64 *a2, ULONG_PTR *a3, __int64 a4)
{
  unsigned int v5; // r12d
  __int64 v7; // r14
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  ULONG_PTR i; // rdi
  volatile signed __int64 *v13; // rdi
  __int64 BugCheckParameter4; // rax
  __int64 v15; // rdx
  volatile signed __int64 *v16; // r14
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r14
  signed __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 *v23; // r14
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdi
  char v27; // cl
  int v28; // r14d
  signed __int64 v29; // rcx

  v5 = a4;
  v7 = a1;
  if ( (unsigned int)a4 > 2 )
  {
    if ( (_DWORD)a4 == 3 )
      v8 = a2 + 22;
    else
      v8 = a2 + 25;
  }
  else
  {
    v8 = a2 + 17;
  }
  v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
LABEL_7:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == v7 || (*(_BYTE *)(i + 42) & 1) != 0 )
    {
      _m_prefetchw((const void *)(i - 24));
      BugCheckParameter4 = *(_QWORD *)(i - 24);
      while ( BugCheckParameter4 > 0 )
      {
        v15 = BugCheckParameter4;
        BugCheckParameter4 = _InterlockedCompareExchange64(
                               (volatile signed __int64 *)(i - 24),
                               BugCheckParameter4 + 1,
                               BugCheckParameter4);
        if ( BugCheckParameter4 == v15 )
          goto LABEL_26;
      }
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, i, 0x20uLL, BugCheckParameter4);
LABEL_26:
      if ( v5 > 2 )
      {
        if ( v5 == 3 )
          v16 = (volatile signed __int64 *)(a2 + 22);
        else
          v16 = (volatile signed __int64 *)(a2 + 25);
      }
      else
      {
        v16 = (volatile signed __int64 *)(a2 + 17);
      }
      if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      v18 = KeAbPreAcquire(i - 16, 0LL, 0LL, v17);
      v20 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(i - 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i - 16), v18, i - 16, v19);
      if ( v20 )
        *(_BYTE *)(v20 + 26) |= 1u;
      *(_BYTE *)(i - 32) |= 1u;
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(i - 24), 0x10000uLL) + 0x10000;
      if ( v21 <= 0 )
        KeBugCheckEx(0x18u, 0LL, i, 0x26uLL, v21);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
      {
        AlpcpCancelMessage(a2, i, 0x10000LL);
      }
      else
      {
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(i);
        v27 = *(_BYTE *)(i - 32);
        v28 = 0;
        if ( (v27 & 1) != 0 )
        {
          v28 = 0x10000 - *(__int16 *)(i - 30);
          *(_WORD *)(i - 30) = 0;
          *(_BYTE *)(i - 32) = v27 & 0xFE;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(i - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(i - 16));
        KeAbPostRelease(i - 16);
        if ( v28 > 0 )
        {
          v29 = -v28 + _InterlockedExchangeAdd64((volatile signed __int64 *)(i - 24), -v28);
          if ( v29 <= 0 )
          {
            if ( v29 )
              KeBugCheckEx(0x18u, 0LL, i, 0x28uLL, v29);
            AlpcpDestroyBlob(i);
          }
        }
      }
      if ( v5 > 2 )
      {
        if ( v5 == 3 )
          v23 = a2 + 22;
        else
          v23 = a2 + 25;
      }
      else
      {
        v23 = a2 + 17;
      }
      v24 = KeAbPreAcquire((ULONG_PTR)v23, 0LL, 0LL, v22);
      v26 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
        ExfAcquirePushLockExclusiveEx(v23, v24, (ULONG_PTR)v23, v25);
      if ( v26 )
        *(_BYTE *)(v26 + 26) |= 1u;
      v7 = a1;
      goto LABEL_7;
    }
  }
  if ( v5 > 2 )
  {
    if ( v5 == 3 )
      v13 = (volatile signed __int64 *)(a2 + 22);
    else
      v13 = (volatile signed __int64 *)(a2 + 25);
  }
  else
  {
    v13 = (volatile signed __int64 *)(a2 + 17);
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
}
