/*
 * XREFs of ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x18008AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008A848 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008AC94 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall CKsSoftwareNotificationsMonitor::OnNotify(
        CKsSoftwareNotificationsMonitor *this,
        __int64 a2,
        const struct _GUID *a3)
{
  if ( *((_DWORD *)this + 7) == 3 )
    CKsSoftwareNotificationsMonitor::OnFormatCapsChange(this);
  else
    CKsSoftwareNotificationsMonitor::OnVolumeLimitCapsChange(this);
  return 0LL;
}
