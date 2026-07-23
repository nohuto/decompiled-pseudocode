/*
 * XREFs of KeFreeInterrupt @ 0x140115A8C
 * Callers:
 *     IoDisconnectInterrupt @ 0x1404F405C (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(_SLIST_ENTRY *a1)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&a1[16].Next[1534], a1);
}
