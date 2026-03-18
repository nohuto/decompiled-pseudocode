/*
 * XREFs of DxgPresentDisplayOnlyProgressCB @ 0x1C001D290
 * Callers:
 *     <none>
 * Callees:
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C0021818 (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 */

void __fastcall DxgPresentDisplayOnlyProgressCB(__int64 a1, const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  DXGDODPRESENT *v2; // rcx

  v2 = *(DXGDODPRESENT **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 2544LL) + 1984LL) + 320LL);
  if ( v2 )
    DXGDODPRESENT::PresentDisplayOnlySetProgress(v2, a2);
}
