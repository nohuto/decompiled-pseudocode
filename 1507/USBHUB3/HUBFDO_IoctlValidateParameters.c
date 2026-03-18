/*
 * XREFs of HUBFDO_IoctlValidateParameters @ 0x1C0063230
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000AEA0 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C00632E4 (HUBFDO_IoctlGetPortStatus.c)
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
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBFDO_IoctlValidateParameters(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rcx
  unsigned __int16 v8; // r9

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 40) & 0x40) == 0 )
    return (unsigned int)-1073741823;
  if ( a3 < a2 )
  {
    v7 = *(_QWORD *)(a1 + 2440);
    v8 = 34;
LABEL_11:
    WPP_RECORDER_SF_(v7, 2u, 3u, v8, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( a6 < a5 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 2u, 3u, 0x23u, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids);
    return (unsigned int)-1073741789;
  }
  if ( a2 >= 4 && (!*a4 || *a4 > (unsigned int)*(unsigned __int16 *)(a1 + 44)) )
  {
    v7 = *(_QWORD *)(a1 + 2440);
    v8 = 36;
    goto LABEL_11;
  }
  return v6;
}
