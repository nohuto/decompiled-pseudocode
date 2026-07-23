/*
 * XREFs of EtwpFreeCompression @ 0x1400875AC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeRemoveQueueDpcEx @ 0x140087618 (KeRemoveQueueDpcEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EtwpRelinquishCompressionTarget @ 0x14022AC34 (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi

  KeRemoveQueueDpcEx(a1 + 1000, 0LL);
  if ( *(_DWORD *)(a1 + 976) )
  {
    v4 = KeAbPreAcquire(a1 + 952, 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 952), 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 952, v4, a1 + 952);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 952), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 952);
    KeAbPostRelease(a1 + 952);
  }
  *(_DWORD *)(a1 + 976) = 0;
  v2 = *(void **)(a1 + 968);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return EtwpFreePlaceholderList(a1);
}
