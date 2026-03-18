/*
 * XREFs of AlpcpFlushQueue @ 0x1404A3A20
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

void __fastcall AlpcpFlushQueue(unsigned __int64 *a1, ULONG_PTR *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  ULONG_PTR v11; // rdi
  volatile signed __int64 *v12; // rdi
  __int64 BugCheckParameter4; // rax
  __int64 v14; // rdx
  volatile signed __int64 *v15; // r14
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r14
  signed __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 *v22; // r14
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdi
  char v26; // cl
  int v27; // r14d
  signed __int64 v28; // rcx

  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      v7 = a1 + 22;
    else
      v7 = a1 + 25;
  }
  else
  {
    v7 = a1 + 17;
  }
  v8 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  while ( 1 )
  {
    v11 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    _m_prefetchw((const void *)(v11 - 24));
    BugCheckParameter4 = *(_QWORD *)(v11 - 24);
    while ( BugCheckParameter4 > 0 )
    {
      v14 = BugCheckParameter4;
      BugCheckParameter4 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v11 - 24),
                             BugCheckParameter4 + 1,
                             BugCheckParameter4);
      if ( BugCheckParameter4 == v14 )
        goto LABEL_22;
    }
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, v11, 0x20uLL, BugCheckParameter4);
LABEL_22:
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v15 = (volatile signed __int64 *)(a1 + 22);
      else
        v15 = (volatile signed __int64 *)(a1 + 25);
    }
    else
    {
      v15 = (volatile signed __int64 *)(a1 + 17);
    }
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15);
    KeAbPostRelease((ULONG_PTR)v15);
    v17 = KeAbPreAcquire(v11 - 16, 0LL, 0LL, v16);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 - 16), v17, v11 - 16, v18);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    *(_BYTE *)(v11 - 32) |= 1u;
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), 0x10000uLL) + 0x10000;
    if ( v20 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v11, 0x26uLL, v20);
    --*(_WORD *)(v11 - 30);
    if ( *(unsigned __int64 **)(v11 + 16) == a1 )
    {
      AlpcpCancelMessage(a1, v11, 0x10000LL);
    }
    else
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v11);
      v26 = *(_BYTE *)(v11 - 32);
      v27 = 0;
      if ( (v26 & 1) != 0 )
      {
        v27 = 0x10000 - *(__int16 *)(v11 - 30);
        *(_WORD *)(v11 - 30) = 0;
        *(_BYTE *)(v11 - 32) = v26 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 - 16));
      KeAbPostRelease(v11 - 16);
      if ( v27 > 0 )
      {
        v28 = -v27 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), -v27);
        if ( v28 <= 0 )
        {
          if ( v28 )
            KeBugCheckEx(0x18u, 0LL, v11, 0x28uLL, v28);
          AlpcpDestroyBlob(v11);
        }
      }
    }
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v22 = a1 + 22;
      else
        v22 = a1 + 25;
    }
    else
    {
      v22 = a1 + 17;
    }
    v23 = KeAbPreAcquire((ULONG_PTR)v22, 0LL, 0LL, v21);
    v25 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      ExfAcquirePushLockExclusiveEx(v22, v23, (ULONG_PTR)v22, v24);
    if ( v25 )
      *(_BYTE *)(v25 + 26) |= 1u;
  }
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      v12 = (volatile signed __int64 *)(a1 + 22);
    else
      v12 = (volatile signed __int64 *)(a1 + 25);
  }
  else
  {
    v12 = (volatile signed __int64 *)(a1 + 17);
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
}
