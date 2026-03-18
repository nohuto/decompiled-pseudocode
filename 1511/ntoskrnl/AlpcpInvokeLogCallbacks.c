/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1406209E0
 * Callers:
 *     AlpcpLogClosePort @ 0x140620A98 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x140620AF4 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140620B50 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140620BAC (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x140620C04 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x140620C60 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x140620CBC (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x140620D14 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x140620E0C (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  PVOID *i; // rbx

  v4 = KeAbPreAcquire((ULONG_PTR)&AlpcpLogLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&AlpcpLogLock, v4, (ULONG_PTR)&AlpcpLogLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
