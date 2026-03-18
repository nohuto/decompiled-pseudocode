/*
 * XREFs of HUBMISC_GetActivityIdIrp @ 0x1C0026CEC
 * Callers:
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C00634A8 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0063674 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C00639F4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0063C14 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0063DD0 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C0063FE4 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C00643C4 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0064878 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0064B00 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0064EA8 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C00652D0 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C0065794 (HUBFDO_IoctlResetHub.c)
 * Callees:
 *     <none>
 */

__int64 HUBMISC_GetActivityIdIrp()
{
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    return ((__int64 (*)(void))WPP_MAIN_CB.Queue.Wcb.DeviceObject)();
  else
    return 3221226021LL;
}
