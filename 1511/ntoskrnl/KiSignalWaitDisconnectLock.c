/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x1401CA538
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x140115E6C (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
