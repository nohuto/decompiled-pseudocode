/*
 * XREFs of ?QueryInterface@CKsNotificationsMonitor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009B710
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CKsNotificationsMonitor::QueryInterface(
        CKsNotificationsMonitor *this,
        const struct _GUID *a2,
        void **a3)
{
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( *(_OWORD *)a2 != *(_OWORD *)&IID_IUnknown
    && (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data4) )
  {
    return 2147500034LL;
  }
  *a3 = this;
  (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
