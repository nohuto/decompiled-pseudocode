/*
 * XREFs of HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x1C001F7F4
 * Callers:
 *     HUBDSM_ValidatingInterfaceStatusForRemoteWake @ 0x1C001B860 (HUBDSM_ValidatingInterfaceStatusForRemoteWake.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     Template_pqqh @ 0x1C0009CB4 (Template_pqqh.c)
 *     WPP_RECORDER_SF_q @ 0x1C000F66C (WPP_RECORDER_SF_q.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int16 v11; // [rsp+30h] [rbp-18h]

  v4 = 4077;
  if ( *(_DWORD *)(a1 + 240) != 2 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x1Fu,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      *(_DWORD *)(a1 + 240));
    return 4065;
  }
  v5 = *(_DWORD *)(a1 + 1616);
  v6 = (v5 >> 8) & 1;
  if ( v6 || (*(_BYTE *)(a1 + 1716) & 1) == 0 )
  {
    if ( (v5 & 4) == 0 && v6 && (*(_BYTE *)(a1 + 1716) & 1) == 0 )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        a3,
        0x21u,
        (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
        a1);
      if ( (*(_DWORD *)(a1 + 2420) & 0x10) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 488);
      if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
      {
        v7 = (*(_DWORD *)(a1 + 1616) >> 8) & 1;
        v11 = *(_WORD *)(a1 + 1716) & 1;
        LODWORD(v10) = (*(_DWORD *)(a1 + 1616) >> 8) & 1;
        LODWORD(v9) = (*(_DWORD *)(a1 + 1616) >> 2) & 1;
        goto LABEL_16;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      a3,
      0x20u,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      a1);
    if ( (*(_DWORD *)(a1 + 2420) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 488);
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 1716);
      LOWORD(v7) = *(_WORD *)(a1 + 1716) & 1;
      v11 = v7;
      LODWORD(v10) = (*(_DWORD *)(a1 + 1616) >> 8) & 1;
      LODWORD(v9) = (*(_DWORD *)(a1 + 1616) >> 2) & 1;
LABEL_16:
      Template_pqqh(
        v7,
        &USBHUB3_ETW_EVENT_INTERFACE_WAKE_CAPABILITY_MISMATCH,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24),
        v9,
        v10,
        v11);
    }
  }
  return v4;
}
