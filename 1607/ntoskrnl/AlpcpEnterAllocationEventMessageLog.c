/*
 * XREFs of AlpcpEnterAllocationEventMessageLog @ 0x140654D3C
 * Callers:
 *     AlpcpAllocateMessage @ 0x14040B38C (AlpcpAllocateMessage.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404B436C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     AlpcpAllocateMessageLog @ 0x140654B1C (AlpcpAllocateMessageLog.c)
 */

unsigned __int64 __fastcall AlpcpEnterAllocationEventMessageLog(__int64 a1)
{
  _BYTE *v2; // rax
  signed __int8 v3; // cf
  _BYTE *v4; // rbx
  __int64 MessageLog; // rax
  __int64 *v6; // rcx
  char *v7; // rdx
  char *v8; // rcx
  char **v9; // rax

  v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&AlpcpMessageLogLock, 0LL, 0);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v2, (ULONG_PTR)&AlpcpMessageLogLock);
  if ( v4 )
    v4[26] |= 1u;
  MessageLog = AlpcpAllocateMessageLog();
  if ( MessageLog )
  {
    *(_QWORD *)(MessageLog + 32) = a1;
    *(_DWORD *)(MessageLog + 40) = *(_DWORD *)(a1 + 256);
    *(_DWORD *)(MessageLog + 44) = 1;
    v6 = (__int64 *)qword_140307348;
    if ( *(__int64 **)qword_140307348 != &AlpcpMessageLogListHead )
      __fastfail(3u);
    *(_QWORD *)(MessageLog + 8) = qword_140307348;
    *(_QWORD *)MessageLog = &AlpcpMessageLogListHead;
    v7 = (char *)(MessageLog + 16);
    *v6 = MessageLog;
    qword_140307348 = MessageLog;
    v8 = (char *)AlpcpMessageLogLookupTable + 16 * ((*(_DWORD *)(MessageLog + 40) >> 2) & 0x3FF);
    v9 = (char **)*((_QWORD *)v8 + 1);
    if ( *v9 != v8 )
      __fastfail(3u);
    *(_QWORD *)v7 = v8;
    *((_QWORD *)v7 + 1) = v9;
    *v9 = v7;
    *((_QWORD *)v8 + 1) = v7;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
