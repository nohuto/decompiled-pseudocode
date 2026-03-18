/*
 * XREFs of HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake @ 0x1C0016AF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C001E44C (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake(__int64 a1)
{
  HUBUCX_PurgeDeviceIoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
