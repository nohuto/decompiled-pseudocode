/*
 * XREFs of ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0075914
 * Callers:
 *     VfEvtIoStop @ 0x1C00D3650 (VfEvtIoStop.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     Template_pp @ 0x1C0075A80 (Template_pp.c)
 */

bool __fastcall PerfEvtIoStopStart(unsigned __int64 Queue, _GUID *pActivityId)
{
  unsigned __int16 *v3; // r8
  _FX_DRIVER_GLOBALS *v4; // rdi
  bool v5; // si
  FxDeviceBase *m_DeviceBase; // rbx
  unsigned __int16 m_ObjectSize; // r14
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rdi
  unsigned __int64 v9; // rcx
  const void *RegHandle; // rbx
  FxIoQueue *pQueue; // [rsp+50h] [rbp+8h] BYREF

  v3 = (unsigned __int16 *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
    v3 = (unsigned __int16 *)((char *)v3 - *v3);
  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v3 + 2);
  v5 = (v4->FxEnhancedVerifierOptions & 0xF00000) != 0;
  if ( (v4->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    FxObjectHandleGetPtr(v4, Queue, 0x1003u, (void **)&pQueue);
    m_DeviceBase = pQueue->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    Method = v4->Driver->m_DriverDeviceAdd.Method;
    EtwActivityIdControl(3u, pActivityId);
    if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    {
      RegHandle = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        RegHandle = 0LL;
      Template_pp(v9, &FX_EVTIOSTOP_START, pActivityId, Method, RegHandle);
    }
  }
  return v5;
}
