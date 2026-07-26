/*
 * XREFs of ndisFIndicateStatusWrapper @ 0x1C001C0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFIndicateStatusWrapper(_QWORD *Parameter)
{
  ndisFIndicateStatusInternal(Parameter[1], Parameter[3]);
}
