/*
 * XREFs of HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C0020820
 * Callers:
 *     HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach @ 0x1C0018C50 (HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach.c)
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFile @ 0x1C0018D30 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFile.c)
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending @ 0x1C0018D60 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001F250 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 */

void __fastcall HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r11
  __int64 i; // r8
  unsigned int j; // r9d
  unsigned __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r8

  v1 = *(_QWORD *)(a1 + 48);
  if ( !v1 )
    goto LABEL_4;
  if ( !*(_DWORD *)(a1 + 96) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x34u,
      (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids);
LABEL_4:
    HUBSM_AddEvent(a1 + 488, 4028);
    return;
  }
  *(_DWORD *)(a1 + 112) = 0;
  v3 = v1 + 16;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  for ( i = *(_QWORD *)(v1 + 16); ; i = *(_QWORD *)(v8 + 8) )
  {
    v8 = i - 8;
    if ( v3 == v8 + 8 )
      break;
    for ( j = 0; j < *(_DWORD *)(v8 + 24); ++j )
    {
      v6 = (unsigned __int64)j << 6;
      v7 = *(_DWORD *)(v6 + v8 + 48);
      if ( v7 == 4 )
      {
        *(_DWORD *)(v6 + v8 + 48) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v6 + v8 + 40);
      }
      else if ( v7 == 6 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v6 + v8 + 40);
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 128) )
    goto LABEL_4;
  HUBUCX_EnableDisableEndpointsUsingUCXIoctl(a1);
}
