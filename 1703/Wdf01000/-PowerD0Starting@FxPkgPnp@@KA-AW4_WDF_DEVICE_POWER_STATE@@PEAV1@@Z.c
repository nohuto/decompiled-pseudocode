/*
 * XREFs of ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0037720
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C009DAFC (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009DB84 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009DC10 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0Starting(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  FxPnpDeviceD0Entry *p_m_DeviceD0Entry; // rbx
  char v4; // di
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v6; // rdx
  bool v7; // zf
  FxPkgPnp *m_PkgPnp; // rax
  FxDevice *m_Device; // rsi
  int v10; // eax
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  __int64 result; // rax
  int v13; // r14d
  FxPrePostCallback *v14; // rcx

  m_DeviceBase = This->m_DeviceBase;
  p_m_DeviceD0Entry = &This->m_DeviceD0Entry;
  v4 = 0;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  v7 = m_ObjectSize == 0;
  This->m_DeviceD0Entry.m_PreviousState = This->m_DevicePowerState;
  m_PkgPnp = This->m_DeviceD0Entry.m_PkgPnp;
  if ( v7 )
    v6 = 0LL;
  This->m_DeviceD0Entry.m_Device = v6;
  m_Device = m_PkgPnp->m_Device;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    v10 = p_m_DeviceD0Entry->InvokeClient(p_m_DeviceD0Entry);
    if ( v10 < 0 )
      return 836LL;
    v4 = 2;
    goto LABEL_6;
  }
  v13 = FxPrePostCallback::IssuePreCxCallbacksStateful(p_m_DeviceD0Entry, m_Device);
  v14 = p_m_DeviceD0Entry;
  if ( v13 < 0 )
    goto LABEL_16;
  v13 = p_m_DeviceD0Entry->InvokeClient(p_m_DeviceD0Entry);
  v4 = 1;
  if ( v13 < 0 )
  {
    v14 = p_m_DeviceD0Entry;
LABEL_16:
    FxPrePostCallback::IssueCleanupCxCallbacks(v14, m_Device);
    goto LABEL_17;
  }
  v4 = 2;
LABEL_17:
  if ( v13 < 0 )
  {
LABEL_21:
    result = 861LL;
    if ( (unsigned __int8)v4 >= 2u )
      return result;
    return 836LL;
  }
  v10 = FxPrePostCallback::IssuePostCxCallbacks(p_m_DeviceD0Entry, m_Device);
LABEL_6:
  if ( v10 < 0 )
    goto LABEL_21;
  if ( This->m_SleepStudyTrackReferences == 1 )
  {
    m_SleepStudy = This->m_SleepStudy;
    if ( m_SleepStudy )
    {
      if ( m_SleepStudy->ComponentPowerRef )
        SleepstudyHelper_ResetComponentsStartTime();
    }
  }
  return 784LL;
}
