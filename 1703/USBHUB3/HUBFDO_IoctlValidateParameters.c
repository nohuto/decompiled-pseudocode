/*
 * XREFs of HUBFDO_IoctlValidateParameters @ 0x1C0067554
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B964 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C006760C (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C00677D8 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C00679A8 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0067D2C (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0067F54 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0068114 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C006832C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0068710 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0068CAC (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0068F38 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C00692FC (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C0069724 (HUBFDO_IoctlCyclePort.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
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
    v7 = *(_QWORD *)(a1 + 2488);
    v8 = 29;
LABEL_11:
    WPP_RECORDER_SF_(v7, 2u, 3u, v8, (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( a6 < a5 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, 0x1Eu, (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids);
    return (unsigned int)-1073741789;
  }
  if ( a2 >= 4 && (!*a4 || *a4 > (unsigned int)*(unsigned __int16 *)(a1 + 48)) )
  {
    v7 = *(_QWORD *)(a1 + 2488);
    v8 = 31;
    goto LABEL_11;
  }
  return v6;
}
