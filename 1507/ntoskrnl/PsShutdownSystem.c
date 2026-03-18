/*
 * XREFs of PsShutdownSystem @ 0x1406C39F0
 * Callers:
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     PsEnumProcesses @ 0x14041C0E4 (PsEnumProcesses.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     PspSwapSystemDll @ 0x1406BEE64 (PspSwapSystemDll.c)
 *     PspWaitForUsermodeExit @ 0x1406C3EC4 (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  _QWORD *ServerSiloGlobals; // r15
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // esi
  __int64 v7; // rdi
  unsigned __int64 NextProcess; // rbx
  int v9; // r14d
  NTSTATUS v10; // r14d
  PVOID *v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  volatile __int64 **v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  void *v17; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-40h] BYREF

  Timeout.QuadPart = -1000000000LL;
  v0 = 1;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PspFreezeProcessWorker, 0LL);
  v6 = 0;
  while ( 1 )
  {
    v7 = 0LL;
    NextProcess = PsGetNextProcess(0LL, v3, v4, v5);
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
        NextProcess = PsGetNextProcess((_QWORD *)NextProcess, v3, v4, v5);
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
LABEL_33:
    if ( !(_DWORD)v7 )
      goto LABEL_20;
  }
  if ( (unsigned int)++v6 <= 0xA || PsContinueWaiting )
    goto LABEL_33;
  v0 = 0;
LABEL_20:
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
      PspSwapSystemDll(*v14);
    }
    ++v14;
    --v15;
  }
  while ( v15 );
  ZwClose(PspInitialSystemProcessHandle);
  PspInitialSystemProcessHandle = 0LL;
  v17 = (void *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[13];
  if ( (unsigned __int64)v17 >= 2 )
  {
    ObfDereferenceObject(v17);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[13] = 1LL;
  }
  return v0;
}
