/*
 * XREFs of ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0071D18
 * Callers:
 *     VfEvtIoStop @ 0x1C00C80E0 (VfEvtIoStop.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     Template_pp @ 0x1C0071E78 (Template_pp.c)
 */

char __fastcall PerfEvtIoStopStart(unsigned __int64 Queue, _GUID *pActivityId)
{
  unsigned __int16 *v2; // r8
  char v3; // di
  __int64 v5; // rsi
  FxDeviceBase *m_DeviceBase; // rbx
  const void *RegHandle; // rbx
  const void *v8; // rsi
  unsigned __int64 v9; // rcx
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned __int16 *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  v3 = 1;
  if ( (Queue & 1) != 0 )
    v2 = (unsigned __int16 *)((char *)v2 - *v2);
  v5 = *((_QWORD *)v2 + 2);
  if ( (*(_DWORD *)(v5 + 396) & 0xF00000) == 0 )
    return 0;
  FxObjectHandleGetPtr(*((_FX_DRIVER_GLOBALS **)v2 + 2), Queue, 0x1003u, (void **)&pQueue);
  m_DeviceBase = pQueue->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    RegHandle = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    RegHandle = 0LL;
  v8 = *(const void **)(*(_QWORD *)(v5 + 72) + 168LL);
  EtwActivityIdControl(3u, pActivityId);
  if ( ((__int64)WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink & 1) != 0 )
    Template_pp(v9, &FX_EVTIOSTOP_START, pActivityId, v8, RegHandle);
  return v3;
}
