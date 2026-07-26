/*
 * XREFs of ndisSetMediaDisconnectTimer @ 0x1C0024B88
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C0024B50 (NdisSetTimer.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

void __fastcall ndisSetMediaDisconnectTimer(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 124);
  if ( (v1 & 0x20) != 0 && (*(_BYTE *)(a1 + 4484) & 8) != 0 && (v1 & 8) == 0 && ndisReferenceMiniport(a1) )
  {
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_qD(134LL, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1, *(unsigned __int16 *)(a1 + 3732));
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 0xFFFFFDF7 | 8;
    NdisSetTimer((PNDIS_TIMER)(a1 + 1392), 1000 * *(unsigned __int16 *)(a1 + 3732));
  }
}
