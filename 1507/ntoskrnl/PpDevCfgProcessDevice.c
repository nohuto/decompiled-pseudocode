/*
 * XREFs of PpDevCfgProcessDevice @ 0x140587928
 * Callers:
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     PiConfigureDevice @ 0x1405878B8 (PiConfigureDevice.c)
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
