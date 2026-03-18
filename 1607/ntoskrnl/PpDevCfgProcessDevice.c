/*
 * XREFs of PpDevCfgProcessDevice @ 0x14064134C
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PiConfigureDevice @ 0x1406496A8 (PiConfigureDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpDevCfgProcessDevice(__int64 a1, void *a2, char a3)
{
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice(a1, a2, a3);
  else
    return 3221225659LL;
}
