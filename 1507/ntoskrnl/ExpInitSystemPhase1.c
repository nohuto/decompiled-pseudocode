/*
 * XREFs of ExpInitSystemPhase1 @ 0x1407C3074
 * Callers:
 *     ExInitSystem @ 0x1407DF778 (ExInitSystem.c)
 * Callees:
 *     ExpMicrocodeInitialization_0 @ 0x1400012B8 (ExpMicrocodeInitialization_0.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     ExInitializeProcessor @ 0x14015F3F0 (ExInitializeProcessor.c)
 *     ExpSaInitialize @ 0x14016CC14 (ExpSaInitialize.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExpWnfInitServerSilo @ 0x1405934AC (ExpWnfInitServerSilo.c)
 *     ExRegisterHost @ 0x140594978 (ExRegisterHost.c)
 *     ExpWin32Initialization @ 0x1407C32A0 (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x1407C3D10 (ExpTimerInitialization.c)
 *     ExpAeThresholdInitialization @ 0x1407DB8E4 (ExpAeThresholdInitialization.c)
 *     ExpUpdateProductSuiteType @ 0x1407DFE10 (ExpUpdateProductSuiteType.c)
 *     ExpWorkerInitialization @ 0x1407E01DC (ExpWorkerInitialization.c)
 *     ExpInitializeCallbacks @ 0x1407E3A04 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x1407E4030 (ExpKeyedEventInitialization.c)
 *     ExpInitializeSvm @ 0x1407E5748 (ExpInitializeSvm.c)
 *     ExpWorkerFactoryInitialization @ 0x1407E66C8 (ExpWorkerFactoryInitialization.c)
 *     ExpMutantInitialization @ 0x1407E7998 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x1407E7DF0 (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x1407E83B8 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x1407E8448 (ExpEventInitialization.c)
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
  int v18; // [rsp+20h] [rbp-38h] BYREF
  __int16 v19; // [rsp+24h] [rbp-34h]
  int v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h]
  void (__fastcall *v22)(int); // [rsp+38h] [rbp-20h]
  __int64 v23; // [rsp+40h] [rbp-18h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  ExpHostListLock = 0LL;
  ExpSpinCount = MaximumProcessorCount > 1 ? 0x400 : 0;
  qword_14077E2F8 = (__int64)&ExpHostList;
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
  if ( !PoolWithTag
    || (memset(PoolWithTag, 0, 0x30uLL),
        *(_DWORD *)v12 = 3148040,
        v12[3] = ExpWnfWorkItemRoutine,
        v12[4] = 0LL,
        v12[1] = 0LL,
        !ExpWnfInitServerSilo()) )
  {
    v10 = 0;
  }
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
