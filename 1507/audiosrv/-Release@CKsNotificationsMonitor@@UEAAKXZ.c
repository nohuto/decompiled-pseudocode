/*
 * XREFs of ?Release@CKsNotificationsMonitor@@UEAAKXZ @ 0x18003D070
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
