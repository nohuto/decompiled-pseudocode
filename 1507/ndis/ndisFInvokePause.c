/*
 * XREFs of ndisFInvokePause @ 0x1C00B087C
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00EB488 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokePause(__int64 a1, _NDIS_FILTER_PAUSE_PARAMETERS *a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // edi
  void *v8; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x76u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v8 = *(void **)(a1 + 904)) != 0LL )
    v5 = ndisVerifierNdisDispatch->NdisFilterPauseHandler(
           *(void **)(a1 + 24),
           a2,
           v8,
           *(int (__fastcall **)(void *, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200));
  else
    v5 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x77u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1, v5);
  return v6;
}
