/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1406A005C
 * Callers:
 *     AlpcpLogClosePort @ 0x1406A0114 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1406A0170 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406A01CC (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1406A0228 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1406A0280 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1406A02DC (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1406A0338 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406A0390 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406A0488 (AlpcpLogWaitForReply.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r9
  PVOID *i; // rbx

  v6 = KeAbPreAcquire((ULONG_PTR)&AlpcpLogLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&AlpcpLogLock, v6, (ULONG_PTR)&AlpcpLogLock, v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
