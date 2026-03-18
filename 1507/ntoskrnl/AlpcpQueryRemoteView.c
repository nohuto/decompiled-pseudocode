/*
 * XREFs of AlpcpQueryRemoteView @ 0x14052AA30
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x140529BA4 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLocateView @ 0x140476D44 (AlpcpLocateView.c)
 */

__int64 __fastcall AlpcpQueryRemoteView(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // r9
  void *v9; // rbp
  ULONG_PTR v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdi
  signed __int64 BugCheckParameter4; // rax
  _QWORD *View; // rax
  int v17; // r8d
  unsigned int v18; // r14d
  char v19; // cl
  int v20; // edi
  signed __int64 v21; // rcx

  v4 = *(_QWORD **)(a1 + 16);
  v7 = KeAbPreAcquire((ULONG_PTR)(v4 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4 - 2, v7, (ULONG_PTR)(v4 - 2), v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( !*v4 )
    goto LABEL_31;
  v9 = (void *)v4[1];
  if ( !v9 )
    goto LABEL_31;
  if ( (*(_DWORD *)(*v4 + 416LL) & 0x1000) == 0 )
    v9 = (void *)*v4;
  if ( ObReferenceObjectSafe((__int64)v9) )
  {
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    v10 = *(_QWORD *)(a2 + 16);
    v12 = KeAbPreAcquire(v10 - 16, 0LL, 0LL, v11);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 - 16), v12, v10 - 16, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    *(_BYTE *)(v10 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v10, 0x26uLL, BugCheckParameter4);
    View = AlpcpLocateView(v10, (__int64)v9);
    if ( View )
    {
      *(_DWORD *)a3 = 24;
      *(_QWORD *)(a3 + 16) = View[5];
      *(_QWORD *)(a3 + 8) = View[6];
      v18 = 0;
    }
    else
    {
      v18 = -1073741670;
    }
    v19 = *(_BYTE *)(v10 - 32);
    v20 = 0;
    if ( (v19 & 1) != 0 )
    {
      v20 = v17 - *(__int16 *)(v10 - 30);
      *(_WORD *)(v10 - 30) = 0;
      *(_BYTE *)(v10 - 32) = v19 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 - 16));
    KeAbPostRelease(v10 - 16);
    if ( v20 > 0 )
    {
      v21 = -v20 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), -v20);
      if ( v21 <= 0 )
      {
        if ( v21 )
          KeBugCheckEx(0x18u, 0LL, v10, 0x28uLL, v21);
        AlpcpDestroyBlob(v10);
      }
    }
    ObfDereferenceObject(v9);
    return v18;
  }
  else
  {
LABEL_31:
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    return 3221225527LL;
  }
}
