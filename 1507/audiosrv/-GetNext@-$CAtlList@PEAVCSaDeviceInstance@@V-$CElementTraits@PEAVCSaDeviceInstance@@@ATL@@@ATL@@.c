/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCSaDeviceInstance@@V?$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@QEAAAEAPEAVCSaDeviceInstance@@AEAPEAU__POSITION@@@Z @ 0x1800745A4
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001D4B0 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ??1CAudioStream@@MEAA@XZ @ 0x18001E0B0 (--1CAudioStream@@MEAA@XZ.c)
 *     ?FindMatchingSaDevice@CEndpointSaDeviceLists@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAVCSaDeviceInstance@@@Z @ 0x180074110 (-FindMatchingSaDevice@CEndpointSaDeviceLists@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDeviceGraph@@@Z @ 0x180074184 (-FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDe.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x180095418 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x180095A7C (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x180095F88 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x180096680 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x180097464 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x180097E2C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::GetNext(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
