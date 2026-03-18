/*
 * XREFs of Phase1InitializationIoReady @ 0x1407D05E0
 * Callers:
 *     Phase1Initialization @ 0x14059A0DC (Phase1Initialization.c)
 * Callees:
 *     WerLiveKernelInitSystem_0 @ 0x140001000 (WerLiveKernelInitSystem_0.c)
 *     TmInitSystemPhase2 @ 0x140001010 (TmInitSystemPhase2.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExNotifyWithProcessing @ 0x1400EDED8 (ExNotifyWithProcessing.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     HviIsAnyHypervisorPresent @ 0x140159E3C (HviIsAnyHypervisorPresent.c)
 *     InbvSetProgressBarSubset @ 0x140163120 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExQueryBootEntropyInformation @ 0x140598048 (ExQueryBootEntropyInformation.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1405C2C64 (CmpRegisterTraceLoggingProvider.c)
 *     VfNotifyVerifierOfEvent @ 0x140737430 (VfNotifyVerifierOfEvent.c)
 *     KeFreeInitializationCode @ 0x14079AA14 (KeFreeInitializationCode.c)
 *     SeRmInitPhase1 @ 0x1407BC118 (SeRmInitPhase1.c)
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 *     MmInitSystem @ 0x1407C8B48 (MmInitSystem.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 *     sub_1407CF6FC @ 0x1407CF6FC (sub_1407CF6FC.c)
 *     KeInitializeClock @ 0x1407CFC78 (KeInitializeClock.c)
 *     MmInitSystemDll @ 0x1407CFE98 (MmInitSystemDll.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 *     PsInitSystem @ 0x1407D07C8 (PsInitSystem.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     sub_1407DA410 @ 0x1407DA410 (sub_1407DA410.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 *     InitSafeBoot @ 0x1407F80B8 (InitSafeBoot.c)
 */

__int64 __fastcall Phase1InitializationIoReady(ULONG_PTR a1, char a2)
{
  int inited; // eax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  signed __int32 v10; // eax

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
  sub_1407CF6FC();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL, a1);
  sub_1407DA410();
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
  CurrentThread = KeGetCurrentThread();
  v8 = KeAbPreAcquire((ULONG_PTR)&KiDynamicProcessorLock, 0LL, 0LL, v7);
  v9 = v8;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&KiDynamicProcessorLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&KiDynamicProcessorLock, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  qword_140338E48 = (__int64)CurrentThread;
  MmFreeLoaderBlock();
  KeLoaderBlock_0 = 0LL;
  qword_140338E48 = 0LL;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&KiDynamicProcessorLock, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&KiDynamicProcessorLock, v10);
  KeAbPostRelease((ULONG_PTR)&KiDynamicProcessorLock);
  if ( !HviIsAnyHypervisorPresent() )
    KeEnableWatchdogTimeout = 1;
  return KeFreeInitializationCode();
}
