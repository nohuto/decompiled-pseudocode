/*
 * XREFs of ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C00C3430
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C0067ED8 (-ProcessStatusChange@DXGPROCESS@@AEAAXXZ.c)
 */

void __fastcall DxgkpProcessStatusChangeWork(volatile signed __int32 *a1)
{
  DXGPROCESS::ProcessStatusChange((DXGPROCESS *)a1);
  _InterlockedDecrement(a1 + 81);
}
