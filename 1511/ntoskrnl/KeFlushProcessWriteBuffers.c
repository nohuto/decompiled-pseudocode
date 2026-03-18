/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x140095EE8
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140094B64 (KeSetPriorityAndQuantumProcess.c)
 *     NtFlushProcessWriteBuffers @ 0x140095ED4 (NtFlushProcessWriteBuffers.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400970CC (PoFxSendSystemLatencyUpdate.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400F1340 (KeQueryTotalCycleTimeThread.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401E6E54 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1401E85A8 (PpmSetExitLatencySamplingPercentage.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1403B4B54 (PsQueryTotalCycleTimeProcess.c)
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     KiIpiSendPacket @ 0x140095FD4 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x140096030 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(char a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  int v3; // ebx
  int v4; // eax
  unsigned __int16 *v5; // rdx
  __int64 result; // rax
  unsigned __int16 v7[88]; // [rsp+30h] [rbp-C8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( a1 )
  {
    v3 = 1;
    v4 = KeNumberProcessors_0 - 1;
    LODWORD(v5) = 0;
  }
  else
  {
    KeCopyAffinityEx((__int64)v7, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(v7, CurrentPrcb->Number);
    v4 = KeCountSetBitsAffinityEx(v7);
    v5 = v7;
  }
  if ( v4 )
  {
    KiIpiSendPacket(v3, (_DWORD)v5, (unsigned int)PopPoCoalescinCallback, 0, 0LL, 0LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
