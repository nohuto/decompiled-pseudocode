/*
 * XREFs of LdrpCorProcessImports @ 0x180083680
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18000E5C0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpSendDllNotifications @ 0x18000F690 (LdrpSendDllNotifications.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     AVrfDllLoadNotification @ 0x1800836E8 (AVrfDllLoadNotification.c)
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
