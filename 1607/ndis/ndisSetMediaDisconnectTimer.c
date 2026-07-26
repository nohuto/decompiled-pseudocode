/*
 * XREFs of ndisSetMediaDisconnectTimer @ 0x1C0020040
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C001B600 (NdisSetTimer.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __fastcall ndisSetMediaDisconnectTimer(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 124);
  if ( (v1 & 0x20) != 0 && (*(_BYTE *)(a1 + 4484) & 8) != 0 && (v1 & 8) == 0 && ndisReferenceMiniport(a1, 0xBu) )
  {
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_qD(142LL, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, a1, *(unsigned __int16 *)(a1 + 3732));
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 0xFFFFFDF7 | 8;
    NdisSetTimer((PNDIS_TIMER)(a1 + 1392), 1000 * *(unsigned __int16 *)(a1 + 3732));
  }
}
