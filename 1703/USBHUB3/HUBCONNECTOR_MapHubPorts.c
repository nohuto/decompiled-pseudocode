/*
 * XREFs of HUBCONNECTOR_MapHubPorts @ 0x1C006DA38
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B50 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C006CE88 (HUBCONNECTOR_RegisterPort.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1C006D5AC (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBCONNECTOR_MapIntegratedHubPorts @ 0x1C006D854 (HUBCONNECTOR_MapIntegratedHubPorts.c)
 *     HUBCONNECTOR_MapExternalHubPorts @ 0x1C006D950 (HUBCONNECTOR_MapExternalHubPorts.c)
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C006DB6C (HUBCONNECTOR_UnMapHubPorts.c)
 */

void __fastcall HUBCONNECTOR_MapHubPorts(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __int128 v5; // xmm0
  int v6; // edx

  if ( (*(_DWORD *)(a1 + 40) & 0x40000) != 0 )
  {
    v2 = (_QWORD *)(a1 + 2328);
    v3 = *(_QWORD *)(a1 + 2328) - 248LL;
    v4 = (_QWORD *)(v3 + 248);
    if ( v2 == (_QWORD *)(v3 + 248) )
      return;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v3 + 204) & 5) == 5 )
      {
        v5 = *(_OWORD *)(v3 + 1352);
        *(_DWORD *)(v3 + 1368) = 2;
        *(_OWORD *)(v3 + 1372) = v5;
        *(_QWORD *)(v3 + 1416) = (*(_DWORD *)(v3 + 1380) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(v3 + 1380)) & 0x7F80)) >> 7;
        v6 = HUBCONNECTOR_RegisterPort(v3);
        if ( v6 < 0 )
          break;
      }
      v3 = *v4 - 248LL;
      v4 = (_QWORD *)*v4;
      if ( v2 == v4 )
        return;
    }
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2488),
      2u,
      6u,
      0x1Bu,
      (__int64)&WPP_87e3f05bec5a3ef5eeee36d3d8873aec_Traceguids,
      v6);
    HUBCONNECTOR_UnMapHubPorts(a1);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFBFFFF);
  }
  if ( *(_BYTE *)(a1 + 232) )
  {
    if ( *(_WORD *)(a1 + 280) )
      HUBCONNECTOR_MapIntegratedHubPorts(a1);
    else
      HUBCONNECTOR_MapExternalHubPorts(a1);
  }
  else
  {
    HUBCONNECTOR_MapRootHubPorts(a1);
  }
}
