/*
 * XREFs of AlpcpEnterAllocationEventMessageLog @ 0x14069E8E8
 * Callers:
 *     AlpcpAllocateMessage @ 0x140474B20 (AlpcpAllocateMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405327A0 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpAllocateMessageLog @ 0x14069E6C8 (AlpcpAllocateMessageLog.c)
 */

void __fastcall AlpcpEnterAllocationEventMessageLog(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  __int64 MessageLog; // rax
  __int64 **v10; // rcx
  char *v11; // rdx
  char *v12; // rcx
  char **v13; // rax

  v5 = KeAbPreAcquire((ULONG_PTR)&AlpcpMessageLogLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v5, (ULONG_PTR)&AlpcpMessageLogLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  MessageLog = AlpcpAllocateMessageLog();
  if ( MessageLog )
  {
    *(_QWORD *)(MessageLog + 32) = a1;
    *(_DWORD *)(MessageLog + 40) = *(_DWORD *)(a1 + 248);
    *(_DWORD *)(MessageLog + 44) = 1;
    v10 = (__int64 **)qword_1403322C8;
    *(_QWORD *)MessageLog = &AlpcpMessageLogListHead;
    *(_QWORD *)(MessageLog + 8) = v10;
    if ( *v10 != &AlpcpMessageLogListHead )
      __fastfail(3u);
    *v10 = (__int64 *)MessageLog;
    v11 = (char *)(MessageLog + 16);
    qword_1403322C8 = MessageLog;
    v12 = (char *)AlpcpMessageLogLookupTable + 16 * ((*(_DWORD *)(MessageLog + 40) >> 2) & 0x3FF);
    v13 = (char **)*((_QWORD *)v12 + 1);
    *(_QWORD *)v11 = v12;
    *((_QWORD *)v11 + 1) = v13;
    if ( *v13 != v12 )
      __fastfail(3u);
    *v13 = v11;
    *((_QWORD *)v12 + 1) = v11;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
