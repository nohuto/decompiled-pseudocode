/*
 * XREFs of Bulk_DoesDriverOwnRequests @ 0x1C0029B8C
 * Callers:
 *     Bulk_Cleanup @ 0x1C0029700 (Bulk_Cleanup.c)
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x1C002D1B0 (Bulk_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall Bulk_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[40] != a1 + 40 || (_QWORD *)a1[42] != a1 + 42 || (_QWORD *)a1[44] != a1 + 44;
}
