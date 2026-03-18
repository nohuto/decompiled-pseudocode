/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x1401D8D0C
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x1401242B8 (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 */

LONG __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
