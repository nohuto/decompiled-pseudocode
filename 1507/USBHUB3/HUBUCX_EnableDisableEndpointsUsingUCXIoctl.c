/*
 * XREFs of HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001C60C
 * Callers:
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C001A1D0 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency @ 0x1C001A290 (HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C001A7D0 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C001DBC4 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001C170 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

void __fastcall HUBUCX_EnableDisableEndpointsUsingUCXIoctl(__int64 a1)
{
  unsigned int v2; // edx
  __int64 *v3; // r9
  __int64 i; // rax
  unsigned int j; // ecx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  _DWORD *v8; // rdi
  __int64 k; // rdx
  int v10; // eax
  int v11; // [rsp+28h] [rbp-10h]

  if ( !*(_DWORD *)(a1 + 128) )
  {
    if ( !*(_DWORD *)(a1 + 112) )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x16u,
        (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 2400),
        0LL);
      v2 = 4028;
LABEL_4:
      HUBSM_AddEvent(a1 + 488, v2);
      return;
    }
    if ( (*(_DWORD *)(a1 + 1620) & 0x8000) != 0 )
    {
      v3 = (__int64 *)(*(_QWORD *)(a1 + 48) + 16LL);
      for ( i = *v3; ; i = *(_QWORD *)(v7 + 8) )
      {
        v7 = i - 8;
        if ( v3 == (__int64 *)(v7 + 8) )
          break;
        for ( j = 0; j < *(_DWORD *)(v7 + 24); ++j )
        {
          v6 = (unsigned __int64)j << 6;
          if ( *(_DWORD *)(v6 + v7 + 48) == 3 )
            *(_DWORD *)(v6 + v7 + 48) = 6;
        }
      }
      *(_DWORD *)(a1 + 1548) = -2147481856;
      *(_DWORD *)(a1 + 1544) = -1073741823;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x17u,
        (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids);
      v2 = 4020;
      goto LABEL_4;
    }
  }
  v8 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a1 + 416),
                   0LL);
  memset(v8, 0, 0x58uLL);
  *v8 = 88;
  *((_QWORD *)v8 + 1) = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
  *((_QWORD *)v8 + 2) = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(a1 + 1620) & 0x8000) == 0 )
  {
    v8[6] = *(_DWORD *)(a1 + 112);
    *((_QWORD *)v8 + 4) = *(_QWORD *)(a1 + 104);
  }
  v8[10] = *(_DWORD *)(a1 + 128);
  *((_QWORD *)v8 + 6) = *(_QWORD *)(a1 + 120);
  v8[14] = *(_DWORD *)(a1 + 144);
  *((_QWORD *)v8 + 8) = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(a1 + 48) != -32LL )
  {
    *((_BYTE *)v8 + 80) = *(_BYTE *)(*(_QWORD *)(a1 + 48) + 37LL);
    if ( *(_QWORD *)(a1 + 64) )
    {
      for ( k = 0LL; k < 2; ++k )
        *((_BYTE *)v8 + k + 81) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + k + 2);
    }
  }
  v10 = HUBUCX_SubmitUcxIoctl(a1, 0x491037u);
  if ( v10 < 0 )
  {
    v11 = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x18u,
      (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
      v11);
  }
}
