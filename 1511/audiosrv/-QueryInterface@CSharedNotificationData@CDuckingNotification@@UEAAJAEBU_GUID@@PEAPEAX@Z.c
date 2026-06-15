/*
 * XREFs of ?QueryInterface@CSharedNotificationData@CDuckingNotification@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDuckingNotification::CSharedNotificationData::QueryInterface(
        CDuckingNotification::CSharedNotificationData *this,
        const struct _GUID *a2,
        void **a3)
{
  return CUnknown::QueryInterface(this, a2, a3);
}
