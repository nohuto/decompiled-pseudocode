/*
 * XREFs of ??0CVpoContextProxy@@QEAA@PEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x180001914
 * Callers:
 *     AudioServerGetStreamVpoContext @ 0x1800016A0 (AudioServerGetStreamVpoContext.c)
 *     AudioServerGetEndpointVpoContext @ 0x180089C90 (AudioServerGetEndpointVpoContext.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001AC4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

CVpoContextProxy *__fastcall CVpoContextProxy::CVpoContextProxy(
        CVpoContextProxy *this,
        struct IStreamGroupProxy *a2,
        struct ISaDeviceProxy *a3,
        struct IVpoContext *a4)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>((char *)this + 8, a3);
  *((_QWORD *)this + 2) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IVpoContext *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
