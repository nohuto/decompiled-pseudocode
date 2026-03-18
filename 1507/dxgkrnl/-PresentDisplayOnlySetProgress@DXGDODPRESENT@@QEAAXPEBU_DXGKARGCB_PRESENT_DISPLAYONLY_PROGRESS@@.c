/*
 * XREFs of ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C0021928
 * Callers:
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C001D090 (DxgPresentDisplayOnlyProgressCB.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0021768 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?PresentDisplayOnlySetProgress@BLTQUEUE@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C00218D0 (-PresentDisplayOnlySetProgress@BLTQUEUE@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z.c)
 */

void __fastcall DXGDODPRESENT::PresentDisplayOnlySetProgress(
        DXGDODPRESENT *this,
        const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  __int64 VidPnSourceId; // rax
  __int64 v3; // r8

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId < *(_DWORD *)this )
  {
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
      BLTQUEUE::PresentDisplayOnlySetProgress((struct _KEVENT *)(v3 + 2384 * VidPnSourceId), a2);
  }
}
