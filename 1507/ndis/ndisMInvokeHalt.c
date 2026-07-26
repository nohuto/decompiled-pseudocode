/*
 * XREFs of ndisMInvokeHalt @ 0x1C009BD28
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMInvokeHalt(__int64 a1, _NDIS_HALT_ACTION a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xCAu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, v2);
  if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v2 + 26) & 2) != 0 )
    ndisVerifierNdisDispatch->NdisMiniportHaltExHandler(
      *(void **)(a1 + 24),
      a2,
      (void *)a1,
      *(void **)(a1 + 5024),
      *(void (__fastcall **)(void *, _NDIS_HALT_ACTION))(v2 + 144));
  else
    (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 144))(*(_QWORD *)(a1 + 24), (unsigned int)a2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xCBu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, v2);
}
