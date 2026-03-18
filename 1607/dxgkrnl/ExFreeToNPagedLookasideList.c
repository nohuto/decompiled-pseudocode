/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C0029B04
 * Callers:
 *     DpIndicateChildStatus @ 0x1C0029560 (DpIndicateChildStatus.c)
 *     DpiPdoHandleStatusIndication @ 0x1C002F8D0 (DpiPdoHandleStatusIndication.c)
 *     DpiPdoPollingWorkItem @ 0x1C019C1F0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
}
