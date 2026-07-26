/*
 * XREFs of ndisFIndicateStatusWrapper @ 0x1C0014700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFIndicateStatusWrapper(_QWORD *Parameter)
{
  ndisFIndicateStatusInternal(Parameter[1], Parameter[3]);
}
