/*
 * XREFs of Bulk_DoesDriverOwnRequests @ 0x1C002A808
 * Callers:
 *     Bulk_Cleanup @ 0x1C002A2D0 (Bulk_Cleanup.c)
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x1C002BA70 (Bulk_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall Bulk_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[40] != a1 + 40 || (_QWORD *)a1[42] != a1 + 42 || (_QWORD *)a1[44] != a1 + 44;
}
