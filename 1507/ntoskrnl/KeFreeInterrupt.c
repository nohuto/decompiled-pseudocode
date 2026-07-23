/*
 * XREFs of KeFreeInterrupt @ 0x14014AF7C
 * Callers:
 *     IoDisconnectInterrupt @ 0x1405682D8 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(_SLIST_ENTRY *a1)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&a1[16].Next[1534], a1);
}
