/*
 * XREFs of ExpInitSystemPhase1 @ 0x140759698
 * Callers:
 *     ExInitSystem @ 0x14076AC48 (ExInitSystem.c)
 * Callees:
 *     ExpMicrocodeInitialization_0 @ 0x1400012B8 (ExpMicrocodeInitialization_0.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     ExInitializeProcessor @ 0x140134140 (ExInitializeProcessor.c)
 *     ExpSaInitialize @ 0x14013F47C (ExpSaInitialize.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PsRegisterMonitorServerSilo @ 0x140526694 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x1405268B8 (PsStartMonitorServerSilo.c)
 *     ExRegisterHost @ 0x140527A90 (ExRegisterHost.c)
 *     PsUnregisterMonitorServerSilo @ 0x14063FD40 (PsUnregisterMonitorServerSilo.c)
 *     ExpWin32Initialization @ 0x140759920 (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x14075A390 (ExpTimerInitialization.c)
 *     ExpKeyedEventInitialization @ 0x14075AE80 (ExpKeyedEventInitialization.c)
 *     ExpProfileInitialization @ 0x14075B16C (ExpProfileInitialization.c)
 *     ExpMutantInitialization @ 0x14075B210 (ExpMutantInitialization.c)
 *     ExpSemaphoreInitialization @ 0x14075B2D4 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x14075B364 (ExpEventInitialization.c)
 *     ExpInitializeCallbacks @ 0x14075B3F4 (ExpInitializeCallbacks.c)
 *     ExpAeThresholdInitialization @ 0x140766FB8 (ExpAeThresholdInitialization.c)
 *     ExpUpdateProductSuiteType @ 0x14076B2E0 (ExpUpdateProductSuiteType.c)
 *     ExpWorkerInitialization @ 0x14076B754 (ExpWorkerInitialization.c)
 *     ExpInitializeSvm @ 0x1407701E0 (ExpInitializeSvm.c)
 *     ExpWorkerFactoryInitialization @ 0x140770774 (ExpWorkerFactoryInitialization.c)
 */

char ExpInitSystemPhase1()
{
  ULONG MaximumProcessorCount; // eax
  unsigned int v1; // ebx
  bool i; // di
  bool v3; // bl
  bool v4; // di
  bool v5; // bl
  char v6; // di
  char v7; // bl
  char v8; // di
  char v9; // al
  char v10; // di
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rbx
  char v13; // bl
  char v14; // di
  int v15; // eax
  __int64 v16; // rdx
  int v18; // [rsp+20h] [rbp-60h] BYREF
  __int16 v19; // [rsp+24h] [rbp-5Ch]
  int v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-50h]
  void (__fastcall *v22)(int); // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h]
  _QWORD v24[7]; // [rsp+48h] [rbp-38h] BYREF

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  ExpHostListLock = 0LL;
  ExpSpinCount = MaximumProcessorCount > 1 ? 0x400 : 0;
  qword_1406FB310 = (__int64)&ExpHostList;
  ExpHostList = (__int64)&ExpHostList;
  ExpKeyManipLock = 0LL;
  ExpPlatformBinaryLock = 0LL;
  v1 = 0;
  for ( i = (int)ExpWorkerInitialization() >= 0; v1 < (unsigned int)KeNumberProcessors_0; ++v1 )
    ExInitializeProcessor(KiProcessorBlock[v1], 0);
  v3 = (unsigned __int8)ExpEventInitialization() != 0 && i;
  v4 = (unsigned __int8)ExpMutantInitialization() != 0 && v3;
  v5 = (unsigned __int8)ExpAeThresholdInitialization() != 0 && v4;
  v6 = (unsigned __int8)ExpInitializeCallbacks() != 0 && v5;
  v7 = (unsigned __int8)ExpSemaphoreInitialization() != 0 ? v6 : 0;
  v8 = (unsigned __int8)ExpTimerInitialization() != 0 ? v7 : 0;
  v9 = ExpProfileInitialization();
  ExpUuidLock = 0LL;
  ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014];
  v10 = v9 != 0 ? v8 : 0;
  if ( (int)ExpKeyedEventInitialization() < 0 )
    v10 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x20666E57u);
  ExpWnfDispatcher = (__int64)PoolWithTag;
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *(_DWORD *)v12 = 3148040;
    v12[3] = ExpWnfWorkItemRoutine;
    v12[4] = 0LL;
    v12[1] = 0LL;
    memset(v24, 0, 0x30uLL);
    WORD1(v24[0]) |= 1u;
    v24[1] = ExpWnfCreateServerSiloCallback;
    LOWORD(v24[0]) = 1;
    v24[5] = ExpWnfTerminateServerSiloCallback;
    if ( (int)PsRegisterMonitorServerSilo(0LL, L"NTOS_WNF", (__int64)v24, &ExpWnfSiloMonitor) >= 0 )
    {
      if ( (int)PsStartMonitorServerSilo(ExpWnfSiloMonitor) >= 0 )
        goto LABEL_8;
      PsUnregisterMonitorServerSilo((struct _EX_RUNDOWN_REF *)ExpWnfSiloMonitor);
    }
  }
  v10 = 0;
LABEL_8:
  v13 = (unsigned __int8)ExpWin32Initialization() != 0 ? v10 : 0;
  if ( (int)ExpWorkerFactoryInitialization() < 0 )
    v13 = 0;
  v14 = ExpSaInitialize() != 0 ? v13 : 0;
  v15 = ExpMicrocodeInitialization_0();
  if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741637 )
    v14 = 0;
  ExpUpdateProductSuiteType(1LL);
  v18 = 65537;
  v19 = 5;
  v20 = 1;
  v22 = ExpPcwHostCallback;
  v21 = 0LL;
  v23 = 0LL;
  if ( (int)ExRegisterHost((__int64 **)&ExpPcwExtensionHost, v16, (unsigned __int16 *)&v18) < 0 )
    ExpPcwExtensionHost = 0LL;
  ExpInitializeSvm();
  return v14;
}
