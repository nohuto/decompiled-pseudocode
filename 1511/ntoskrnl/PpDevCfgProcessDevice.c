/*
 * XREFs of PpDevCfgProcessDevice @ 0x140510468
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PiConfigureDevice @ 0x140614C4C (PiConfigureDevice.c)
 * Callees:
 *     <none>
 */

__int64 PpDevCfgProcessDevice()
{
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice();
  else
    return 3221225659LL;
}
