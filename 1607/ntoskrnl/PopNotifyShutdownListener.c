/*
 * XREFs of PopNotifyShutdownListener @ 0x1403DF960
 * Callers:
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1403DFA40 (PopShutdownSystem.c)
 * Callees:
 *     <none>
 */

PVOID PopNotifyShutdownListener()
{
  PVOID result; // rax

  result = PopShutdownNotificationCallback;
  if ( PopShutdownNotificationCallback )
    return (PVOID)(*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                            + 2));
  return result;
}
