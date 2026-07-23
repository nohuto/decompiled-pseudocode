/*
 * XREFs of Phase1InitializationIoReady @ 0x1407934EC
 * Callers:
 *     Phase1Initialization @ 0x14054EDB4 (Phase1Initialization.c)
 * Callees:
 *     WerLiveKernelInitSystem_0 @ 0x140001000 (WerLiveKernelInitSystem_0.c)
 *     TmInitSystemPhase2 @ 0x140001008 (TmInitSystemPhase2.c)
 *     ExNotifyWithProcessing @ 0x1400098E0 (ExNotifyWithProcessing.c)
 *     InbvSetProgressBarSubset @ 0x140139F48 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 *     ExQueryBootEntropyInformation @ 0x1405813E8 (ExQueryBootEntropyInformation.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1405814A4 (CmpRegisterTraceLoggingProvider.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028E0 (VfNotifyVerifierOfEvent.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 *     PsInitSystem @ 0x140793634 (PsInitSystem.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 *     MmInitSystem @ 0x1407A39F8 (MmInitSystem.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     SeRmInitPhase1 @ 0x1407B2DB0 (SeRmInitPhase1.c)
 *     ExInitLicenseData @ 0x1407B505C (ExInitLicenseData.c)
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
 *     SaveNodeDistanceInformation @ 0x1407BC5F4 (SaveNodeDistanceInformation.c)
 *     MmInitSystemDll @ 0x1407BCFB8 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 *     InitSafeBoot @ 0x1407CD104 (InitSafeBoot.c)
 */

char __fastcall Phase1InitializationIoReady(__int64 a1, char a2)
{
  int v4; // eax
  int inited; // eax
  __int64 v6; // rcx
  char result; // al
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v8) = 2097182;
  *((_QWORD *)&v8 + 1) = L"\\Driver\\WscVReg";
  if ( CmEnableVReg )
  {
    v4 = IoCreateDriver(&v8, (__int64 (__fastcall *)(PVOID, _QWORD))VRegSetup);
    if ( v4 < 0 )
      KeBugCheckEx(0x51u, 0x1EuLL, v4, 0LL, 0LL);
  }
  CmpRegisterTraceLoggingProvider();
  inited = EmInitSystem(1LL, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( InitSafeBootMode )
  {
    LOBYTE(v6) = a2;
    InitSafeBoot(v6);
  }
  MmInitSystem(2LL, a1);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  ExInitLicenseData();
  if ( !(unsigned __int8)PsInitSystem(2LL, a1) )
    KeBugCheck(0x6Bu);
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  if ( !(unsigned __int8)PspInitPhase3() )
    KeBugCheck(0x6Bu);
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyWithProcessing(ExCbPhase1InitComplete, 0LL, 0LL, 0LL);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(5);
  WerLiveKernelInitSystem_0();
  ExQueryBootEntropyInformation(0LL);
  result = KeInitSystem(2);
  if ( !result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
