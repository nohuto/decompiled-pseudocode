/*
 * XREFs of AlpcpReferenceMessageByWaitingThread @ 0x140406CC8
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140406B0C (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140406E24 (AlpcpReferenceMessageByWaitingThreadPort.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThread(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 *v7; // rsi
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rbx
  __int64 *i; // rdi
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 result; // rax

  v6 = 0LL;
  v7 = 0LL;
  v8 = -1073741275;
  v9 = KeAbPreAcquire((ULONG_PTR)&AlpcpPortListLock, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v9, (ULONG_PTR)&AlpcpPortListLock, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  for ( i = (__int64 *)AlpcpPortList; i != &AlpcpPortList; i = (__int64 *)*i )
  {
    if ( ObReferenceObjectSafe((__int64)i) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
      KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
      if ( v7 )
        ObfDereferenceObject(v7);
      v7 = i;
      v6 = AlpcpReferenceMessageByWaitingThreadPort(a1, i);
      if ( v6 )
      {
        v8 = 0;
        goto LABEL_21;
      }
      v15 = KeAbPreAcquire((ULONG_PTR)&AlpcpPortListLock, 0LL, 0LL, v14);
      v17 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v15, (ULONG_PTR)&AlpcpPortListLock, v16);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
LABEL_21:
  if ( v7 )
    ObfDereferenceObject(v7);
  result = v8;
  *a2 = v6;
  return result;
}
