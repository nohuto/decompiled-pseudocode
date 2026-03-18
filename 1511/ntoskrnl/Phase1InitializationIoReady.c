/*
 * XREFs of Phase1InitializationIoReady @ 0x140763CC8
 * Callers:
 *     Phase1Initialization @ 0x14052FD40 (Phase1Initialization.c)
 * Callees:
 *     WerLiveKernelInitSystem_0 @ 0x140001000 (WerLiveKernelInitSystem_0.c)
 *     TmInitSystemPhase2 @ 0x140001010 (TmInitSystemPhase2.c)
 *     ExNotifyWithProcessing @ 0x14009200C (ExNotifyWithProcessing.c)
 *     InbvSetProgressBarSubset @ 0x140136BB8 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExQueryBootEntropyInformation @ 0x14052F634 (ExQueryBootEntropyInformation.c)
 *     CmpRegisterTraceLoggingProvider @ 0x14054B8BC (CmpRegisterTraceLoggingProvider.c)
 *     VfNotifyVerifierOfEvent @ 0x1406B70C8 (VfNotifyVerifierOfEvent.c)
 *     MmInitSystem @ 0x14074C514 (MmInitSystem.c)
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 *     sub_1407621B8 @ 0x1407621B8 (sub_1407621B8.c)
 *     MmInitSystemDll @ 0x1407628DC (MmInitSystemDll.c)
 *     SeRmInitPhase1 @ 0x140762928 (SeRmInitPhase1.c)
 *     PsInitSystem @ 0x140763DCC (PsInitSystem.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     sub_14076D710 @ 0x14076D710 (sub_14076D710.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
 *     PspInitPhase3 @ 0x140772470 (PspInitPhase3.c)
 *     InitSafeBoot @ 0x140781CE4 (InitSafeBoot.c)
 */

char __fastcall Phase1InitializationIoReady(__int64 a1, char a2)
{
  int inited; // eax
  __int64 v5; // rcx
  char result; // al

  CmpRegisterTraceLoggingProvider();
  inited = EmInitSystem(1, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( InitSafeBootMode )
  {
    LOBYTE(v5) = a2;
    InitSafeBoot(v5);
  }
  MmInitSystem(2LL, a1);
  sub_14076D710();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  sub_1407621B8();
  if ( !(unsigned __int8)PsInitSystem(2LL, a1) )
    KeBugCheck(0x6Bu);
  MmInitSystemDll();
  if ( !SeRmInitPhase1() )
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
