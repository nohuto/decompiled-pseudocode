/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x140401918
 * Callers:
 *     <none>
 * Callees:
 *     KiIpiSendPacket @ 0x140129790 (KiIpiSendPacket.c)
 *     KeSetAffinityProcess @ 0x14016DD9C (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     xHalTscSynchronization @ 0x1401E48A0 (xHalTscSynchronization.c)
 *     KeSignalCallDpcSynchronize @ 0x140204168 (KeSignalCallDpcSynchronize.c)
 *     KiInitializeProcessor @ 0x1403F8C60 (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x1403FA0DC (KeRestoreMtrrBroadcast.c)
 *     KiConfigureSchedulingInformation @ 0x1403FA120 (KiConfigureSchedulingInformation.c)
 *     KiConfigureProcessorBlock @ 0x1403FA778 (KiConfigureProcessorBlock.c)
 *     KiUpdateNumberProcessors @ 0x140401AA4 (KiUpdateNumberProcessors.c)
 */

__int64 __fastcall KiInitializeDynamicProcessorDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned int v6; // ecx
  char v7; // r8
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _DWORD v12[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v13[21]; // [rsp+38h] [rbp-D0h] BYREF

  if ( (unsigned int)KeSignalCallDpcSynchronize(a4) )
  {
    KiUpdateNumberProcessors(*(unsigned int *)(*(_QWORD *)a2 + 36LL));
    KiInitializeProcessor(*(_QWORD *)a2);
    KiConfigureProcessorBlock(*(_QWORD *)a2);
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (__int16 *)KeActiveProcessors);
    v12[1] = 0;
    v12[0] = 1310721;
    memset(v13, 0, 0xA0uLL);
    v6 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(*(_QWORD *)a2 + 36LL)];
    v7 = v6 & 0x3F;
    v8 = v6 >> 6;
    if ( (_DWORD)v8 )
      LOWORD(v12[0]) = v8 + 1;
    v13[(unsigned int)v8] = v13[v8] | (1LL << v7);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendPacket(0, (unsigned __int16 *)v12, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    off_140321870();
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
