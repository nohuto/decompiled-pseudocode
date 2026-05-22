/*
 * XREFs of ?InternalClose@?$HandleT@VCMNotificationTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18008E8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::CMNotificationTraits>::InternalClose(
        __int64 a1)
{
  return (unsigned int)CM_Unregister_Notification(*(_QWORD *)(a1 + 8)) == 0;
}
