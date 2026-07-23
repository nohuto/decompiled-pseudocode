/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x1403DD5DC
 * Callers:
 *     <none>
 * Callees:
 *     KiIpiSendPacket @ 0x1400C68B8 (KiIpiSendPacket.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeSetAffinityProcess @ 0x14014A628 (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     xHalTscSynchronization @ 0x1401BA75C (xHalTscSynchronization.c)
 *     KeSignalCallDpcSynchronize @ 0x1401D627C (KeSignalCallDpcSynchronize.c)
 *     KiInitializeProcessor @ 0x1403D34A8 (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x1403D36E8 (KeRestoreMtrrBroadcast.c)
 *     KiConfigureSchedulingInformation @ 0x1403D3734 (KiConfigureSchedulingInformation.c)
 *     KiConfigureProcessorBlock @ 0x1403D3C64 (KiConfigureProcessorBlock.c)
 *     KiUpdateNumberProcessors @ 0x1403DD734 (KiUpdateNumberProcessors.c)
 */

__int64 __fastcall KiInitializeDynamicProcessorDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _DWORD v9[44]; // [rsp+30h] [rbp-D8h] BYREF

  if ( (unsigned int)KeSignalCallDpcSynchronize(a4) )
  {
    KiUpdateNumberProcessors(*(unsigned int *)(*(_QWORD *)a2 + 36LL));
    KiInitializeProcessor(*(_QWORD *)a2);
    KiConfigureProcessorBlock(*(_QWORD *)a2);
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (unsigned __int16 *)KeActiveProcessors);
    v9[0] = 1310721;
    memset(&v9[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v9, *(_DWORD *)(*(_QWORD *)a2 + 36LL));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendPacket(0, (int)v9, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    off_1402F23C0();
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
