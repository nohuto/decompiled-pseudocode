/*
 * XREFs of PopSetDripsWatchdog @ 0x1406BD4C4
 * Callers:
 *     PdcPoResiliencyClient @ 0x1406B76EC (PdcPoResiliencyClient.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406BD240 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     PopCalculateIdleInformation @ 0x14023D4A8 (PopCalculateIdleInformation.c)
 *     PopAcquireDripsWatchdogLock @ 0x1406BCF40 (PopAcquireDripsWatchdogLock.c)
 */

void PopSetDripsWatchdog()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v2; // ax
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]

  if ( PopDripsWatchdog )
  {
    PopAcquireDripsWatchdogLock();
    qword_140357138 = 0LL;
    v0 = MEMORY[0xFFFFF78000000008];
    if ( !qword_140357130 )
    {
      qword_140357130 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v4);
      qword_140357120 = v5;
      LODWORD(qword_140357118) = v6;
    }
    if ( !qword_140357128 )
    {
      HIDWORD(qword_140357118) = DWORD1(xmmword_14032E9C0);
      qword_140357128 = v0;
    }
    if ( !qword_140357140 )
      qword_140357140 = qword_1403537E8;
    qword_140357148 = 0LL;
    v3[1] = -1LL;
    v3[0] = 0LL;
    KeSetTimer2((__int64)&unk_1403571D0, -10000000LL * (unsigned int)PopDripsWatchdog, 0LL, (__int64)v3);
    ExReleaseResourceLite(&stru_140357168);
    CurrentThread = KeGetCurrentThread();
    v2 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v2;
    if ( !v2
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
