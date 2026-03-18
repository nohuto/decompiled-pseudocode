/*
 * XREFs of ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C00633D8
 * Callers:
 *     VfEvtIoStop @ 0x1C00B90C0 (VfEvtIoStop.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     Template_pp @ 0x1C0063468 (Template_pp.c)
 */

void __fastcall PerfEvtIoStopStop(unsigned __int64 Queue, _GUID *pActivityId)
{
  unsigned __int16 *v2; // r8
  _FX_DRIVER_GLOBALS *v4; // rbx
  FxDeviceBase *m_DeviceBase; // rcx
  const void *RegHandle; // rcx
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned __int16 *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
    v2 = (unsigned __int16 *)((char *)v2 - *v2);
  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v2 + 2);
  FxObjectHandleGetPtr(v4, Queue, 0x1003u, (void **)&pQueue);
  m_DeviceBase = pQueue->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    RegHandle = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    RegHandle = 0LL;
  if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
    Template_pp(
      (unsigned __int64)RegHandle,
      &FX_EVTIOSTOP_STOP,
      pActivityId,
      v4->Driver->m_DriverDeviceAdd.Method,
      RegHandle);
}
