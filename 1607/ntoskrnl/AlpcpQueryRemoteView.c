/*
 * XREFs of AlpcpQueryRemoteView @ 0x14049D8EC
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x14049C9A4 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpLocateView @ 0x14040BC2C (AlpcpLocateView.c)
 *     AlpcpUnlockBlob @ 0x1404F14C0 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpQueryRemoteView(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v6; // rdi
  unsigned int v7; // ebx
  void *v8; // rdi
  ULONG_PTR v9; // rsi
  _QWORD *View; // rax

  v3 = *(_QWORD **)(a1 + 16);
  v6 = KeAbPreAcquire((ULONG_PTR)(v3 - 2), 0LL, 0);
  if ( _InterlockedCompareExchange64(v3 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3 - 2, v6, (ULONG_PTR)(v3 - 2));
  v7 = 0;
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( !*v3 )
    goto LABEL_16;
  v8 = (void *)v3[1];
  if ( !v8 )
    goto LABEL_16;
  if ( (*(_DWORD *)(*v3 + 416LL) & 0x1000) == 0 )
    v8 = (void *)*v3;
  if ( ObReferenceObjectSafe((__int64)v8) )
  {
    if ( _InterlockedCompareExchange64(v3 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3 - 2);
    KeAbPostRelease((ULONG_PTR)(v3 - 2));
    v9 = *(_QWORD *)(a2 + 16);
    AlpcpLockForCachedReferenceBlob(v9);
    View = AlpcpLocateView(v9, (__int64)v8);
    if ( View )
    {
      *(_DWORD *)a3 = 24;
      *(_QWORD *)(a3 + 16) = View[5];
      *(_QWORD *)(a3 + 8) = View[6];
    }
    else
    {
      v7 = -1073741670;
    }
    AlpcpUnlockBlob(v9);
    ObfDereferenceObject(v8);
    return v7;
  }
  else
  {
LABEL_16:
    if ( _InterlockedCompareExchange64(v3 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3 - 2);
    KeAbPostRelease((ULONG_PTR)(v3 - 2));
    return 3221225527LL;
  }
}
