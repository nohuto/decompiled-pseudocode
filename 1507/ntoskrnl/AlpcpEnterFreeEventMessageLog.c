/*
 * XREFs of AlpcpEnterFreeEventMessageLog @ 0x14069E9EC
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x14047A9E0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpLocateMessageLog @ 0x14069EC5C (AlpcpLocateMessageLog.c)
 */

void __fastcall AlpcpEnterFreeEventMessageLog(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  __int64 MessageLog; // rax

  v5 = KeAbPreAcquire((ULONG_PTR)&AlpcpMessageLogLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v5, (ULONG_PTR)&AlpcpMessageLogLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
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
