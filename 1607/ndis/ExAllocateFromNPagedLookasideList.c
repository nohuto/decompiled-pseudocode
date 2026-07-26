/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C0065DC8
 * Callers:
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C006568C (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C0066094 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
