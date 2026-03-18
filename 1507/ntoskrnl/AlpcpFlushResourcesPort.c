/*
 * XREFs of AlpcpFlushResourcesPort @ 0x1404A36CC
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpDoPortCleanup @ 0x1404A34DC (AlpcpDoPortCleanup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 */

void __fastcall AlpcpFlushResourcesPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  __int64 **v5; // r14
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rax
  ULONG_PTR v11; // rsi
  __int64 BugCheckParameter4; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  signed __int64 v18; // rax
  bool v19; // cc
  ULONG_PTR v20; // rax
  signed __int64 v21; // rax
  ULONG_PTR v22; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rsi

  v4 = (unsigned __int64 *)(a1 + 328);
  v5 = (__int64 **)(a1 + 336);
  v6 = KeAbPreAcquire(a1 + 328, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
LABEL_5:
  while ( 1 )
  {
    v9 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    v10 = *v9;
    if ( (__int64 **)v9[1] != v5 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v5 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v5;
    v9[1] = (__int64)v9;
    *v9 = (__int64)v9;
    v11 = (ULONG_PTR)(v9 + 6);
    _m_prefetchw((const void *)(v11 - 24));
    BugCheckParameter4 = *(_QWORD *)(v11 - 24);
    while ( BugCheckParameter4 > 0 )
    {
      v13 = BugCheckParameter4;
      BugCheckParameter4 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v11 - 24),
                             BugCheckParameter4 + 1,
                             BugCheckParameter4);
      if ( BugCheckParameter4 == v13 )
      {
        if ( BugCheckParameter4 != -1 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v4);
          KeAbPostRelease((ULONG_PTR)v4);
          if ( AlpcpDeleteBlob(v11, v14, v15, v16) )
          {
            v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), 0xFFFFFFFFFFFFFFFFuLL);
            v19 = v18 <= 1;
            v20 = v18 - 1;
            if ( v19 )
            {
              if ( v20 )
                KeBugCheckEx(0x18u, 0LL, v11, 0x21uLL, v20);
              AlpcpDestroyBlob(v11);
            }
          }
          v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), 0xFFFFFFFFFFFFFFFFuLL);
          v19 = v21 <= 1;
          v22 = v21 - 1;
          if ( v19 )
          {
            if ( v22 )
              KeBugCheckEx(0x18u, 0LL, v11, 0x21uLL, v22);
            AlpcpDestroyBlob(v11);
          }
          v23 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL, v17);
          v25 = v23;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
            ExfAcquirePushLockExclusiveEx(v4, v23, (ULONG_PTR)v4, v24);
          if ( v25 )
            *(_BYTE *)(v25 + 26) |= 1u;
        }
        goto LABEL_5;
      }
    }
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, v11, 0x20uLL, BugCheckParameter4);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
}
