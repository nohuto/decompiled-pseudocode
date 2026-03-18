/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1400C892C
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14000A2A0 (PoFxSendSystemLatencyUpdate.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EA64 (KeSetPriorityAndQuantumProcess.c)
 *     KeQueryTotalCycleTimeThread @ 0x140095D3C (KeQueryTotalCycleTimeThread.c)
 *     NtFlushProcessWriteBuffers @ 0x1400C8918 (NtFlushProcessWriteBuffers.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401FF7FC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140200FB8 (PpmSetExitLatencySamplingPercentage.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1404B9E68 (PsQueryTotalCycleTimeProcess.c)
 *     PspTerminateAllThreads @ 0x1405096F0 (PspTerminateAllThreads.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140030FBC (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140030FF0 (KeCopyAffinityEx.c)
 *     KiIpiSendPacket @ 0x1400C8A18 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1400C8A70 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
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
    KiIpiSendPacket(v3, (_DWORD)v5, (unsigned int)xHalFreeMessageTarget, 0, 0LL, 0LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
