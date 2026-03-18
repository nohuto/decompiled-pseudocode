/*
 * XREFs of PopNotifyShutdownListener @ 0x1403B2C74
 * Callers:
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1403B2D54 (PopShutdownSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  result = PopShutdownNotificationCallback;
  if ( PopShutdownNotificationCallback )
    return (*(__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback)(*(_QWORD *)(PopShutdownNotificationCallback
                                                                                         + 8));
  return result;
}
