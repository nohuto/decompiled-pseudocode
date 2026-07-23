/*
 * XREFs of ExpInitSystemPhase1 @ 0x14079EB74
 * Callers:
 *     ExInitSystem @ 0x1407B5704 (ExInitSystem.c)
 * Callees:
 *     ExpMicrocodeInitialization_0 @ 0x140001300 (ExpMicrocodeInitialization_0.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140087824 (KeQueryMaximumProcessorCountEx.c)
 *     ExInitializeProcessor @ 0x14013CA8C (ExInitializeProcessor.c)
 *     RtlGetProductInfo @ 0x140148640 (RtlGetProductInfo.c)
 *     ExpSaInitialize @ 0x1401493D8 (ExpSaInitialize.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExRegisterHost @ 0x140553960 (ExRegisterHost.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x1405760A8 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExpTimerInitialization @ 0x14079DF80 (ExpTimerInitialization.c)
 *     ExpWin32Initialization @ 0x14079E650 (ExpWin32Initialization.c)
 *     ExpKeyedEventInitialization @ 0x1407A1B44 (ExpKeyedEventInitialization.c)
 *     ExpProfileInitialization @ 0x1407A1E30 (ExpProfileInitialization.c)
 *     ExpMutantInitialization @ 0x1407A1ED4 (ExpMutantInitialization.c)
 *     ExpSemaphoreInitialization @ 0x1407A1F98 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x1407A2028 (ExpEventInitialization.c)
 *     ExpInitializeCallbacks @ 0x1407A20B8 (ExpInitializeCallbacks.c)
 *     ExpAeThresholdInitialization @ 0x1407B1108 (ExpAeThresholdInitialization.c)
 *     ExpWorkerInitialization @ 0x1407B4A64 (ExpWorkerInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x1407BB3A4 (ExpWorkerFactoryInitialization.c)
 *     ExpInitializeSvm @ 0x1407BB558 (ExpInitializeSvm.c)
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
  char v18[8]; // [rsp+30h] [rbp-40h] BYREF
  int v19; // [rsp+38h] [rbp-38h]
  int v20; // [rsp+40h] [rbp-30h] BYREF
  __int16 v21; // [rsp+44h] [rbp-2Ch]
  int v22; // [rsp+48h] [rbp-28h]
  __int64 v23; // [rsp+50h] [rbp-20h]
  void (__fastcall *v24)(int); // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  ULONG ReturnedProductType; // [rsp+90h] [rbp+20h] BYREF

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  ExpHostListLock = 0LL;
  ExpSpinCount = MaximumProcessorCount > 1 ? 0x400 : 0;
  qword_1407472F0 = (__int64)&ExpHostList;
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
  v8 = ExpTimerInitialization() ? v7 : 0;
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
  }
  else
  {
    v10 = 0;
  }
  v13 = ExpWin32Initialization() ? v10 : 0;
  if ( (int)ExpWorkerFactoryInitialization() < 0 )
    v13 = 0;
  v14 = ExpSaInitialize() != 0 ? v13 : 0;
  v15 = ExpMicrocodeInitialization_0();
  if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741637 )
    v14 = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType)
    && ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)v18)
    && MEMORY[0xFFFFF78000000264] != v19
    && (MEMORY[0xFFFFF78000000264] != 2 || v19 != 3) )
  {
    MEMORY[0xFFFFF78000000264] = v19;
  }
  v20 = 65537;
  v21 = 5;
  v22 = 1;
  v24 = ExpPcwHostCallback;
  v23 = 0LL;
  v25 = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v16, (unsigned __int16 *)&v20) < 0 )
    ExpPcwExtensionHost = 0LL;
  ExpInitializeSvm();
  return v14;
}
