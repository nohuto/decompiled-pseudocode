/*
 * XREFs of ndisUpdateNoPauseOnSuspend @ 0x1C00A4E98
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00A00B0 (NdisMSetMiniportAttributes.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0019450 (NdisNblTrackerDeregisterComponent.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0019AD0 (NdisNblTrackerRegisterComponent.c)
 */

void __fastcall ndisUpdateNoPauseOnSuspend(__int64 a1)
{
  unsigned __int8 v2; // al

  if ( *(int *)(a1 + 1872) < 0
    && ((v2 = *(_BYTE *)(a1 + 3188), v2 > 6u) || v2 == 6 && *(_BYTE *)(a1 + 3189) >= 0x1Eu)
    && ndisNoPauseOnSuspend )
  {
    *(_DWORD *)(a1 + 2688) |= 0x80u;
    if ( !*(_QWORD *)(a1 + 3960) )
      *(_QWORD *)(a1 + 3960) = NdisNblTrackerRegisterComponent(3, a1, *(_QWORD *)(a1 + 3912));
  }
  else
  {
    *(_DWORD *)(a1 + 2688) &= ~0x80u;
    NdisNblTrackerDeregisterComponent(*(_QWORD *)(a1 + 3960));
    *(_QWORD *)(a1 + 3960) = 0LL;
  }
}
