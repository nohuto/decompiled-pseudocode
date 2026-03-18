/*
 * XREFs of IopWarmEjectDevice @ 0x1406178CC
 * Callers:
 *     PnpProcessCompletedEject @ 0x140603BA0 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     NtInitiatePowerAction @ 0x1404F6BCC (NtInitiatePowerAction.c)
 *     PnpSetPowerVetoEvent @ 0x14060EB68 (PnpSetPowerVetoEvent.c)
 */

__int64 __fastcall IopWarmEjectDevice(_QWORD *a1, SYSTEM_POWER_STATE a2)
{
  __int64 v4; // rdx
  NTSTATUS v5; // ebx
  __int64 v6; // r8

  KeWaitForSingleObject(&IopWarmEjectLock, Executive, 0, 0, 0LL);
  PpDevNodeLockTree(1);
  IopWarmEjectPdo = (__int64)a1;
  PpDevNodeUnlockTree(1);
  v5 = NtInitiatePowerAction(PowerActionWarmEject, a2, 3u, 0);
  if ( v5 == -1073741727 )
    PnpSetPowerVetoEvent(7, v4, v6, a1, 12, 0LL);
  PpDevNodeLockTree(1);
  if ( IopWarmEjectPdo )
  {
    if ( v5 >= 0 )
      v5 = -1073741823;
    IopWarmEjectPdo = 0LL;
  }
  PpDevNodeUnlockTree(1);
  KeSetEvent(&IopWarmEjectLock, 0, 0);
  return (unsigned int)v5;
}
