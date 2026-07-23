/*
 * XREFs of LdrpCorProcessImports @ 0x180087938
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002F25C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     LdrpSendDllNotifications @ 0x18002E648 (LdrpSendDllNotifications.c)
 *     AVrfDllLoadNotification @ 0x1800879A0 (AVrfDllLoadNotification.c)
 */

__int64 __fastcall LdrpCorProcessImports(__int64 a1)
{
  int Notification; // edi

  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 6;
  Notification = AVrfDllLoadNotification(a1);
  if ( Notification >= 0 )
  {
    LdrpSendDllNotifications(a1, 1u);
    LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 7;
  }
  return (unsigned int)Notification;
}
