/*
 * XREFs of DxgkCompleteFStateTransitionCB @ 0x1C001D2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkCompleteFStateTransitionCB(__int64 a1, int a2, __int64 a3)
{
  DXGADAPTER::CompleteFStateTransitionCB(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 2544LL), a2, a3);
}
