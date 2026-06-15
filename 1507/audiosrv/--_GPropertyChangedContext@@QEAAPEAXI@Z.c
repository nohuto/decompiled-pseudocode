/*
 * XREFs of ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x1800948B0
 * Callers:
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x1800371D0 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ??1?$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ @ 0x1800945DC (--1-$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ.c)
 *     ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800960E0 (-HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

PropertyChangedContext *__fastcall PropertyChangedContext::`scalar deleting destructor'(PropertyChangedContext *this)
{
  struct _TP_WORK *v2; // rcx
  __int64 v3; // rsi

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 5);
  if ( v2 )
    CloseThreadpoolWork(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 4));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
  operator delete(this);
  return this;
}
