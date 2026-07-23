/*
 * XREFs of KeFreeInterrupt @ 0x1401243B4
 * Callers:
 *     IoDisconnectInterrupt @ 0x140532A34 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(_SLIST_ENTRY *a1)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&a1[16].Next[1534], a1);
}
