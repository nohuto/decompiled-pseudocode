/*
 * XREFs of ExShutdownSystem @ 0x1403B2E04
 * Callers:
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     ExpRecordShutdownTime @ 0x140212FE8 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 */

void __fastcall ExShutdownSystem(int a1)
{
  signed __int64 v2; // rbx
  _QWORD *ServerSiloGlobals; // rdi
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rax
  signed __int8 v7; // cf
  __int64 v8; // rdi
  ULONG_PTR v9; // rtt

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
    v4 = (void *)ServerSiloGlobals[6];
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      ServerSiloGlobals[6] = 0LL;
    }
    v5 = (void *)ServerSiloGlobals[5];
    if ( v5 )
    {
      ObfDereferenceObjectWithTag(v5, 0x65487845u);
      ServerSiloGlobals[5] = 0LL;
    }
    v6 = KeAbPreAcquire((ULONG_PTR)&ExpKeyManipLock, 0LL, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&ExpKeyManipLock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&ExpKeyManipLock, v6, (ULONG_PTR)&ExpKeyManipLock);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_1402D61F8 )
    {
      ObfDereferenceObject(qword_1402D61F8);
      qword_1402D61F8 = 0LL;
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
      || (v9 = ExpKeyManipLock,
          v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v2, ExpKeyManipLock)) )
    {
      ExfReleasePushLock(&ExpKeyManipLock);
    }
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  }
}
