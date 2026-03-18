/*
 * XREFs of VidSchiCheckConditionDeviceCommand @ 0x1C0001028
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0019488 (VidSchiProcessPrimariesTerminationList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckConditionDeviceCommand(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 104) )
  {
    v3 = 1;
    if ( (*(_BYTE *)(a2 + 25) & 1) != 0 )
      return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 16LL) + 8LL) == 0;
    return v3;
  }
  return v2;
}
