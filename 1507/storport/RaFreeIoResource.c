/*
 * XREFs of RaFreeIoResource @ 0x1C0010C34
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     StorRemoveIoGatewayItem @ 0x1C0010B48 (StorRemoveIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C0010CD4 (StorNextIoGatewayItem.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaFreeIoResource(__int64 a1, struct _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 64) )
    a1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * LODWORD(a2->Next));
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
}
