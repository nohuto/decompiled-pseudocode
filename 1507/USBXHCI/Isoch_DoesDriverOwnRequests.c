/*
 * XREFs of Isoch_DoesDriverOwnRequests @ 0x1C002476C
 * Callers:
 *     Isoch_WdfEvtDpcForTransferCompletion @ 0x1C0028320 (Isoch_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall Isoch_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[42] != a1 + 42 || (_QWORD *)a1[44] != a1 + 44 || (_QWORD *)a1[46] != a1 + 46;
}
