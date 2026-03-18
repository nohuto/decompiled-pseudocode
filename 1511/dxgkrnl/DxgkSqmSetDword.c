/*
 * XREFs of DxgkSqmSetDword @ 0x1C001F920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkSqmSetDword(int a1, int a2)
{
  return DxgkSqmGenericDword(&Dxgk_SqmSetDwordEvt, a1, a2);
}
