/*
 * XREFs of RaFreeIoResource @ 0x1C00367D0
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0002850 (StorRemoveIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C001322C (StorNextIoGatewayItem.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaFreeIoResource(__int64 a1, struct _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 64) )
    a1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * LODWORD(a2->Next));
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
}
