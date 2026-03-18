/*
 * XREFs of AlpcpEnterAllocationEventMessageLog @ 0x14061FA98
 * Callers:
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpAllocateMessage @ 0x14047CF10 (AlpcpAllocateMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpAllocateMessageLog @ 0x14061F878 (AlpcpAllocateMessageLog.c)
 */

void __fastcall AlpcpEnterAllocationEventMessageLog(__int64 a1)
{
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rbx
  __int64 MessageLog; // rax
  __int64 **v6; // rcx
  char *v7; // rdx
  char *v8; // rcx
  char **v9; // rax

  v2 = KeAbPreAcquire((ULONG_PTR)&AlpcpMessageLogLock, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v2, (ULONG_PTR)&AlpcpMessageLogLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  MessageLog = AlpcpAllocateMessageLog();
  if ( MessageLog )
  {
    *(_QWORD *)(MessageLog + 32) = a1;
    *(_DWORD *)(MessageLog + 40) = *(_DWORD *)(a1 + 248);
    *(_DWORD *)(MessageLog + 44) = 1;
    v6 = (__int64 **)qword_1402E1E68;
    *(_QWORD *)MessageLog = &AlpcpMessageLogListHead;
    *(_QWORD *)(MessageLog + 8) = v6;
    if ( *v6 != &AlpcpMessageLogListHead )
      __fastfail(3u);
    *v6 = (__int64 *)MessageLog;
    v7 = (char *)(MessageLog + 16);
    qword_1402E1E68 = MessageLog;
    v8 = (char *)AlpcpMessageLogLookupTable + 16 * ((*(_DWORD *)(MessageLog + 40) >> 2) & 0x3FF);
    v9 = (char **)*((_QWORD *)v8 + 1);
    *(_QWORD *)v7 = v8;
    *((_QWORD *)v7 + 1) = v9;
    if ( *v9 != v8 )
      __fastfail(3u);
    *v9 = v7;
    *((_QWORD *)v8 + 1) = v7;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
