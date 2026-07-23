/*
 * XREFs of AlpcpFlushMessagesPort @ 0x1404094A8
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140409A64 (AlpcpDoPortCleanup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     AlpcpFlushQueue @ 0x140409680 (AlpcpFlushQueue.c)
 *     AlpcpFlushCancelQueue @ 0x14040985C (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404C2304 (AlpcpFlushMessagesByRequestor.c)
 */

LONG_PTR __fastcall AlpcpFlushMessagesPort(__int64 a1)
{
  LONG_PTR result; // rax
  __int64 *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdi

  AlpcpFlushQueue(a1, a1 + 144, 1LL);
  AlpcpFlushQueue(a1, a1 + 160, 2LL);
  AlpcpFlushQueue(a1, a1 + 184, 3LL);
  AlpcpFlushQueue(a1, a1 + 208, 4LL);
  AlpcpFlushCancelQueue(a1, 0LL);
  result = *(_DWORD *)(a1 + 416) & 6;
  if ( (*(_BYTE *)(a1 + 416) & 6) == 6 )
  {
    v3 = *(__int64 **)(a1 + 16);
    v4 = KeAbPreAcquire((ULONG_PTR)(v3 - 2), 0LL, 0);
    if ( _InterlockedCompareExchange64(v3 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v3 - 2, v4, (ULONG_PTR)(v3 - 2));
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    v5 = *v3;
    v6 = v3[2];
    if ( *v3 )
      v5 &= -(__int64)(ObReferenceObjectSafe(*v3) != 0);
    if ( v6 )
      v6 &= -(__int64)(ObReferenceObjectSafe(v6) != 0);
    if ( _InterlockedCompareExchange64(v3 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3 - 2);
    result = KeAbPostRelease((ULONG_PTR)(v3 - 2));
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 416) & 0x40) == 0 && v6 && (*(_DWORD *)(v6 + 416) & 8) == 0 )
      {
        AlpcpFlushMessagesByRequestor(v6, v5, v5 + 144, 1LL);
        AlpcpFlushMessagesByRequestor(v6, v5, v5 + 160, 2LL);
        if ( (*(_DWORD *)(a1 + 416) & 0x80u) == 0 )
          AlpcpFlushMessagesByRequestor(v6, v5, v5 + 184, 3LL);
        AlpcpFlushMessagesByRequestor(v6, v5, v5 + 208, 4LL);
        AlpcpFlushCancelQueue(v5, a1);
      }
      result = ObfDereferenceObject((PVOID)v5);
    }
    if ( v6 )
      return ObfDereferenceObject((PVOID)v6);
  }
  return result;
}
