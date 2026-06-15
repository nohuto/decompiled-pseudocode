/*
 * XREFs of ?Release@CKsNotificationsMonitor@@UEAAKXZ @ 0x18003D630
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x18003D1D0 (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CKsNotificationsMonitor::Release(CKsNotificationsMonitor *this)
{
  signed __int32 v1; // edi
  unsigned __int32 v2; // edi

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF);
  --CKsNotificationsMonitor::m_cRefAll;
  v2 = v1 - 1;
  if ( !v2 && this )
    (*(void (__fastcall **)(CKsNotificationsMonitor *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  return v2;
}
