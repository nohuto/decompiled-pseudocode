/*
 * XREFs of LdrpCorProcessImports @ 0x1800781A8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180040678 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     LdrpSendDllNotifications @ 0x1800419B0 (LdrpSendDllNotifications.c)
 *     AVrfDllLoadNotification @ 0x180078210 (AVrfDllLoadNotification.c)
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
