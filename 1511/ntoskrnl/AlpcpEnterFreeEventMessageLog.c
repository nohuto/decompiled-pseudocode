/*
 * XREFs of AlpcpEnterFreeEventMessageLog @ 0x14061FB9C
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140426FA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpLocateMessageLog @ 0x14061FE0C (AlpcpLocateMessageLog.c)
 */

void __fastcall AlpcpEnterFreeEventMessageLog(__int64 a1)
{
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rbx
  __int64 MessageLog; // rax

  v2 = KeAbPreAcquire((ULONG_PTR)&AlpcpMessageLogLock, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v2, (ULONG_PTR)&AlpcpMessageLogLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 248));
  if ( MessageLog )
  {
    *(_DWORD *)(MessageLog + 44) = 0;
    *(_QWORD *)(MessageLog + 32) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
