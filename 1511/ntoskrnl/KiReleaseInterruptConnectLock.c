/*
 * XREFs of KiReleaseInterruptConnectLock @ 0x140122A6C
 * Callers:
 *     KeMaskInterrupt @ 0x140115CE8 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140115E6C (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14012286C (KiConnectInterrupt.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseInterruptConnectLock(unsigned __int8 a1, struct _GROUP_AFFINITY *a2)
{
  __writecr8(a1);
  KeRevertToUserGroupAffinityThread(a2);
}
