/*
 * XREFs of TR_Enable_Internal @ 0x1C00253CC
 * Callers:
 *     Endpoint_Enable @ 0x1C001D8B0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0021640 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0021900 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     TR_InitializeTransferRing @ 0x1C00254E8 (TR_InitializeTransferRing.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0027080 (WPP_RECORDER_SF_DDqd.c)
 */

__int64 __fastcall TR_Enable_Internal(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  int v4; // edx

  TR_InitializeTransferRing(a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(a1[4] + 24LL))(a1);
  v3 = a1[7];
  v4 = *(_DWORD *)(v3 + 144);
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_DDqd(
    *(_QWORD *)(a1[5] + 64LL),
    v4,
    v3,
    17,
    (__int64)&WPP_7e99ab8c306b357b4764855264695a8e_Traceguids,
    *(_BYTE *)(a1[6] + 135LL),
    *(_DWORD *)(v3 + 144),
    *(_QWORD *)(v3 + 24),
    v2);
  return v2;
}
