/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C0022FC4
 * Callers:
 *     DpIndicateChildStatus @ 0x1C0022A50 (DpIndicateChildStatus.c)
 *     DpiPdoHandleStatusIndication @ 0x1C0028470 (DpiPdoHandleStatusIndication.c)
 *     DpiPdoPollingWorkItem @ 0x1C0172580 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
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
