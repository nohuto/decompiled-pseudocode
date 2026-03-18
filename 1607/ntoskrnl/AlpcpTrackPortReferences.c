/*
 * XREFs of AlpcpTrackPortReferences @ 0x1404DD5AC
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140449270 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpTrackPortReferences(__int64 a1)
{
  signed __int32 v2; // edi
  unsigned __int64 *v3; // rbx
  _BYTE *v4; // rax
  _BYTE *v5; // rbp
  struct _KEVENT *v6; // rcx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( *(_QWORD *)(a1 + 408) )
  {
    v3 = (unsigned __int64 *)(a1 + 352);
    v4 = (_BYTE *)KeAbPreAcquire(a1 + 352, 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
    if ( v5 )
      v5[26] |= 1u;
    v6 = *(struct _KEVENT **)(a1 + 408);
    if ( v6 && v2 == v6[1].Header.LockNV )
      KeSetEvent(v6, 0, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
  }
}
