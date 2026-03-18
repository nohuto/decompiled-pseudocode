/*
 * XREFs of KiReleaseInterruptConnectLock @ 0x14012D2AC
 * Callers:
 *     KeMaskInterrupt @ 0x1401240A0 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x1401242B8 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14012D0AC (KiConnectInterrupt.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseInterruptConnectLock(unsigned __int8 a1, struct _GROUP_AFFINITY *a2)
{
  __writecr8(a1);
  KeRevertToUserGroupAffinityThread(a2);
}
