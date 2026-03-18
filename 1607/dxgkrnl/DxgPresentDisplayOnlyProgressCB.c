/*
 * XREFs of DxgPresentDisplayOnlyProgressCB @ 0x1C00221A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C0028338 (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 */

void __fastcall DxgPresentDisplayOnlyProgressCB(__int64 a1, const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  DXGDODPRESENT *v2; // rcx

  v2 = *(DXGDODPRESENT **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 3688LL) + 2128LL) + 256LL);
  if ( v2 )
    DXGDODPRESENT::PresentDisplayOnlySetProgress(v2, a2);
}
