/*
 * XREFs of PsShutdownSystem @ 0x14067F928
 * Callers:
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     SmIsCompressionProcess @ 0x14009C73C (SmIsCompressionProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C (ExfAcquireReleasePushLockExclusive.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     PsEnumProcesses @ 0x1404993EC (PsEnumProcesses.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     PspGetNextSilo @ 0x14055FE9C (PspGetNextSilo.c)
 *     PsTerminateServerSilo @ 0x14067E25C (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x14067FEE0 (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  _QWORD *ServerSiloGlobals; // r13
  __int64 *i; // rcx
  __int64 *NextSilo; // rax
  __int64 *v5; // rbx
  int v6; // ebp
  __int64 v7; // r15
  __int64 v8; // rdi
  unsigned __int64 NextProcess; // rbx
  ULONG_PTR v10; // rcx
  int v11; // r14d
  NTSTATUS v12; // r14d
  PVOID *v13; // rbx
  __int64 v14; // rsi
  ULONG_PTR v15; // rcx
  volatile __int64 **v16; // rbx
  __int64 v17; // rdx
  volatile __int64 *v18; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rdx
  void *v21; // rbp
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rcx
  signed __int32 v25[8]; // [rsp+0h] [rbp-98h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-58h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-50h] BYREF

  Timeout.QuadPart = -1000000000LL;
  v0 = 1;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    NT_ASSERT("PsIsCurrentThreadInServerSilo() == 0");
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = PspGetNextSilo(i, 1);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    PsTerminateServerSilo((__int64)NextSilo);
  }
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PspFreezeProcessWorker, 0LL);
  v6 = 0;
  v7 = 3LL;
  while ( 1 )
  {
    v8 = 0LL;
    NextProcess = PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( (PEPROCESS)NextProcess != PsInitialSystemProcess
          && (PVOID)NextProcess != PsIdleProcess
          && NextProcess != ServerSiloGlobals[108]
          && !SmIsCompressionProcess(NextProcess) )
        {
          v11 = PsTerminateProcess(v10);
          if ( (*(_DWORD *)(NextProcess + 772) & 4) == 0 && v11 != 290 && (unsigned int)v8 < 3 )
          {
            ObfReferenceObject((PVOID)NextProcess);
            Object[v8] = (PVOID)NextProcess;
            v8 = (unsigned int)(v8 + 1);
          }
        }
        NextProcess = PsGetNextProcess((_QWORD *)NextProcess);
      }
      while ( NextProcess );
      if ( (_DWORD)v8 )
      {
        v12 = KeWaitForMultipleObjects(v8, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
        v13 = Object;
        v14 = (unsigned int)v8;
        do
        {
          ObfDereferenceObject(*v13++);
          --v14;
        }
        while ( v14 );
        if ( v12 == 258 )
          break;
      }
    }
    v6 = 0;
LABEL_42:
    if ( !(_DWORD)v8 )
      goto LABEL_26;
  }
  if ( (unsigned int)++v6 <= 0xA || PsContinueWaiting )
    goto LABEL_42;
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v15 = ServerSiloGlobals[108];
    if ( v15 )
    {
      PsTerminateProcess(v15);
      PspWaitForUsermodeExit(ServerSiloGlobals[108]);
    }
  }
  v16 = (volatile __int64 **)&PspSystemDlls;
  do
  {
    if ( *v16 )
    {
      v17 = *((_QWORD *)*v16 + 5);
      if ( v17 )
        MiUnmapViewOfSection(PsInitialSystemProcess, v17, 0);
      v18 = *v16;
      CurrentThread = KeGetCurrentThread();
      v21 = (void *)ObFastReplaceObject(*v16, 0LL);
      if ( v21 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v25, 0);
        if ( (v18[1] & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((ULONG_PTR)(v18 + 1));
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v20, v22, v23);
        ObfDereferenceObject(v21);
      }
    }
    ++v16;
    --v7;
  }
  while ( v7 );
  ZwClose(PspInitialSystemProcessHandle);
  PspInitialSystemProcessHandle = 0LL;
  v24 = (void *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14];
  if ( (unsigned __int64)v24 >= 2 )
  {
    ObfDereferenceObject(v24);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14] = 1LL;
  }
  return v0;
}
