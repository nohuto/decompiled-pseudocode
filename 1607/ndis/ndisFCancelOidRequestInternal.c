/*
 * XREFs of ndisFCancelOidRequestInternal @ 0x1C00583B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFCancelOidRequestInternal(_QWORD *a1)
{
  ndisCancelOidRequestInternal(*(_QWORD *)(a1[1] + 32LL), a1[1], a1[3], 0);
}
