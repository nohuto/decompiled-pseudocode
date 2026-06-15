/*
 * XREFs of ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x180094844
 * Callers:
 *     ??1?$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ @ 0x1800945B4 (--1-$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ.c)
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180095C50 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800967D0 (-OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

DefaultChangedContext *__fastcall DefaultChangedContext::`scalar deleting destructor'(DefaultChangedContext *this)
{
  struct _TP_WORK *v2; // rcx
  __int64 v3; // rsi

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 2);
  if ( v2 )
    CloseThreadpoolWork(v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 1));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
  operator delete(this);
  return this;
}
