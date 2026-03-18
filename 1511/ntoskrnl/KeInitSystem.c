/*
 * XREFs of KeInitSystem @ 0x14074E20C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14002C3A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401304B0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KdEncodeDataBlock @ 0x14013365C (KdEncodeDataBlock.c)
 *     KiInitMachineDependent @ 0x1401336B4 (KiInitMachineDependent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeRelaxTimingConstraints @ 0x1401C3890 (KeRelaxTimingConstraints.c)
 *     KiInitializeProcessor @ 0x1403A7538 (KiInitializeProcessor.c)
 *     KiStartDpcThread @ 0x140521A80 (KiStartDpcThread.c)
 *     KeFreeInitializationCode @ 0x14072DA18 (KeFreeInitializationCode.c)
 *     MmDiscardDriverSection @ 0x14074E43C (MmDiscardDriverSection.c)
 *     MmFreeLoaderBlock @ 0x14074E52C (MmFreeLoaderBlock.c)
 *     KiIntSteerInit @ 0x14074EC6C (KiIntSteerInit.c)
 *     KiComputeNumaCosts @ 0x14074ED1C (KiComputeNumaCosts.c)
 */

char __fastcall KeInitSystem(int a1)
{
  ULONG ActiveProcessorCount; // r14d
  unsigned int v7; // eax
  __int64 v8; // rcx
  ULONG v9; // ebx
  __int64 *v10; // rsi
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  int v15; // eax
  int v22; // ecx

  if ( a1 != 1 )
  {
    ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
    MmFreeLoaderBlock();
    KeLoaderBlock_0 = 0LL;
    ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX >= 0 )
      KeEnableWatchdogTimeout = 1;
    KeFreeInitializationCode();
    if ( !KiFpuLeakage )
      MmDiscardDriverSection(KiSanitizeFpu);
    return 1;
  }
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiClockKeepAliveCycle = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / KeMaximumIncrement - 1)
                        / ActiveProcessorCount;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    if ( (HvlpFlags & 1) == 0 || (HvlEnlightenments & 0x20) != 0 )
    {
      KeDpcWatchdogPeriod = 0;
      v22 = 1;
      KiDPCTimeout = 0;
    }
    else
    {
      v22 = 0;
    }
    KeRelaxTimingConstraints(v22);
  }
  v7 = KeDpcWatchdogPeriod;
  if ( KeDpcWatchdogPeriod )
  {
    if ( (unsigned int)KeDpcWatchdogPeriod < 0x7D0 )
    {
      v7 = 2000;
      KeDpcWatchdogPeriod = 2000;
    }
    if ( v7 > 0x3A980 )
    {
      v7 = 240000;
      KeDpcWatchdogPeriod = 240000;
    }
  }
  v8 = (unsigned int)KiDPCTimeout;
  if ( KiDPCTimeout )
  {
    if ( (unsigned int)KiDPCTimeout < 0x14 )
    {
      v8 = 20LL;
      KiDPCTimeout = 20;
    }
    _RDX = 20000LL;
    if ( (unsigned int)v8 > 0x4E20 )
    {
      v8 = 20000LL;
      KiDPCTimeout = 20000;
    }
  }
  if ( ViVerifierEnabled )
  {
    _RDX = (unsigned int)KeVerifierDpcScalingFactor;
    if ( !KeVerifierDpcScalingFactor )
    {
      _RDX = 1LL;
      KeVerifierDpcScalingFactor = 1;
    }
    if ( (unsigned int)_RDX > 0x64 )
    {
      _RDX = 100LL;
      KeVerifierDpcScalingFactor = 100;
    }
    v8 = (unsigned int)(_RDX * v8);
    KeDpcWatchdogPeriod = _RDX * v7;
    KiDPCTimeout = v8;
  }
  v9 = 0;
  if ( ActiveProcessorCount )
  {
    v10 = KiProcessorBlock;
    do
    {
      v11 = *v10;
      KiInitializeProcessor(*v10);
      if ( KeThreadDpcEnable )
      {
        if ( (int)KiStartDpcThread(v11) < 0 )
          return 0;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < ActiveProcessorCount );
  }
  KiComputeNumaCosts(v8, _RDX);
  SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
  KiIntSteerInit();
  if ( KiInitMachineDependent(v13, v12) )
  {
    v14 = *(unsigned int *)(KiProcessorBlock[0] + 1524) * (unsigned __int64)KeMaximumIncrement / 0xA;
    KiShortExecutionCycles = v14 / 0xF0;
    KiCyclesPerClockQuantum = v14 / 3;
    KiDirectQuantumTarget = v14 / 3;
    KiLockQuantumTarget = 3 * (v14 / 3);
    KdEncodeDataBlock();
    v15 = KeExpandKernelStackAndCalloutInternal((void (__fastcall *)(__int64))KiVerifyScopesExecute, 0LL, 49152, 2, 0LL);
    if ( v15 < 0 )
      KeBugCheckEx(0x32u, v15, 0x5356694BuLL, 0LL, 0LL);
    return 1;
  }
  return 0;
}
