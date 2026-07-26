/*
 * XREFs of ndisSetMediaDisconnectTimer @ 0x1C0018DAC
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2190 (-UpdateBindings@BindEngine@Ndis@@AEAAXXZ.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C001BBC0 (NdisSetTimer.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __fastcall ndisSetMediaDisconnectTimer(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 124);
  if ( (v2 & 0x20) != 0 && (*(_BYTE *)(a1 + 4484) & 8) != 0 && (v2 & 8) == 0 )
  {
    LOBYTE(a2) = 11;
    if ( (unsigned __int8)ndisReferenceMiniport(a1, a2) )
    {
      if ( (unsigned __int8)byte_1C0085315 >= 4u )
        WPP_SF_qD(134LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, *(unsigned __int16 *)(a1 + 3732));
      *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 0xFFFFFDF7 | 8;
      NdisSetTimer((PNDIS_TIMER)(a1 + 1392), 1000 * *(unsigned __int16 *)(a1 + 3732));
    }
  }
}
