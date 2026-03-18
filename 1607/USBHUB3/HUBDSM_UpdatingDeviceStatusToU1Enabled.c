/*
 * XREFs of HUBDSM_UpdatingDeviceStatusToU1Enabled @ 0x1C001C320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_UpdatingDeviceStatusToU1Enabled(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 2200LL), 4u);
  return 4077LL;
}
