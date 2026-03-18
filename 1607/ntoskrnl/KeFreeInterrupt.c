/*
 * XREFs of KeFreeInterrupt @ 0x140123E44
 * Callers:
 *     IoDisconnectInterrupt @ 0x1405324F4 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(struct _SLIST_ENTRY *a1)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&a1[16].Next[1534], a1);
}
