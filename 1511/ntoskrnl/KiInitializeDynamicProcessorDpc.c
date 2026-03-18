/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x1403B10E8
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x140095FD4 (KiIpiSendPacket.c)
 *     KeSetAffinityProcess @ 0x14014075C (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     xHalTscSynchronization @ 0x1401AE028 (xHalTscSynchronization.c)
 *     KeSignalCallDpcSynchronize @ 0x1401C74A4 (KeSignalCallDpcSynchronize.c)
 *     KiInitializeProcessor @ 0x1403A7538 (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x1403A76C0 (KeRestoreMtrrBroadcast.c)
 *     KiConfigureSchedulingInformation @ 0x1403A8B9C (KiConfigureSchedulingInformation.c)
 *     KiConfigureProcessorBlock @ 0x1403A90CC (KiConfigureProcessorBlock.c)
 *     KiUpdateNumberProcessors @ 0x1403B1244 (KiUpdateNumberProcessors.c)
 */

__int64 __fastcall KiInitializeDynamicProcessorDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _DWORD v9[44]; // [rsp+30h] [rbp-D8h] BYREF

  if ( (unsigned int)KeSignalCallDpcSynchronize(a4, a2, (__int64)a3) )
  {
    KiUpdateNumberProcessors(*(unsigned int *)(*(_QWORD *)a2 + 36LL));
    KiInitializeProcessor(*(_QWORD *)a2);
    KiConfigureProcessorBlock(*(_QWORD *)a2);
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (unsigned __int16 *)KeActiveProcessors);
    memset(&v9[1], 0, 164);
    v9[0] = 1310721;
    KeAddProcessorAffinityEx(v9, *(_DWORD *)(*(_QWORD *)a2 + 36LL));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendPacket(0, (unsigned __int16 *)v9, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    off_1402D2720();
    KiConfigureSchedulingInformation(*(_QWORD *)a2, 1);
    KiBarrierWait = 0;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    while ( !*(_BYTE *)(a2 + 8) )
      _mm_pause();
  }
  result = KiConfigureSchedulingInformation((__int64)KeGetCurrentPrcb(), 1);
  _InterlockedDecrement(a3);
  return result;
}
