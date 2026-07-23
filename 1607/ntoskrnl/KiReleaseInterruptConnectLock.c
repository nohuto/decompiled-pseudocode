/*
 * XREFs of KiReleaseInterruptConnectLock @ 0x14012D81C
 * Callers:
 *     KeMaskInterrupt @ 0x140124610 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140124828 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14012D61C (KiConnectInterrupt.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseInterruptConnectLock(unsigned __int8 a1, struct _GROUP_AFFINITY *a2)
{
  __writecr8(a1);
  KeRevertToUserGroupAffinityThread(a2);
}
