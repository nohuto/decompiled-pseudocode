/*
 * XREFs of KiReleaseInterruptConnectLock @ 0x140155820
 * Callers:
 *     KeMaskInterrupt @ 0x14014B230 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x14014B3DC (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x140155620 (KiConnectInterrupt.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseInterruptConnectLock(unsigned __int8 a1, struct _GROUP_AFFINITY *a2)
{
  __writecr8(a1);
  KeRevertToUserGroupAffinityThread(a2);
}
