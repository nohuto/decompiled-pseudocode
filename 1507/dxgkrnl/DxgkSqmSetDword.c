/*
 * XREFs of DxgkSqmSetDword @ 0x1C001FBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkSqmSetDword(int a1, int a2)
{
  return DxgkSqmGenericDword(&Dxgk_SqmSetDwordEvt, a1, a2);
}
