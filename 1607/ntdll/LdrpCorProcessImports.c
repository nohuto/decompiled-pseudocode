/*
 * XREFs of LdrpCorProcessImports @ 0x180087948
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002F26C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     LdrpSendDllNotifications @ 0x18002E658 (LdrpSendDllNotifications.c)
 *     AVrfDllLoadNotification @ 0x1800879B0 (AVrfDllLoadNotification.c)
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
