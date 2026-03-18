/*
 * XREFs of ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0063134
 * Callers:
 *     VfEvtDeviceD0Exit @ 0x1C00B7EF0 (VfEvtDeviceD0Exit.c)
 * Callees:
 *     Template_pp @ 0x1C0063468 (Template_pp.c)
 */

char __fastcall PerfEvtDeviceD0ExitStart(unsigned __int64 Handle, _GUID *pActivityId)
{
  unsigned __int16 *v2; // r8
  char v3; // bl
  __int64 v6; // rcx
  const void *v7; // rbp
  unsigned __int64 v8; // rcx

  v2 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  v3 = 1;
  if ( (Handle & 1) != 0 )
    v2 = (unsigned __int16 *)((char *)v2 - *v2);
  v6 = *((_QWORD *)v2 + 2);
  if ( (*(_DWORD *)(v6 + 392) & 0xF00000) == 0 )
    return 0;
  v7 = *(const void **)(*(_QWORD *)(v6 + 72) + 168LL);
  EtwActivityIdControl(3u, pActivityId);
  if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
    Template_pp(v8, &FX_POWER_D0_EXIT_START, pActivityId, v7, (const void *)Handle);
  return v3;
}
