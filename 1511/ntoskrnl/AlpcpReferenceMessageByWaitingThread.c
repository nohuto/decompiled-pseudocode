/*
 * XREFs of AlpcpReferenceMessageByWaitingThread @ 0x14051004C
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x14050FEAC (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1405101A8 (AlpcpReferenceMessageByWaitingThreadPort.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThread(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  __int64 *v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  __int64 *i; // rdi
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  v6 = -1073741275;
  v7 = KeAbPreAcquire((ULONG_PTR)&AlpcpPortListLock, 0LL, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v7, (ULONG_PTR)&AlpcpPortListLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  for ( i = (__int64 *)AlpcpPortList; i != &AlpcpPortList; i = (__int64 *)*i )
  {
    if ( ObReferenceObjectSafe((__int64)i) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
      KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
      if ( v5 )
        ObfDereferenceObject(v5);
      v5 = i;
      v4 = AlpcpReferenceMessageByWaitingThreadPort(a1, i);
      if ( v4 )
      {
        v6 = 0;
        goto LABEL_21;
      }
      v11 = KeAbPreAcquire((ULONG_PTR)&AlpcpPortListLock, 0LL, 0LL);
      v12 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v11, (ULONG_PTR)&AlpcpPortListLock);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
LABEL_21:
  if ( v5 )
    ObfDereferenceObject(v5);
  result = v6;
  *a2 = v4;
  return result;
}
