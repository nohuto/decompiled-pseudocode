/*
 * XREFs of DxgkCompletePStateTransitionCB @ 0x1C0022250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkCompletePStateTransitionCB(__int64 a1, int a2, unsigned int a3)
{
  DXGADAPTER::CompletePStateTransitionCB(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3688LL), a2, a3);
}
