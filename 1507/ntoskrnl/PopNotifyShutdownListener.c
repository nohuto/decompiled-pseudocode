/*
 * XREFs of PopNotifyShutdownListener @ 0x140403F14
 * Callers:
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140403FF4 (PopShutdownSystem.c)
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
