/*
 * XREFs of ExShutdownSystem @ 0x1404040B8
 * Callers:
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpRecordShutdownTime @ 0x140262720 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x140564D10 (ExSwapinWorkerThreads.c)
 */

void __fastcall ExShutdownSystem(int a1)
{
  signed __int64 v2; // rbx
  _QWORD *ServerSiloGlobals; // rdi
  __int64 v4; // r9
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rdi
  ULONG_PTR v12; // rtt

  v2 = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( a1 )
  {
    if ( a1 == 1 && (PopShutdownCleanly & 2) != 0 )
      ExSwapinWorkerThreads(0LL);
  }
  else
  {
    ExpRecordShutdownTime();
    v5 = (void *)ServerSiloGlobals[6];
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      ServerSiloGlobals[6] = 0LL;
    }
    v6 = (void *)ServerSiloGlobals[5];
    if ( v6 )
    {
      ObfDereferenceObjectWithTag(v6, 0x65487845u);
      ServerSiloGlobals[5] = 0LL;
    }
    v7 = KeAbPreAcquire((ULONG_PTR)&ExpKeyManipLock, 0LL, 0LL, v4);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpKeyManipLock, 0LL);
    v11 = v7;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&ExpKeyManipLock, v7, (ULONG_PTR)&ExpKeyManipLock, v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_1403253A8 )
    {
      ObfDereferenceObject(qword_1403253A8);
      qword_1403253A8 = 0LL;
    }
    if ( ExpProductTypeKey )
    {
      ObCloseHandle(ExpProductTypeKey, 0);
      ExpProductTypeKey = 0LL;
    }
    if ( ExpSetupKey )
    {
      ObCloseHandle(ExpSetupKey, 0);
      ExpSetupKey = 0LL;
    }
    _m_prefetchw(&ExpKeyManipLock);
    if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v2 = ExpKeyManipLock - 16;
    if ( (ExpKeyManipLock & 2) != 0
      || (v12 = ExpKeyManipLock,
          v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v2, ExpKeyManipLock)) )
    {
      ExfReleasePushLock(&ExpKeyManipLock, v8);
    }
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  }
}
