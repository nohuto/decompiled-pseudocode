/*
 * XREFs of AlpcpTrackPortReferences @ 0x1404AC7D4
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140427E70 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

void __fastcall AlpcpTrackPortReferences(__int64 a1)
{
  signed __int32 v2; // edi
  unsigned __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  struct _KEVENT *v6; // rcx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( *(_QWORD *)(a1 + 408) )
  {
    v3 = (unsigned __int64 *)(a1 + 352);
    v4 = KeAbPreAcquire(a1 + 352, 0LL, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v6 = *(struct _KEVENT **)(a1 + 408);
    if ( v6 && v2 == v6[1].Header.LockNV )
      KeSetEvent(v6, 0, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
  }
}
