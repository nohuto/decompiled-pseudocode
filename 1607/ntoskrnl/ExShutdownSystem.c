/*
 * XREFs of ExShutdownSystem @ 0x1403DFB38
 * Callers:
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExpRecordShutdownTime @ 0x14022C760 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x14052F230 (ExSwapinWorkerThreads.c)
 */

unsigned __int64 ExShutdownSystem()
{
  unsigned __int64 result; // rax
  int v1; // edx
  signed __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  _BYTE *v6; // rax
  signed __int8 v7; // cf
  _BYTE *v8; // rdi
  ULONG_PTR v9; // rtt

  result = (unsigned __int64)PsGetServerSiloGlobals(0LL);
  v2 = 0LL;
  v3 = result;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      result = (unsigned int)PopShutdownCleanly;
      if ( (PopShutdownCleanly & 2) != 0 )
        return ExSwapinWorkerThreads(0LL);
    }
  }
  else
  {
    ExpRecordShutdownTime();
    v4 = *(void **)(v3 + 872);
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      *(_QWORD *)(v3 + 872) = 0LL;
    }
    v5 = *(void **)(v3 + 864);
    if ( v5 )
    {
      ObfDereferenceObjectWithTag(v5, 0x65487845u);
      *(_QWORD *)(v3 + 864) = 0LL;
    }
    v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpKeyManipLock, 0LL, 0);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&ExpKeyManipLock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&ExpKeyManipLock, v6, (ULONG_PTR)&ExpKeyManipLock);
    if ( v8 )
      v8[26] |= 1u;
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_1402FCF78 )
    {
      ObfDereferenceObject(qword_1402FCF78);
      qword_1402FCF78 = 0LL;
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
    return KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  }
  return result;
}
