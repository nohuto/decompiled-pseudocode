/*
 * XREFs of AudioDGGetDeviceGraphWnfStateName @ 0x140033850
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateDeviceGraphWnfState@@YAJXZ @ 0x140027160 (-CreateDeviceGraphWnfState@@YAJXZ.c)
 */

__int64 __fastcall AudioDGGetDeviceGraphWnfStateName(__int64 a1, struct _WNF_STATE_NAME *a2)
{
  int DeviceGraphWnfState; // ebx

  DeviceGraphWnfState = CreateDeviceGraphWnfState();
  if ( DeviceGraphWnfState >= 0 )
  {
    PublishDeviceGraphWnfState();
    *a2 = g_DeviceGraphWnfStateName;
  }
  return (unsigned int)DeviceGraphWnfState;
}
