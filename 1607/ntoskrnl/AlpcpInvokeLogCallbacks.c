/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x14065676C
 * Callers:
 *     AlpcpLogClosePort @ 0x140656824 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x140656880 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406568DC (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140656938 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x140656990 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1406569EC (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x140656A48 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x140656AA0 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x140656B98 (AlpcpLogWaitForReply.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  PVOID *i; // rbx

  v4 = KeAbPreAcquire((ULONG_PTR)&AlpcpLogLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&AlpcpLogLock, v4, (ULONG_PTR)&AlpcpLogLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
