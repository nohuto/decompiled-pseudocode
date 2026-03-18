/*
 * XREFs of ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0075734
 * Callers:
 *     VfEvtDeviceD0Exit @ 0x1C00D23B0 (VfEvtDeviceD0Exit.c)
 * Callees:
 *     Template_pp @ 0x1C0075A80 (Template_pp.c)
 */

bool __fastcall PerfEvtDeviceD0ExitStart(unsigned __int64 Handle, _GUID *pActivityId)
{
  unsigned __int16 *v4; // r8
  __int64 v5; // rcx
  bool v6; // di
  const void *v7; // rbp

  v4 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    v4 = (unsigned __int16 *)((char *)v4 - *v4);
  v5 = *((_QWORD *)v4 + 2);
  v6 = (*(_DWORD *)(v5 + 404) & 0xF00000) != 0;
  if ( (*(_DWORD *)(v5 + 404) & 0xF00000) != 0 )
  {
    v7 = *(const void **)(*(_QWORD *)(v5 + 72) + 168LL);
    EtwActivityIdControl(3u, pActivityId);
    if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      Template_pp(
        LODWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc),
        &FX_POWER_D0_EXIT_START,
        pActivityId,
        v7,
        (const void *)Handle);
  }
  return v6;
}
