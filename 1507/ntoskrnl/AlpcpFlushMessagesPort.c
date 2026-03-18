/*
 * XREFs of AlpcpFlushMessagesPort @ 0x1404A3834
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1404A34DC (AlpcpDoPortCleanup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     AlpcpFlushQueue @ 0x1404A3A20 (AlpcpFlushQueue.c)
 *     AlpcpFlushCancelQueue @ 0x1404A3C30 (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14052B804 (AlpcpFlushMessagesByRequestor.c)
 */

void __fastcall AlpcpFlushMessagesPort(__int64 a1)
{
  __int64 v2; // r9
  __int64 *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdi

  AlpcpFlushQueue(a1, a1 + 144, 1LL);
  AlpcpFlushQueue(a1, a1 + 160, 2LL);
  AlpcpFlushQueue(a1, a1 + 184, 3LL);
  AlpcpFlushQueue(a1, a1 + 208, 4LL);
  AlpcpFlushCancelQueue(a1, 0LL);
  if ( (*(_BYTE *)(a1 + 416) & 6) == 6 )
  {
    v3 = *(__int64 **)(a1 + 16);
    v4 = KeAbPreAcquire((ULONG_PTR)(v3 - 2), 0LL, 0LL, v2);
    if ( _InterlockedCompareExchange64(v3 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v3 - 2, v4, (ULONG_PTR)(v3 - 2), v5);
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    v6 = *v3;
    v7 = v3[2];
    if ( *v3 )
      v6 &= -(__int64)(ObReferenceObjectSafe(*v3) != 0);
    if ( v7 )
      v7 &= -(__int64)(ObReferenceObjectSafe(v7) != 0);
    if ( _InterlockedCompareExchange64(v3 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3 - 2);
    KeAbPostRelease((ULONG_PTR)(v3 - 2));
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 416) & 0x40) == 0 && v7 && (*(_DWORD *)(v7 + 416) & 8) == 0 )
      {
        AlpcpFlushMessagesByRequestor(v7, v6, v6 + 144, 1LL);
        AlpcpFlushMessagesByRequestor(v7, v6, v6 + 160, 2LL);
        if ( (*(_DWORD *)(a1 + 416) & 0x80u) == 0 )
          AlpcpFlushMessagesByRequestor(v7, v6, v6 + 184, 3LL);
        AlpcpFlushMessagesByRequestor(v7, v6, v6 + 208, 4LL);
        AlpcpFlushCancelQueue(v6, a1);
      }
      ObfDereferenceObject((PVOID)v6);
    }
    if ( v7 )
      ObfDereferenceObject((PVOID)v7);
  }
}
