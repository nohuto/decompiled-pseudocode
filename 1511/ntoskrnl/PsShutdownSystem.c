/*
 * XREFs of PsShutdownSystem @ 0x140641460
 * Callers:
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404879CC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PsEnumProcesses @ 0x14050085C (PsEnumProcesses.c)
 *     PspGetNextSilo @ 0x1405269DC (PspGetNextSilo.c)
 *     PspWaitForUsermodeExit @ 0x1406419A4 (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  _QWORD *ServerSiloGlobals; // r15
  __int64 *i; // rcx
  __int64 *NextSilo; // rax
  __int64 *v5; // rbx
  int v6; // esi
  __int64 v7; // rdi
  ULONG_PTR NextProcess; // rbx
  int v9; // r14d
  NTSTATUS v10; // r14d
  PVOID *v11; // rbx
  __int64 v12; // rbp
  ULONG_PTR v13; // rcx
  volatile __int64 **v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  volatile __int64 *v17; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  void *v19; // r14
  void *v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-40h] BYREF

  Timeout.QuadPart = -1000000000LL;
  v0 = 1;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = PspGetNextSilo(i, 1);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    PspTerminateAllProcessesInJobHierarchy((PRKEVENT)NextSilo, -1073741077, 0);
  }
  PsEnumProcesses((__int64 (__fastcall *)(unsigned __int64, __int64))PspFreezeProcessWorker, 0LL);
  v6 = 0;
  while ( 1 )
  {
    v7 = 0LL;
    NextProcess = PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( (PEPROCESS)NextProcess != PsInitialSystemProcess
          && (PVOID)NextProcess != PsIdleProcess
          && NextProcess != ServerSiloGlobals[5] )
        {
          v9 = PsTerminateProcess(NextProcess, 0xC00002EB);
          if ( (*(_DWORD *)(NextProcess + 772) & 4) == 0 && v9 != 290 && (unsigned int)v7 < 3 )
          {
            ObfReferenceObject((PVOID)NextProcess);
            Object[v7] = (PVOID)NextProcess;
            v7 = (unsigned int)(v7 + 1);
          }
        }
        NextProcess = PsGetNextProcess((_QWORD *)NextProcess);
      }
      while ( NextProcess );
      if ( (_DWORD)v7 )
      {
        v10 = KeWaitForMultipleObjects(v7, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
        v11 = Object;
        v12 = (unsigned int)v7;
        do
        {
          ObfDereferenceObject(*v11++);
          --v12;
        }
        while ( v12 );
        if ( v10 == 258 )
          break;
      }
    }
    v6 = 0;
LABEL_39:
    if ( !(_DWORD)v7 )
      goto LABEL_23;
  }
  if ( (unsigned int)++v6 <= 0xA || PsContinueWaiting )
    goto LABEL_39;
  v0 = 0;
LABEL_23:
  if ( PopShutdownCleanly )
  {
    v13 = ServerSiloGlobals[5];
    if ( v13 )
    {
      PsTerminateProcess(v13, 0xC00002EB);
      PspWaitForUsermodeExit(ServerSiloGlobals[5]);
    }
  }
  v14 = (volatile __int64 **)&PspSystemDlls;
  v15 = 2LL;
  do
  {
    if ( *v14 )
    {
      v16 = *((_QWORD *)*v14 + 5);
      if ( v16 )
        MiUnmapViewOfSection(PsInitialSystemProcess, v16, 0);
      v17 = *v14;
      CurrentThread = KeGetCurrentThread();
      v19 = (void *)ObFastReplaceObject(*v14, 0LL);
      if ( v19 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v21, 0);
        if ( (v17[1] & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)v17 + 1);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        ObfDereferenceObject(v19);
      }
    }
    ++v14;
    --v15;
  }
  while ( v15 );
  ZwClose(PspInitialSystemProcessHandle);
  PspInitialSystemProcessHandle = 0LL;
  v20 = (void *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14];
  if ( (unsigned __int64)v20 >= 2 )
  {
    ObfDereferenceObject(v20);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14] = 1LL;
  }
  return v0;
}
