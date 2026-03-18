/*
 * XREFs of HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset @ 0x1C00076C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_ReleaseWdfPowerReference @ 0x1C000A9E8 (HUBFDO_ReleaseWdfPowerReference.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000C9D4 (HUBMUX_QueuePowerDownEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBFDO_ReleaseWdfPowerReference(v1);
  HUBMUX_QueuePowerDownEventToDSMs(v1, 4022LL);
  return 1000LL;
}
