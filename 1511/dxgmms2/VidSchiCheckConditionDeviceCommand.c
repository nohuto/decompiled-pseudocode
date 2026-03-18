/*
 * XREFs of VidSchiCheckConditionDeviceCommand @ 0x1C00127F8
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E980 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C000EA40 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckConditionDeviceCommand(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 156) && !*(_DWORD *)(a2 + 104) )
  {
    v3 = 1;
    if ( (*(_BYTE *)(a2 + 25) & 1) != 0 )
      return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 16LL) + 8LL) == 0;
    return v3;
  }
  return v2;
}
